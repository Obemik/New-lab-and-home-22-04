#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double l, s;
	int m;
	cout << "Обчислення швидкості бігу." << endl;
	cout << "Введіть довжину дистанції (метрів) = ";
	cin >> l;
	cout << "Введіть час (хв.сек) = ";
	cin >> m >> s;
	double t = m * 60 + (s*100);
	double sp = (l / 1000) / (t / 3600); 
	cout << "Дистанція: " << l << "м." << endl;
	cout << "Час: " << m << " хв " << (s*100) << " сек = " << t << " сек." << endl;
	cout << "Ви бігли зі швидкістю " << sp << " км/год." << endl;
	return 0;
}

