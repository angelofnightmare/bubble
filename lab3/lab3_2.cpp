#include <iostream>
#include <cstdlib>
#include <ctime>

int main ()
{
    srand(time(NULL));
    int a = rand() % 90 + 10;

    std::cout << a;

    return 0;
}