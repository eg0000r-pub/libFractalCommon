#ifndef FRACTAL_COMMON_H
#define FRACTAL_COMMON_H

#include <vector>
#include <iostream>

#include <Eigen/Eigen>

typedef std::vector<Eigen::Vector3f> Aggregate;

// Calcuate the radius of gyration of an aggregate (optional: use formula from Filippov et al 2000)
float radiusOfGyration(Aggregate const & aggregate, bool useFilippov=false);
// Calculate the center of mass of an aggregate
Eigen::Vector3f centerOfMass(Aggregate const & aggregate);

// Load an aggregate from a .vtk file
void loadVtk(Aggregate & aggregate, const char * path);
// Write an aggregate to a .vtk file
void dumpVtk(Aggregate const & aggregate, const char * path);

// Overload the << operator for Aggregate type;
std::ostream & operator << (std::ostream & os, Aggregate const & aggregate);

#endif //FRACTAL_COMMON_H
