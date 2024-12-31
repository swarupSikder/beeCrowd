//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    double X;
    std::cin >> X;

    // Handle sign, mantissa, and exponent manually
    int exponent = 0;
    if (X != 0.0) {
        exponent = static_cast<int>(std::floor(std::log10(std::abs(X))));
        X = X / std::pow(10, exponent);
    }

    // Handle edge case for zero
    if (X == 0.0) {
        std::cout << std::showpos << std::fixed << std::setprecision(4) 
                  << X << "E+00" << std::endl;
    } else {
        std::cout << std::showpos << std::fixed << std::setprecision(4) << X 
                  << "E" << (exponent >= 0 ? "+" : "") 
                  << std::setw(exponent >= 100 || exponent <= -100 ? 3 : 2) 
                  << std::setfill('0') << exponent << std::endl;
    }
    
    return 0;
}