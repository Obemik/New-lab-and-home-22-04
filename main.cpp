#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int d;
    cout << "������ ������� ���: ";
    cin >> d;
    int w = d / 7;
    int rd = d % 7; 
    cout << d << " �� " << w << " ����� � " << rd << " ���." << endl;
    return 0;
}
