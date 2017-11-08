#ifndef NETWORK_H
#define NETWORK_H

#include "neuron.h"
#include <vector>
#include <fstream>

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

