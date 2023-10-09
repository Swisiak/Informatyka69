#include <iostream>
long long power(long long base, unsigned int exponent) {
    long long result = 1;

    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result *= base;
        }
        base *= base;
        exponent /= 2;
    }

    return result;
}

int main() {
    unsigned int exponent;
    long long base;

    std::cout << "Podaj podstawę: ";
    std::cin >> base;
    std::cout << "Podaj wykładnik: ";
    std::cin >> exponent;

    long long result = power(base, exponent);

    std::cout << base << " do potęgi " << exponent << " wynosi " << result << std::endl;

    return 0;
}
