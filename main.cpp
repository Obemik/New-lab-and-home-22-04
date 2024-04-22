#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Обчислення об'єму пралелепіпеда." << endl;
    cout << "Введіть вихідні дані: " << endl;
    float l;
    cout << "Довжина (см) -> ";
    cin >> l;
    float w;
    cout << "Ширина (см) -> ";
    cin >> w;
    float h;
    cout << "Висота (см) -> ";
    cin >> h;
    float s = l * w * h;
    cout << "Об'єм: " << s << " куб.см." << endl;
    return 0;
}