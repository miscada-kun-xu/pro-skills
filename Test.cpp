#include "googletest/include/gtest/gtest.h"
#include "gs.cpp" // Include the header file with Gray-Scott simulation functions

TEST(VariablesSizeTest, UAndVAreSameSize) {
    // Replace these with actual model parameters
    double F = 0.02;
    double k = 0.05;

    // Create u and v vectors with different sizes
    std::vector<double> u(10, 0.0);
    std::vector<double> v(15, 0.0);

    // Ensure that the sizes match
    EXPECT_EQ(u.size(), v.size());
}
TEST(ModelParametersTypeTest, TypeMatchesElement) {
    // Replace these with actual model parameters
    double F = 0.02;
    double k = 0.05;

    // Create u and v vectors using different types
    std::vector<float> u(10, 0.0f);
    std::vector<float> v(10, 0.0f);

    // Ensure that the types match
    EXPECT_EQ(typeid(F).name(), typeid(u[0]).name());
    EXPECT_EQ(typeid(k).name(), typeid(u[0]).name());
    EXPECT_EQ(typeid(F).name(), typeid(v[0]).name());
    EXPECT_EQ(typeid(k).name(), typeid(v[0]).name());
}
TEST(SimulationCorrectnessTest, ZeroInitialValues) {
  for (auto& row : u) std::fill(row.begin(), row.end(), 0.0);
  for (auto& row : v) std::fill(row.begin(), row.end(), 0.0);

  simulateStep();  

  for (int x = 1; x < width - 1; ++x) {
    for (int y = 1; y < height - 1; ++y) {
      EXPECT_GT(u[x][y], 0.0) ;
      EXPECT_DOUBLE_EQ(v[x][y], 0.0) ;
    }
  }
}
