#include "network.h"
#include <iostream>
#include <random>
#include <fstream>

Network::Network () : neurons(N) {
}

Network::~Network () {}

std::vector<Neuron> Network::getNeurons() const {
	return neurons;
}

void Network::initialize() {
	//! Creation of random generators
	static std::random_device rd;
	static std::mt19937 gen(rd());
	//! We Choose a random input excitatory neuron between the NE available
	static std::uniform_int_distribution<> chooseExc(0, NE-1);
	//! We choose a random input inhibitory neuron between the NI available
	static std::uniform_int_distribution<> chooseInh(NE, N-1);
	
	for (size_t i(0); i<neurons.size(); ++i) {
		
		//! We choose CE random inputs among NE available
		for (size_t j (0); j < CE; ++j) {
			int inputNeuron = chooseExc(gen);
			//! The neuron i becomes a target of the chosen NE inputNeuron
			neurons[inputNeuron].addTarget(i);
		}
		
		//! We choose CI random inputs among NI available
		for (size_t k (0); k < CI; ++k) {
			int inputNeuron = chooseInh(gen);
			//! The neuron i becomes a target of the chosen NI inputNeuron
			neurons[inputNeuron].addTarget(i);
		}
	
	}
}

void Network::update(unsigned int simClock, std::ofstream& out) {
	
	bool spike = false;
	
	
	for (size_t i(0); i < neurons.size(); ++i) {
		//! Updates all the network's neurons
		spike=neurons[i].update(JE);
		
		//! If a neuron has spiked, transmit its spike to all its neuron's targets
		if (spike) {
			out << simClock << "\t " << i+1 << " \n";

			//! Send spikes to the target of the spiking neuron
			sendSpike(i, simClock);
			
			}
	}

}
	
void Network::sendSpike(size_t i, unsigned int simClock) {
	for (auto target : neurons[i].getTargets()) {
		if (i < NE) {
			//! If the neuron i is excitatory, sends JE
			neurons[target].receive(simClock+D_steps, JE);
		} else {
			//! If the neuron i is inhibitory, sends JI
			neurons[target].receive(simClock+D_steps, JI);
		}
	}
}
