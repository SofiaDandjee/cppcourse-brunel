#ifndef CONSTANTS_H
#define CONSTANTS_H

/*
 * Time related
 */

constexpr double h = 0.1; //!< Steptime in ms
constexpr double D = 1.5; //!< Synaptic delay in ms
static int D_steps = static_cast <unsigned long>  (std::ceil (D/h)); //!< Synaptic delay in steps


/*
 * Neuron related
 */

constexpr double R = 20; //!< Membrane resistance in Gohms
constexpr double C = 1; //!< Capacitance in mF
constexpr double tau = 20; //!<  Time constant is ms
constexpr double reftime = 2; //!< Refractory duration in ms
constexpr double vthr = 20; //!< Threshold potential (necessary to spike) in mV
constexpr double vreset = 0; //!< Reset value of the potential in mV
static double const1 = exp(-h/tau); //!< A calculation constant
static double const2 = R*(1-const1); //!< A second calculation constant

/*
 * Network related
 */
 
constexpr double g = 5; //!< Vthr/Vext
constexpr double eta = 2; //!< Relative inhibitory weight
constexpr double J = 0.1; //!< Weight of a neuron connexion in mV
static double JE = J; //!< Weight of an excitatory connexion in mV
static double JI = -g*J; //!< Weight of an inhibitory connexion in mV
static double rateExt = (eta*vthr*h)/(JE*tau); //!< Firing rate per O.1 ms
constexpr unsigned int N = 12500; //!< Total number of neurons in the network
static unsigned int NE = 0.8*N; //!< Number of excitatory neurons
static unsigned int NI = 0.2*N; //!< Number of inhibitory neurons
static unsigned int CE = 0.1*NE; //!< Number of excitatory inputs per neuron
static unsigned int CI = 0.1*NI; //!< Number of inhibitory inputs per neuron

#endif
