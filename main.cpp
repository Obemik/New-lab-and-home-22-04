#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "���������� ��'��� ������������." << endl;
    cout << "������ ������ ���: " << endl;
    float l;
    cout << "������� (��) -> ";
    cin >> l;
    float w;
    cout << "������ (��) -> ";
    cin >> w;
    float h;
    cout << "������ (��) -> ";
    cin >> h;
    float s = l * w * h;
    cout << "��'��: " << s << " ���.��." << endl;
    return 0;
}