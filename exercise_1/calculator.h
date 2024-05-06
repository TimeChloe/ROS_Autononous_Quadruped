// Copyright 2021 TU Munich, Introduction To ROS, Markus Ryll
#ifndef CALCULATOR
#define CALCULATOR

#include <math.h>
#include <iostream>
#include <vector>
#include <cmath>

class MyMath {
 private:
  const double kPi = 3.14156;

 public:
  double Sum_(double a, double b);
  double Square_(double a);
  double Subtract_(double a, double b);
  double Divide_(double a, double b);
  double Sum_(std::vector<double> vec);
  double CircleSurface_(double radius);
  double CircleCircumference_(double radius);
  std::vector<double> VectorProduct_(std::vector<double> a, std::vector<double> b);
  std::vector<std::vector<double>> MatrixMultiplication_(std::vector<std::vector<double>> a, std::vector<std::vector<double>> b);
  double Sin_(double a);
};

#endif  // CALCULATOR