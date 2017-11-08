# cppcourse-brunel
Implementation of the recurrent spiking network, described in Brunel, N J. Comp Neuroscience 2000

To compile and run the program:
- "cmake .." then "make" in the ./build
- "./brunel" to run the main
- "./brunelTest" to run the tests

To generate the documentation:
- "cmake .." then "make doc" in the ./build
The HTML output directory is in ./doc

To generate the documentation:
- "cmake .." then "make doc" in the ./build
The HTML output directory is in ./doc

Spike rate results (1 s):

PLOT A (g=3 eta=2) : ~196 spikes/neuron

PLOT B (g=6 eta=4) : ~50 spikes/neuron

PLOT C (g=5 eta=2) : ~30-32 spikes/neuron

PLOT D (g=4.5 eta=0.9) : ~5 spikes/neuron
