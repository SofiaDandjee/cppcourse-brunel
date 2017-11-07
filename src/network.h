#ifndef NETWORK_H
#define NETWORK_H

#include "neuron.h"
#include <vector>
#include <fstream>

constexpr unsigned int N = 12500; //!< Total number of neurons in the network
static unsigned int NE = 0.8*N; //!< Number of excitatory neurons
static unsigned int NI = 0.2*N; //!< Number of inhibitory neurons
static unsigned int CE = 0.1*NE; //!< Number of excitatory inputs per neuron
static unsigned int CI = 0.1*NI; //!< Number of inhibitory inputs per neuron

//! A network class
class Network {
	
	private:
	std::vector<Neuron> neurons; //!< Neurons of the network, first NE excitatory, last NI inhibitory
	
	public:
	
	//! A constructor
	/*!
	  Initializes the size of network to N neurons
	*/
	Network();
	
	//! A default copy constructor
	Network (const Network& copy);
	
	//! A destructor
	~Network ();
	
	//! Getter of the neurons
	/*!
	  \return neurons a vector of Neuron
	*/
	std::vector<Neuron> getNeurons() const;
	
	//! Connects the neurons by choosing random target neurons for each neuron
	void initialize();
	
	//! Updates the network by updating each neuron
	/*!
	  \param simClock an unsigned int the clock of the simulation the network is in
	  \param out the output file that registers spikes, an ostream
	*/
	void update(unsigned int simClock, std::ofstream& out);
	
	//! Sends spikes to each of a given neuron targets
	/*!
	  \param i a size_t the number of the neuron that sends spikes
	  \param simClock an unsigned int the clock of the simulation the network is in
	*/
	void sendSpike(size_t i, unsigned int simClock);

	
};

#endif

