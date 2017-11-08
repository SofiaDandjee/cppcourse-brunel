#ifndef NEURON_H
#define NEURON_H

#include <vector>
#include <cmath>
#include <cassert>
#include "constants.h"

//! A neuron class
/*!
  Object of the Brunel simulation
*/

class Neuron {
	
	private:
	
	double membranePotential; //!< Membrane potential in mV
	unsigned int spikeNumber; //!<  Number of spikes of the neuron
	std::vector <double> spikeTimes; //!< Times of all the spikes that occured
	double lastSpike; //!< Time of the last spike that occured
	unsigned int localClock; //!< Local time of the neuron in steps
	std::vector<unsigned int> targetNumbers; //!< Index of the target neurons
	std::vector <double> ringBuffer; //!< Ring buffer that receives incoming spikes
	double Iext; //!< External current input received
	double receivedAmplitude; //!< Sum of spikes received
	
	
	public:
	
	//! A default constructor
	/*! Initializes the size of the ring buffer and the target connexions vector
	  Initializes the potential, the number of spikes, the time of the last spike, the local clock, the external current and the received amplitude to 0
	 */
	Neuron ();
	
	//! A Destructor
	~Neuron ();
	
	//! Calculates the membrane potential of the instance
	/*!
	  \param input a double the external current
	  \param backgroundNoise the input of the background noise of the brain
	*/
	void updatePotential(double input, double backgroundNoise);
	
	//! Getter of the potential
	/*!
	  \return the membrane potential a double
	*/
	double getPotential() const;
	
	//! Setter of the potential
	/*!
	  \param mP a double the new value of the potential
	*/
	void setPotential(double mP);
	
	//! Getter of the number of spikes of the instance
	/*!
	  \return the number of spikes an unsigned int
	*/
	unsigned int getSpikeNumber() const;
	
	//! Updates the state of the neuron (active or refractory)
	/*!
	  \param backgroundNoise a double the amplitude of the background noise
	  \return a boolean true if the neuron has spiked false if not
	*/
	bool update(double backgroundNoise);
	
	 //! Receives an incoming spike and writes it in the ring buffer
	/*!
	  \param delay an int
	  \param weight of the connexion a double
	*/
	void receive(int delay, double weight);
	
	//! Getter for the neuron targets of the instance (referenced according to their number)
	/*!
	  \return targetNumbers a vector of unsigned ints
	*/
	std::vector<unsigned int> getTargets () const;
	
	//! Setter for the external current input
	/*!
	  \param iext a double the nex external current
	*/
	void setCurrent(double iext);
	
	//! Getter for the spike times
	/*!
	  \return the spike times a vector of double
	*/
	std::vector<double> getSpikeTimes() const;
	
	//! Adds a target neuron to targetNumbers
	/*!
	  \param targetnumber an unsigned int the number of the target neuron
	*/
	void addTarget (unsigned int targetnumber);

};

#endif
