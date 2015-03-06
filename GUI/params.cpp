#include <qstring.h>
#include "params.h"

Params::Params()
{
	PARAM_SET params[] = {

{"NX", 100, 0, 0,
"Lattice size",
"Dimension of the lattice (number of sites in X, Y and Z directions).  Typically 4*BLOB_RADIUS is OK."},

{"NY", 100, 0, 0,
"Lattice size",
"Dimension of the lattice (number of sites in X, Y and Z directions).  Typically 4*BLOB_RADIUS is OK."},

{"DELTA_X", 10, 0, 0,
"Grid spacing",
"Size of lattice grid in um."},

{"DELTA_T", 0.25, 0, 0,
"Time step",
"Time step in minutes"},

{"MOTILITY_BETA", 0.01, 0, 0,
"Motility speed parameter",
"Cell motility is described by speed and persistence parameters, each in the range 0 - 1. \n\
 Median cell speed is roughly proportional to MOTILITY_BETA."},

{"MOTILITY_RHO", 0.25, 0, 0,
"Motility persistence parameter",
"Cell motility is described by speed and persistence parameters, each in the range 0 - 1. \n\
 MOTILITY_RHO determines the extent to which motion is in the same direction from one time step to the next."},

{"NDAYS", 1.0, 0, 0,
"Number of days",
"Length of the simulation.\n\
[days]"},

{"SEED1", 12345, 0, 0,
"First RNG seed",
"The random number generator is seeded by a pair of integers.  Changing the seed generates a different Monte Carlo realization."},

{"SEED2", 56789, 0, 0,
"Second RNG seed",
"The random number generator is seeded by a pair of integers.  Changing the seed generates a different Monte Carlo realization."},

{"NCPU", 1, 1, 8,
"Number of CPUs",
"Number of CPUs to use for the simulation (currently only one used)."},

{"NTCELLS0", 50, 0, 0,
"Number of cells",
"Initial tropho cell population."},

{"RADIUS0", 10, 0, 0,
"Initial radius",
"Initial radius of tropho cell region"},

{"NT_ANIMATION", 10, 0, 0,
 "Animation interval (timesteps)",
 "Interval between animation screen updates (timesteps).  One timestep = 15 sec."},

{"DELAY", 10, 0, 0,
 "Simulation delay",
 "Sleep interval after each simulation time step (ms)"},

{"WRAP", 1, 0, 1,
 "Use wrapping",
 "With wrapping on, cells that exit at one boundary reappear at the opposite boundary"},

{"CHEMO_USED_1", 1, 0, 0,
 "Chemokine used",
 "Chemokine used"},

{"CHEMO_GRAD_AMP_1", 0.1, 0, 0,
 "Gradient amplitude",
 "Amplitude of the chemokine gradient (constant)"},

{"CHEMO_GRAD_DIR_1", 0, 0, 0,
 "Gradient direction (deg.)",
 "Direction of the chemokine gradient (constant).  Degrees anticlockwise from X axis (0 - 360)."},

{"CHEMO_USED_2", 0, 0, 0,
 "Chemokine used",
 "Chemokine used"},

{"CHEMO_GRAD_AMP_2", 0.1, 0, 0,
 "Gradient amplitude",
 "Amplitude of the chemokine gradient (constant)"},

{"CHEMO_GRAD_DIR_2", 90, 0, 0,
 "Gradient direction (deg.)",
 "Direction of the chemokine gradient (constant).  Degrees anticlockwise from X axis (0 - 360)."},

{"BG_FLOW_AMP", 4, 0, 0,
 "Background flow amplitude",
 "Amplitude of the background flow (constant)"},

{"BG_FLOW_DIR", 30, 0, 0,
 "Background flow direction (deg.)",
 "Direction of the background flow (constant)."},

{"SAVE_CELL_POSITIONS", 0, 0, 0,
 "Saved cell positions",
 "Number of cells to save positions for at each time step in the log file"},

// Time-series plots
    {"nDC",                     1, 0,1,"",""},
// Profile plots
    {"CD69",                    0, 0,1,"",""}

};
    nParams = sizeof(params)/sizeof(PARAM_SET);
    workingParameterList = new PARAM_SET[nParams];
    for (int i=0; i<nParams; i++) {
        workingParameterList[i] = params[i];
    }
}


PARAM_SET Params::get_param(int k)
{
	return workingParameterList[k];
}

void Params::set_value(int k, double v)
{
	workingParameterList[k].value = v;
}

void Params::set_label(int k, QString str)
{
	workingParameterList[k].label = str;
}
