#ifndef SIMULATION_H
#define SIMULATION_H

#include <vector>

// Define simulation parameters
const int width = 256;                // Width of the grid
const int height = 256;
extern double Du;
extern double Dv;
extern double F;
extern double k;
extern double threshold;
const double dt = 0.06;               // Time step
const int numIterations = 10000;
const int outputInterval = 100;      // Output every 1000 iterations


// Declare the grid (you may choose to encapsulate these in a class instead)
extern std::vector<std::vector<double>> u;
extern std::vector<std::vector<double>> v;

// Function declarations
void init();
void writeVTKFile(int iteration);
void simulateStep();
double countElementsAboveThreshold(double threshold);

#endif // SIMULATION_H#pragma once
