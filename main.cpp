#include <iostream>
#include <cstdlib>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " decimal_fraction" << std::endl;
        return 1;
    }

    double decimal = std::atof(argv[1]);
    double binary = 0.0;
    double factor = 0.5;
    int count = 0;

    while (decimal > 0.0 && count < 5) {
        if (decimal >= factor) {
            decimal -= factor;
            binary += factor;
        }
        factor /= 2.0;
        count++;
    }

    std::cout << "Decimal: " << argv[1] << std::endl;
    std::cout << "Binary approximation: " << binary << std::endl;

    return 0;
}
