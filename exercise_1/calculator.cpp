// Copyright 2021 TU Munich, Introduction To ROS, Markus Ryll

#include "calculator.h"
#include <vector>
#include <cmath>
#include <stdexcept>
#include <iostream>



double kPi = 3.14156;

double MyMath::Sum_(double a, double b) {
    return (a + b);
};

double MyMath::Square_(double a) {
    return a * a;
}

double MyMath::Subtract_(double a, double b) {
    return a - b;
}

double MyMath::Divide_(double a, double b) {
    if (b == 0) {
        throw std::invalid_argument("Division by zero is not allowed");
    }
    return a / b;
}

double MyMath::Sum_(std::vector<double> vec) {
    double sum = 0;
    for (double num : vec) {
        sum += num;
    }
    return sum;
}

double MyMath::CircleSurface_(double radius) {
    return kPi * radius * radius;
}

double MyMath::CircleCircumference_(double radius) {
    return 2 * kPi * radius;
}

std::vector<double> MyMath::VectorProduct_(std::vector<double> a, std::vector<double> b) {
    if (a.size() != 3 || b.size() != 3) {
        throw std::invalid_argument("Vectors must have size 3 for cross product");
    }
    std::vector<double> product(3);
    product[0] = a[1] * b[2] - a[2] * b[1];
    product[1] = a[2] * b[0] - a[0] * b[2];
    product[2] = a[0] * b[1] - a[1] * b[0];
    return product;
}

std::vector<std::vector<double>> MyMath::MatrixMultiplication_(std::vector<std::vector<double>> a, std::vector<std::vector<double>> b) {
    if (a[0].size() != 2 || a[1].size() != 2 || b[0].size() != 2 || b[1].size() != 2) {
        throw std::invalid_argument("Matrices must be 2x2 for multiplication");
    }
    std::vector<std::vector<double>> product(2, std::vector<double>(2, 0));
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            for (int k = 0; k < 2; ++k) {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return product;
}

double MyMath::Sin_(double a) {
    return std::sin(a);
}
