#include "simulation.h"
#include <fstream>
#include <string>
#include <cassert>
#include <iostream>

Simulation::Simulation() {
	globalClock = 0;
}

Simulation::Simulation (const Simulation& copy) {}

Simulation::~Simulation () {}

void Simulation::chooseDuration() {
	
	std::cout << "Duration of the simulation : ";
	std::cin >> durationSteps;
	assert(durationSteps>0);

}

void Simulation::run(std::ofstream& out) {
	
	chooseDuration();
	
	//! Initialization of the network
	network.initialize();
	
	unsigned int TSTOP = globalClock + durationSteps;
	
	std::cout << "SIMULATION STARTS" << std::endl;
	
	//! Simulation runs from t=0 to TSTOP
	while (globalClock < TSTOP) {
		//! The network is updated
		network.update(globalClock, out);
		
		std::cout << globalClock*h << " ms " << std::endl;
		//! The global clock is incremented in steps
		++globalClock;
	}
	
	std::cout << "END OF SIMULATION" << std::endl;
	
}

