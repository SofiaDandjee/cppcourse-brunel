# cppcourse-brunel
Implementation of the recurrent spiking network, described in Brunel, N J. Comp Neuroscience 2000

To compile and run the program:
- "cmake .." then "make" in the ./build
- "./brunel" to run the main
- "./brunelTest" to run the tests
<<<<<<< HEAD

To generate the documentation:
- "cmake .." then "make doc" in the ./build
The HTML output directory is in ./doc
=======
>>>>>>> 9f79dad267f0d1aec13b8dd72a74857553abd556

To generate the documentation:
- "cmake .." then "make doc" in the ./build
The HTML output directory is in ./doc

Spike rate:

a) g=3 eta=2 : ~196 spikes/neuron/sec

b) g=6 eta=4 : ~50 spikes/neuron/sec

c) g=5 eta=2 : ~30-32 spikes/neuron/sec

d) g=4.5 eta=0.9 : ~5 spikes/neuron/sec
