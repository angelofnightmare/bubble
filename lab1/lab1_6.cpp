#include <iostream>

int main() {
    int y, m, d;
    std::cout << "Input days count: ";
    std::cin >> d;

    y = d / 365;
    m = (d % 365) / 30;
    d = (d % 365) % 30;
    std::cout << "Years: " << y << " Month: " << m << " Days: " << d << std::endl;
    return 0;
}
