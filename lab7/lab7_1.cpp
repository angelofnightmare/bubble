#include <iostream>
#include <cstdlib>

using namespace std;

struct complex {
    float real;
    float imagine;
};

char getAction() {
    char action;
    cout << "Enter one of (+, -, /, *) actions" << endl
         << "Enter Q to finish" << endl;

    cin >> action;

    return action;
}

complex getComplex(int index) {
    complex a;
    cout << "Enter real part of " << index << " num: " << endl;
    cin >> a.real;

    cout << "Enter imagine part of " << index << " num: " << endl;
    cin >> a.imagine;

    return a;
}

complex add(complex a, complex b) {
    complex c;
    c.real = a.real + b.real;
    c.imagine = a.imagine + b.imagine;
    return c;
}

complex substruct(complex a, complex b) {
    complex c;
    c.real = a.real - b.real;
    c.imagine = a.imagine - b.imagine;
    return c;
}

complex multiply(complex a, complex b) {
    complex c;
    c.real = a.real * b.real - a.imagine * b.imagine;
    c.imagine = a.real * b.imagine + b.real * a.imagine;
    return c;
}

complex divide(complex a, complex b) {
    complex c;
    float d;
    d = b.real * b.real + b.imagine * b.imagine;
    c.real = (a.real * b.real + a.imagine * b.imagine) / d;
    c.imagine = (b.real * a.imagine - a.real * b.imagine) / d;

    return c;
}

int main() {
    char action;
    complex a{}, b{}, c{};

    while (true) {
        a = getComplexCli(1);
        b = getComplexCli(2);
        action = getAction();

        switch (action) {
            case '+':
                c = add(a, b);
                cout << c.real << " " << c.imagine << endl;
                system("pause");
                action = ' ';
                break;
            case '-':
                c = substruct(a, b);
                cout << c.real << " " << c.imagine << endl;
                system("pause");
                action = ' ';
                break;
            case '*':
                c = multiply(a, b);
                cout << c.real << " " << c.imagine << endl;
                system("pause");
                action = ' ';
                break;
            case '/':
                c = divide(a, b);
                cout << c.real << " " << c.imagine << endl;
                system("pause");
                action = ' ';
                break;
            case 'Q':
                return 0;
            default:
                cout << "Your action is incorrect" << endl;
                action = getAction();
        }
    }
}