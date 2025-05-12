#include <iostream>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    // √(a·x + b) = c
    if (c < 0) { // квадратный корень всегда неотрицателен
        std::cout << "NO SOLUTION" << std::endl;
    } else if (a == 0) {
        if (b == c * c) {
            std::cout << "MANY SOLUTIONS" << std::endl;
        } else {
            std::cout << "NO SOLUTION" << std::endl;
        }
    } else {
        // x = (c^2 - b) / a
        int numerator = c * c - b;
        if (numerator % a == 0) { // проверяем, есть ли решение в целых числах
            std::cout << (numerator / a) << std::endl;
        } else {
            std::cout << "NO SOLUTION" << std::endl;
        }
    }
    return 0;
}
