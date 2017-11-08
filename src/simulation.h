#ifndef SIMULATION_H
#define SIMULATION_H
#include "network.h"

//! A simulation class
/*!
  The Brunel Simulation
*/
class Simulation {
	
	private:
	
	unsigned int globalClock; //!< Global clock in steps of the simulation initialized at t=0
	unsigned int durationSteps; //!< Duration of the simulation in steps of 0.1 ms
	Network network; //!< Network to be simulated
	
	public:
	
	//! A constructor
	/*!
	  Initializes the global clock to 0
	*/
	Simulation();
	
	//! A destructor
	~Simulation ();
	
	//! Asks the user to choose the duration of the simulation in step time
	void chooseDuration();
	
	//! The simulation takes place
	/*!
	  \param out the output file that registers spikes an ostream
	*/
	void run(std::ofstream& out);
	
};

#endif

