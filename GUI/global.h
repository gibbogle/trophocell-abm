#ifndef GLOBAL_H
#define GLOBAL_H

#include <QtGui>
#include <QMutex.h>
#include "profile.h"

#define MAX_TC 100000

namespace Global
{
    extern QMutex mutex1, mutex2;

    extern int NX, NY, NZ;
    extern double DELTA_T;
    extern int ncpu;
    extern int nsteps;
    extern int nt_vtk;
    extern int istep;  // ???
    extern bool leftb;
    extern int delay;
    extern int summary_interval;

//    int nvars_used;
//    int GUI_to_DLL_index[32];
//    int DLL_to_GUI_index[32];
//    QString var_string[32];

    extern double *FACS_data;
    extern int nFACS_cells;
    extern int nFACS_dim;
    extern int nFACS_vars;

    extern double *profile_x[20];
    extern double *profile_y[20];
    extern int profile_n[20];

    extern int summaryData[100];

//    double concData[4000];
//    int conc_nc;
//    double conc_dx;

    extern bool showingVTK;
    extern bool recordingVTK;
    extern bool showingFACS;
    extern bool recordingFACS;

    extern int VTKbuffer[100];
    extern int *TC_list;
    extern int nTC_list;

    extern bool redimflag;
    extern int recordfrom;
    extern int recordto;

} // namespace Global

#endif // GLOBAL_H
