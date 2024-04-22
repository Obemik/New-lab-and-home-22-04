#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int year;
    cout << "Enter year: ";
    cin >> year;
    int days = 365 + ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
    cout << "In year " << year << " " << days << " days." << endl;
    return 0;
}