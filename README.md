# cppcourse-brunel
Implementation of the recurrent spiking network, described in Brunel, N J. Comp Neuroscience 2000 (Dynamics of Sparsely Connected Networks of Excitatory and Inhibitory Spiking Neurons)

ABOUT THE PROGRAM:
The network is formed of  at least N neurons. 80% of them are excitatory and 20% are inhibitory. Background noise of the brain is excitatory.
Each neuron receives spikes from its local connexions (10% input probability) and the background noise of the brain.
The program reproduces the Brunel simulation and records the network spikes at each time step.
The following parameters are used:
N=12500; NE=10000; NI=2500; CE=1000; CI=250

LAUNCH THE PROGRAM:
To compile and run the program:
- "cmake .." then "make" in the ./build folder
- "./brunel" to run the main simulation

To generate the Doxygen documentation:
- "cmake .." then "make doc" in the ./build
The HTML output directory is in ./doc/html folder

USE THE PROGRAM:
Enter the duration of the simulation wanted (in steptime of 0.1 ms) when asked.

TEST THE PROGRAM:
- "cmake .." then "make" in the ./build folder
- "./testBrunel" to run the tests
The tests include testing of the neuron and network classes.

Spike rate results (1s simulation):

PLOT A (g=3 eta=2) : ~196 spikes/neuron

PLOT B (g=6 eta=4) : ~50 spikes/neuron

PLOT C (g=5 eta=2) : ~30-32 spikes/neuron

PLOT D (g=4.5 eta=0.9) : ~5 spikes/neuron
