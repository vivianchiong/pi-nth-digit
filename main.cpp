#include <iostream>
#include <iomanip>
#include <cmath>
#include <cfenv>

int main(int argc, char* const argv[]) {
    uint16_t digit;
    bool done = false;

    std::fesetround(FE_DOWNWARD);
    std::cout << std::fixed;

    do {
        std::cout << "Enter number of decimal places (max 18): ";
        std::cin >> digit;
        if (digit <= 18) {
            std::cout << std::setprecision(digit);
            std::cout << M_PIl << std::endl;
            done = true;
        }
    } while (!done);
}