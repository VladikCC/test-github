#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    double x1, x2, x3, y1, y2, y3;

    cout << "Введите координаты первой вершины (x1 y1): " << endl;
    cout << "x1 = "; cin >> x1; cout << "y1 = "; cin >> y1;

    cout << "Введите координаты первой вершины (x2 y2): " << endl;
    cout << "x2 = "; cin >> x2; cout << "y2 = "; cin >> y2;

    cout << "Введите координаты первой вершины (x3 y3): " << endl;
    cout << "x3 = "; cin >> x3; cout << "y3 = "; cin >> y3;

    double sideA = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double sideB = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    double sideC = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));

    double perimeter = sideA + sideB + sideC;

    cout << "\nДлины сторон: " << sideA << ", " << sideB << ", " << sideC << endl;
    cout << "Периметр треугольника равен: " << perimeter << endl;


    cin.ignore();
    cin.get();

    return 0;

    //3 номер у меня это задание номер 1 было
}