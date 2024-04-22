#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double r, v;
    cout << "Enter radius: ";
    cin >> r;
    v = (4.0 / 3.0) * M_PI * pow(r, 3); 
    cout << "Your V: " << v << endl; 
    return 0;
}