#include <iostream>
using namespace std;

int main() {
	double num;
	cout << "Enter your money: ";
	cin >> num;
	int uah = int(num);
	int coin = int(100 * (num - uah));
	cout << num << " its " << uah << " gryven and " << coin << " kopiec";
	return 0;
}