#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int d;
    cout << "¬вед≥ть к≥льк≥сть дн≥в: ";
    cin >> d;
    int w = d / 7;
    int rd = d % 7; 
    cout << d << " це " << w << " тижн≥в ≥ " << rd << " дн≥в." << endl;
    return 0;
}
