#include <iostream>
#include "stepf.cpp"
#include <ctime>

using namespace std;

int main() {
    int s, buffer[20] = {100}, mass[20];

    srand(time(NULL));

    int temp = 2 + rand() % 20;

    for (int i = 0; i < temp; ++i) {
        mass[i] = rand() % 20;
        buffer[i] = mass[i];
    }

    cout << "Array Elements:\n";
    for (int i = 0; i < temp; ++i)
        cout << mass[i] << " ";

    cout << "\nSize of the massive: " << temp << "\nEnter the step: ";
    cin >> s;

    step(mass, temp, s, buffer);

    for (int i = 0; i < temp; i++) {
        cout << mass[i] << " ";
    }
    cout << endl;

    return 0;
}