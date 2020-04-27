#include <iostream>

int simple_numbers(int x, int y) {
    int a, b, c, d, n = 0;

    for (a = x; a <= y; a++) {
        c = a / 2;
        d = 0;

        for (b = 2; b <= c; b++) {
            if ((a % b) == 0) {
                d++;
                break;
            }
        }

        if (d == 0) {
            std::cout << a << "\t";
            n++;
            if ((n > 0) && ((n % 10) == 0)) {
                std::cout << std::endl;
            }
        }
    }

    return n;
}

int main() {
    int x, y;

    std::cout << "Enter 2 nums: " << std::endl;
    std::cin >> x >> y;
    std::cout << "Count of  simple nums: " << simple_numbers(x, y) << std::endl;

    return 0;
}
