#include <iostream>
#include <iomanip>

double calculatePiLeibniz(unsigned long long iterations) {
    double pi = 0.0;
    for (unsigned long long i = 0; i < iterations; i++) {
        int sign = (i % 2 == 0) ? 1 : -1;
        double term = static_cast<double>(sign) / (2 * i + 1);
        pi += term;
    }
    pi *= 4;
    return pi;
}

int main() {
    unsigned long long iterations;
    
    // Input the number of iterations for the Leibniz formula
    std::cout << "Enter the number of iterations for the Leibniz formula to calculate Pi: ";
    std::cin >> iterations;

    // Calculate Pi using the Leibniz formula
    double pi = calculatePiLeibniz(iterations);
    
    // Output the result
    std::cout << std::setprecision(15) << "The approximate value of Pi after " << iterations << " iterations: " << pi << std::endl;

    return 0;
}
