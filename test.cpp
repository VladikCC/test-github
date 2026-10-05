#include <iostream>


using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    double x, f;

    cout << "Введите значение аргумента x:"; cin >> x;
    f=x*x*x+2.5*x*x-1.2;
    cout << "f = "; cout << f; cout << "  x = "; cout << x;

    cin.ignore();
    cin.get();

    return 0;
}