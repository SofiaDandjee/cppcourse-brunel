#include "neuron.h"
#include <random>
#include <iostream>
#include <fstream>

Neuron::Neuron () : ringBuffer(D_steps+1) {
	
	membranePotential = 0;
	spikeNumber=0;
	lastSpike=0;
	localClock=0;
	receivedAmplitude = 0;
	Iext =0;
	
	for (size_t i(0); i < ringBuffer.size() ; ++i) {
		ringBuffer[i]=0;
	}
	
}

Neuron::~Neuron () {}

void Neuron::updatePotential(double input, double backgroundNoise) {
	//! Random generator
	static std::random_device rd;
	static std::mt19937 gen(rd());
	
	//! Produces integer values on a Poisson distribution
	//! to simulate a random number of spikes coming from
	//! the background noise of the brain
	static std::poisson_distribution <> poisson_gen (rateExt);
	
	//! Formula of the membrane potential
	membranePotential=const1*membranePotential+const2*input+receivedAmplitude;
	membranePotential+=backgroundNoise*poisson_gen(gen);
}

double Neuron::getPotential() const {
	return membranePotential;
}

void Neuron::setPotential(double mP) {
	membranePotential = mP;
}

unsigned int Neuron::getSpikeNumber() const {
	return spikeNumber;
}

bool Neuron::update (double backgroundNoise) {
	
	bool spike = false;
	
	const auto t_read = localClock%(D_steps+1);
	
	if (membranePotential > vthr) {
		//! If the neuron's potential becomes higher than the threshold the spikes
		++spikeNumber;
		
		//! We store the time of the spike
		lastSpike=localClock;
		spikeTimes.push_back(localClock*h);
		spike = true;
		
		//The membrane potential is reset to 0 mV
		membranePotential = vreset;
	}
	
	if (lastSpike > 0 and (localClock-lastSpike)*h< reftime) {
		//! The neuron is refractory for 2 ms after the spike and the membrane potential stays at 0 mV
		membranePotential = vreset;
	} else {
		//! The incoming spike is read
		receivedAmplitude = ringBuffer [t_read];
		
		//! The neuron potential is updated
		updatePotential(Iext, backgroundNoise);
	}
	
	//! We reset the buffer at all time steps
	ringBuffer [t_read] = 0;
	
	//! The local clock is incremented in steps
	++localClock;

	return spike;
}

void Neuron::receive(int delay, double weight) {
	//! The incoming spike is written in the buffer
	const auto t_write = delay%(D_steps+1);
	assert (t_write < ringBuffer.size());
	ringBuffer[t_write] += weight;
}


std::vector<unsigned int>  Neuron::getTargets () const {
	return targetNumbers;
}

void Neuron::setCurrent(double input) {
	Iext = input;
}

std::vector<double> Neuron::getSpikeTimes() const {
	return spikeTimes;
}

void Neuron::addTarget (unsigned int targetnumber) {
	targetNumbers.push_back(targetnumber);
}
