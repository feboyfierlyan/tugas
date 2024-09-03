#include <iostream>
#include <cmath>

int main() {
    // Declare variables
    double x, y, z;

    // Prompt user for input
    std::cout << "Formula 1 & 2" << std::endl;
    std::cout << "Masukan nilai x = ";
    std::cin >> x;

    // Calculate y using Formula 1
    y = 3 * std::pow(x, 2) + 6 * x + 9;

    // Calculate z using Formula 2
    z = (2 * std::pow(y, 2) + 5 * std::pow(x, 2)) / (9 * y);

    // Output the results
    std::cout << "Didapatkan nilai y = " << y << " dan nilai z = " << z << std::endl;

    return 0;
}