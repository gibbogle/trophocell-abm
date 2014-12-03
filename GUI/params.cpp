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

{"NT_ANIMATION", 1, 0, 0,
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




//{"IN_VITRO", 0, 0, 1,
//"In vitro simulation",
//"Select in vitro simulation, i.e. in two dimensions"},

//{"FACS_INTERVAL", 30, 0, 0,
//"FACS plot output interval (h)",
//"If > 0, this is the interval (in hours) at which FACS plots will be generated.\n\
// The file naming is: FACS_h#### where #### is the hour"},

//{"SPECIAL_CASE", 0, 0, 0,
//"Special case simulation",
//"Select one of the hard-coded special cases (> 0)"},

//{"SPECIAL_CASE_FILE", 0, 0, 0,
//"",
//"Input file required by the selected hard-coded special case"},

//{"INPUT_FILE", 0, 0, 0,
//"fixed.inpdata",
//"The auxiliary input file contains data that (almost!) never changes"},

//{"DUMMY_IMAGE_BASENAME", 0, 0, 0,
//"3D image base file name",
//"The base name, including path, for saved 3D images. For example, movie/frame will give image files movie/frame00000.jpg, movie/frame00001.jpg, ... \n\
// NOTE the use of the forward slash /."},

//{"DUMMY_STIMULATION_PLOT", 0, 0, 0,
//"Normalized (pMHC*avidity)",
//"In the STAGED case binding durations depend on stage, and the stimulation rate is a Hill function of x = (normalized pMHC)*(normalised avidity). \n\
// Note that the normalised value is the actual value divided by the specified upper limit."},

//{"DUMMY_BINDTIME_PLOT", 0, 0, 0,
//"Normalized (pMHC*avidity)",
//"In the UNSTAGED case the stimulation rate is simply x = (normalized pMHC)*(normalised avidity), and the binding duration is a Hill function of x. \n\
// Note that the normalised value is the actual value divided by the specified upper limit."},

//// Time-series plots
//    {"nDC",                     1, 0,1,"",""},
//    {"ntot_LN",                 1, 0,1,"",""},
//    {"ncogseed",                1, 0,1,"",""},
//    {"ncog_LN",                 1, 0,1,"",""},
//    {"ncog_PER",                1, 0,1,"",""},
//    {"nbnd",                    0, 0,1,"",""},
//    {"nexits",                  0, 0,1,"",""},
//    {"nteffgen0",               0, 0,1,"",""},
//    {"nteffgen",                0, 0,1,"",""},
//    {"act",                     1, 0,1,"",""},
//    {"stim_LN",                 1, 0,1,"",""},
//    {"stim_PER",                0, 0,1,"",""},
//    {"stimrate_LN",             1, 0,1,"",""},
//    {"DCcontact_time",          0, 0,1,"",""},
//    {"DCtravel_time",           0, 0,1,"",""},
//    {"DCbind_time",             0, 0,1,"",""},
//    {"Bound_fraction",          0, 0,1,"",""},
//    {"nDC_SOI",                 0, 0,1,"",""},
//    {"noDC_contact",            0, 0,1,"",""},
//    {"noDC_contacttime",        0, 0,1,"",""},
//    {"totDC_contacttime_LN",    0, 0,1,"",""},
//    {"totDC_contacttime_PER",   0, 0,1,"",""},
//// Profile plots
//    {"CD69",                    0, 0,1,"",""},
//    {"S1PR1",                   1, 0,1,"",""},
//    {"Stimulation",             1, 0,1,"",""},
//    {"Stimulation rate",        1, 0,1,"",""},
//    {"Avidity LN",              1, 0,1,"",""},
//    {"Avidity PER",             0, 0,1,"",""},
//    {"Generation LN",           0, 0,1,"",""},
//    {"DC contact time (min)",   0, 0,1,"",""},
//    {"DC bind time (min)",      0, 0,1,"",""}


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
