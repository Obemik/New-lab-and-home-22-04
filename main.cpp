#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "���������� ������ �� ���������� ��������." << endl;
    cout << "������ ������ ���: " << endl;
    float a, b;
    cout << "������� ����� (������� �������� � ������ ���������) -> ";
    cin >> a;
    cout << "³������ �� �������, �� ���������� ������� ������ (��) -> ";
    cin >> b;
    float l = b * a; 
    cout << "³������ �� ���������� �������� " << l << " ��" << endl;
    return 0;
}
