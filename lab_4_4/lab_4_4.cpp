// Lab_4_4.cpp
// Лабораторна робота № 4.4
// Цикли
// Варіант 4

#include <iostream>
#include <iomanip>
#include <cmath>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    double R, xp, xk, dx;
    double y;

    cout << "Введiть параметр R: ";
    cin >> R;
    cout << "Введiть X_поч (xp): ";
    cin >> xp;
    cout << "Введiть X_кiн (xk): ";
    cin >> xk;
    cout << "Введiть крок dX: ";
    cin >> dx;

    cout << fixed;

    cout << "\n-----------------------------" << endl;
    cout << "|" << setw(10) << "X" << " |" << setw(14) << "Y" << " |" << endl;
    cout << "-----------------------------" << endl;

    double x = xp;
    while (x <= xk + dx / 2.0)
    {
        if (x < 0)
        {
            y = -R / 6.0 * (x + 6.0);
        }
        else if (x < R)
        {
            y = -sqrt(R * R - x * x);
        }
        else if (x <= 2 * R)
        {
            y = sqrt(R * R - (x - 2 * R) * (x - 2 * R));
        }
        else
        {
            y = R;
        }

        cout << "|" << setw(10) << setprecision(2) << x
            << " |" << setw(14) << setprecision(4) << y << " |" << endl;

        x += dx;
    }

    cout << "-----------------------------" << endl;

    return 0;
}