#include <iostream>
using namespace std;

int main() {
    int coin;
    cout << "Enter coin: ";
    cin >> coin;
    int uah;
    cout << "Enter uah: ";
    cin >> uah;
    uah += coin / 100;
    coin %= 100;
    cout << "You have " << uah << " gryven and " << coin << " kopiec." << endl;
    return 0;
}
