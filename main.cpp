#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Обчислення відстані між населеними пунктами." << endl;
    cout << "Введіть вихідні дані: " << endl;
    float a, b;
    cout << "Масштаб карти (кількість кілометрів в одному сантиметрі) -> ";
    cin >> a;
    cout << "Відстань між точками, що зображують населені пункти (см) -> ";
    cin >> b;
    float l = b * a; 
    cout << "Відстань між населеними пунктами " << l << " км" << endl;
    return 0;
}
