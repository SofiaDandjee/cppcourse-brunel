#include <iostream>
#include "../src/neuron.h"
#include "../src/network.h"
#include "gtest/gtest.h"
#include <random>
#include <vector>

TEST (NeuronTest, PositiveCurrent) {
	int simtime = 0;
	Neuron neuron;
	neuron.setCurrent(1.0);
	//! First update test (0.1 ms or 1 step)
	neuron.update(0);
	EXPECT_EQ(20.0*(1.0-std::exp(-0.1/20.0)), neuron.getPotential());
	//! Second update test (200 ms or 2000 steps)
	while (simtime < 2000) {
		neuron.update(0);
		++simtime;
	}
	
	//! The neuron should never spike
	EXPECT_EQ(0,neuron.getSpikeNumber());
	//! The potential should tend towards the threshold (20 mV) but never reach it
	EXPECT_GT(1E-3, std::fabs(19.999-neuron.getPotential()));
	
}

TEST (NeuronTest, NullCurrent) {
	
	int simtime =0;
	Neuron neuron;
	
	//! We suppose that a neuron had a certain potential, the potential should decrease from this potential to 0
	neuron.setPotential(20);
	
	//! Third update test (200 ms or 2000 steps)
	neuron.setCurrent(0.0);
	while (simtime < 2000) {
	neuron.update(0);
	++simtime;
	}
	
	EXPECT_NEAR(0, neuron.getPotential(), 1E-3);
}


TEST (NeuronTest, NegativeCurrent) {
	
	int simtime = 0;
	Neuron neuron;
	neuron.setCurrent(-1.0);
	
	//! Second update test (200 ms or 2000 steps)
	while (simtime < 2000) {
		neuron.update(0);
		++simtime;
	}
	//! The neuron should never spike
	EXPECT_EQ(0,neuron.getSpikeNumber());
	//! The potential should tend towards -20 mV but never reach it
	EXPECT_GT(1E-3, std::fabs(-19.999-neuron.getPotential()));
	
}

TEST (NeuronTest, NumberSpikes) {
	int simtime = 0;
	
	//! Expected time of the spikes
	std::vector<double> expectedSpikeTimes ({92.4,186.8,281.2, 375.6});
	
	//! Second update test (300 ms)
	Neuron neuron;
	neuron.setCurrent(1.01);
	while (simtime < 4000) {
	neuron.update(0);
	++simtime;
	}
	
	for (size_t i(0); i < expectedSpikeTimes.size(); ++i) {
		EXPECT_EQ(expectedSpikeTimes[i],neuron.getSpikeTimes()[i]);
	}
	
	//! 4 spikes expected
	EXPECT_EQ(4,neuron.getSpikeNumber());
}

TEST (NeuronTest, Delay) {
	
	int simtime=0;
	Neuron neuron1;
	Neuron neuron2;
	
	neuron1.setCurrent(1.01);
	
	//! We know that neuron 1 first spikes at 92.4 ms and the delay is 1.5 ms so the neuron should receive J at 93.9 ms
	while (simtime < 1000) {
		
		if (neuron1.update(0)) {
			neuron2.receive(simtime+D_steps,J);
		}
		neuron2.update(0);
		if (simtime < 939) {
			EXPECT_EQ(neuron2.getPotential(),0.0);
		}
		if (simtime == 939) {
			EXPECT_EQ (neuron2.getPotential(),J);
		}
		++simtime;
	}

}

TEST (NeuronTest, TargetSpike) {

int simtime=0;
	Neuron neuron1;
	Neuron neuron2;
	
	neuron1.setCurrent(1.01);
	//! This time, we give a positive input to neuron 2 so that when he receives J, he is close to the threshold and can spike
	neuron2.setCurrent (1.00);
	
	//! We know that neuron 1 second spikes at 186.8 ms and the delay is 1.5 ms so the neuron should receive J at 188.3 ms
	while (simtime < 2000) {
		
		if (neuron1.update(0)) {
			neuron2.receive(simtime+D_steps,J);
		}
		neuron2.update(0);
		//! Just before neuron 2 spikes 
		if (simtime == 1882) {
			EXPECT_EQ(neuron2.getSpikeNumber(),0.0);
		}
		
		//! Right after neuron 2 spikes, its potential should be reset to 0
		if (simtime == 1884) {
			EXPECT_EQ (neuron2.getPotential(),0);
			EXPECT_EQ (neuron2.getSpikeNumber(), 1);
		}
		++simtime;
	}

}

TEST (NetworkTest, Connexions) {
	
	Network network;
	
	network.initialize();
	
	for (auto&& neuron : network.getNeurons()) {
		std::cout << neuron.getTargets().size() << std::endl;
	}
	
	static std::random_device rd;
	static std::mt19937 gen(rd());
	
	//! We choose a random neuron among N
	static std::uniform_int_distribution<> chooseNeuron(0, N);
	int randomNeuron = chooseNeuron (gen);
	
	//! Number of times the neuron is another exhibitory neuron's target list
	
	unsigned int countE (0);
	
	for (auto neuron : network.getNeurons()) {
		for (auto target : neuron.getTargets() ) {
			if (randomNeuron == target) {
				++countE;
			}
		}
	}
	
	//! We check that the random neuron is the target list of CE neurons
	EXPECT_EQ (countE, CE);
	
	//! Number of times the neuron is another inhibitory neuron's target list
	unsigned int countI (0);
	
	for (size_t i(NE); i < N; ++i) {
		for (auto target : network.getNeurons()[i].getTargets() ) {
			if (randomNeuron == target) {
				++countI;
			}
		}
	}
	
	//! We check that the random neuron is the target list of CI neurons
	EXPECT_EQ (countI, CI);
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
