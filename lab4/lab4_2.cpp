#include <iostream>

int zero_small(int &a, int &b) {
    if (a < b)
        a = 0;
    else if (a > b)
        b = 0;
    return 0;
}

int main() {
    int a, b;

    std::cout << "Enter 2 nums: " << std::endl;
    std::cin >> a >> b;
    zero_small(a, b);
    std::cout << a << std::endl << b;

    return 0;
}
