// Collection of functions frequently used in fractal analysis
// Made by Egor Demidov in 2023

#ifndef FRACTAL_COMMON_H
#define FRACTAL_COMMON_H

#include <vector>
#include <iostream>

#include <Eigen/Eigen>

typedef std::vector<Eigen::Vector3f> Aggregate;
struct LinearModel {
    float slope;
    float intercept;
};

// Extract a sub-vector based on provided list of indices
template<typename T>
std::vector<T> getSubVector(std::vector<T> const & v, std::vector<int> const & indices);

// Calcuate the radius of gyration of an aggregate (optional: use formula from Filippov et al 2000)
float radiusOfGyration(Aggregate const & aggregate, bool useFilippov=false);
// Calculate the center of mass of an aggregate
Eigen::Vector3f centerOfMass(Aggregate const & aggregate);

// Load an aggregate from a .vtk file
void loadVtk(Aggregate & aggregate, const char * path);
// Write an aggregate to a .vtk file
void dumpVtk(Aggregate const & aggregate, const char * path);

// Algebraic mean
float mean(std::vector<float> const & x);
// Least squares linear regression
LinearModel linearRegression(std::vector<float> const & y, std::vector<float> const & x);

// Overload the << operator for Aggregate type;
std::ostream & operator << (std::ostream & os, Aggregate const & aggregate);

#endif //FRACTAL_COMMON_H
