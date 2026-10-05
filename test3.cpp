#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int h, m, s;
    int p, q, r;

    cout << "Введите текущее время (h, m, s): " << endl;
    cout << "h = "; cin >> h; cout << "m = "; cin >> m; cout << "s = "; cin >> s;

    cout << "Какое время прибавить? (h, m, s): " << endl;
    cout << "h = "; cin >> p; cout << "m = "; cin >> q; cout << "s = "; cin >> r;

    int total_seconds = s + r;
    int new_s = total_seconds % 60;
    int minutes_carry = total_seconds / 60;

    int total_minutes = m + q + minutes_carry;
    int new_m = total_minutes % 60;
    int hours_carry = total_minutes / 60;

    int total_hours = h + p + hours_carry;
    int new_h = total_hours % 24;

    cout << "\nНовое время на часах: ";

    if (new_h < 10) cout << "0";
    cout << new_h << ":";

    if (new_m < 10) cout << "0";
    cout << new_m << ":";

    if (new_s < 10) cout << "0";
    cout << new_s << endl;

    cin.ignore();
    cout << "нажмите Enter для выхода: ";
    cin.get();

    return 0;
}