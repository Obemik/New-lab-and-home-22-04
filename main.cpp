#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double l, s;
	int m;
	cout << "���������� �������� ���." << endl;
	cout << "������ ������� ��������� (�����) = ";
	cin >> l;
	cout << "������ ��� (��.���) = ";
	cin >> m >> s;
	double t = m * 60 + (s*100);
	double sp = (l / 1000) / (t / 3600); 
	cout << "���������: " << l << "�." << endl;
	cout << "���: " << m << " �� " << (s*100) << " ��� = " << t << " ���." << endl;
	cout << "�� ���� � �������� " << sp << " ��/���." << endl;
	return 0;
}

