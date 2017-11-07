#include <iostream>
#include "simulation.h"
#include "neuron.h"
#include "network.h"
#include <fstream>

int main() {

	
	std::ofstream out; //!< Stream of output
	std::string file ("Spikes.txt"); //!< Potential storing file
	
	//! Opening of the file
	out.open(file.c_str());	
	
	Simulation sim;
	sim.run(out);

	//Closing of the file
	out.close();
	
	return 0;

}
