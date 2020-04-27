#include <iostream>
#include <iomanip>

using namespace std;

struct student {
    int number;
    const char *name;
    bool math;
    bool physic;
    bool english;
};

int main() {
    const int n = 25;
    int i, nameLength;

    student a[n] = {
            {1,  "Amosov Vladislav",   true,  false, true},
            {2,  "Bondat Vladyslava",  true,  false, true},
            {3,  "Visyrenko Roman",    false, true,  false},
            {4,  "Kyiashko Mykola",    false, true,  true},
            {5,  "Kovalenko Artem",    true,  true,  true},
            {6,  "Kuhii Marharyta",    true,  false, false},
            {7,  "Kulyk Bohdan",       true,  false, true},
            {8,  "Myakota Evhenii",    true,  false, false},
            {9,  "Moroz Evhenii",      false, false, true},
            {10, "Nechvolod Olha",     true,  false, true},
            {11, "Palchiyn Vladyslav", true,  false, true},
            {12, "Panchenko Andrii",   true,  true,  false},
            {13, "Pryashun Oleksii",   true,  false, true},
            {14, "Siverin Dynus",      false, true,  true},
            {15, "Chernomorets Pavlo", true,  false, true},
            {16, "Chyzhov Vladyslav",  true,  true,  true},
            {17, "Chumak Dmytro",      true,  false, true},
            {18, "Shpak Evhenii",      true,  true,  false},
            {19, "Shportko Yaroslav",  false, true,  true},
            {20, "Sombody Else",       false, false, false},
    };

    cout << "ID#\t"
         << setw(24) << std::left << "Students name"
         << setw(8) << "Math"
         << setw(8) << "Physic"
         << setw(8) << "English"
         << endl;

    for (i = 0; i < n; i++) {
        cout << a[i].number << "\t"
             << setw(24) << a[i].name
             << setw(8) << a[i].math
             << setw(8) << a[i].physic
             << setw(8) << a[i].english
             << endl;
    }

    cout << "Students that failed more then 1 exam" << endl << endl;

    for (i = 0; i < n; i++) {
        if ((int) a[i].math + (int) a[i].physic + (int) a[i].english <= 1) {
            cout << a[i].number << "\t"
                 << setw(24) << a[i].name
                 << setw(8) << a[i].math
                 << setw(8) << a[i].physic
                 << setw(8) << a[i].english
                 << endl;
        }
    }
    return 0;
}