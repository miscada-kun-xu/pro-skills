<<<<<<< HEAD
#include "googletest/googletest/include/gtest/gtest.h"
#include "simulation.h" // If your simulation is in a header file, include it here.

// Test 1: Check that the type of the model parameters (F, k) matches that of the element type of the u and v vectors.
TEST(SimulationTest, ParameterTypeMatch) {
    EXPECT_TRUE((std::is_same<decltype(F), decltype(u[0][0])>::value));
    EXPECT_TRUE((std::is_same<decltype(k), decltype(v[0][0])>::value));
}

// Test 2: Check that the variables u and v are the same size.
TEST(SimulationTest, VectorSizeMatch) {
    init(); // Assuming init() initializes u and v with the same dimensions.
    EXPECT_EQ(u.size(), v.size());
    for (size_t i = 0; i < u.size(); ++i) {
        EXPECT_EQ(u[i].size(), v[i].size());
    }
}

// Test 3: Check that the simulation produces the mathematically correct answer when u = 0 and v = 0.
TEST(SimulationTest, CorrectOutputForZeroInitialConditions) {
    // Reinitialize u and v with zeros for this test
    std::fill(u.begin(), u.end(), std::vector<double>(height, 0.0));
    std::fill(v.begin(), v.end(), std::vector<double>(height, 0.0));

    // Run one step of the simulation
    simulateStep();

    // Check the state of u and v after one step
    for (const auto& row : u) {
        for (const auto& el : row) {
            EXPECT_DOUBLE_EQ(el, 0.0);
        }
    }
    for (const auto& row : v) {
        for (const auto& el : row) {
            EXPECT_DOUBLE_EQ(el, 0.0);
        }
    }
}
