#include <iostream>
#include <cmath>
#include <locale>

using namespace std;

class Console
{
public:
    static void SetUnicode()
    {
        setlocale(LC_ALL, ".UTF8");
    }
};

class Calculator
{
public:

    // Подзадача 2
    static double CircleArea(double radius)
    {
        double value = acos(-1.0) * radius * radius;
        double rounded = round(value * 100.0) / 100.0;

        cout << "Площадь круга: " << rounded << endl;

        return rounded;
    }

    // Подзадача 3
    static double RectangleArea(double first, double second)
    {
        double value = first * second;
        double rounded = round(value * 100.0) / 100.0;

        cout << "Площадь прямоугольника: " << rounded << endl;

        return rounded;
    }

    // Подзадача 4
    static double TrapezoidArea(double a, double b, double h)
    {
        double value = (a + b) * h / 2.0;
        double rounded = round(value * 100.0) / 100.0;

        cout << "Площадь трапеции: " << rounded << endl;

        return rounded;
    }

    // Подзадача 5
    static double TriangleArea(double first, double second, double third)
    {
        double p = (first + second + third) / 2.0;
        double value = sqrt(p * (p - first) * (p - second) * (p - third));
        double rounded = round(value * 100.0) / 100.0;

        cout << "Площадь треугольника по формуле Герона: " << rounded << endl;

        return rounded;
    }

    // Подзадача 6
    static double TriangleArea(double base, double height)
    {
        double value = base * height / 2.0;
        double rounded = round(value * 100.0) / 100.0;

        cout << "Площадь треугольника через основание и высоту: " << rounded << endl;

        return rounded;
    }

    // Новая подзадача
    static int Factorial(int num)
    {
        int result = 1;

        for (int i = 1; i <= num; i++)
        {
            result *= i;
        }

        cout << "Факториал: " << result << endl;

        return result;
    }
};

int main()
{
    Console::SetUnicode();

    cout << "Калькулятор площади фигур" << endl;

    int choice = -1;

    while (choice != 0)
    {
        cout << endl;
        cout << "Выберите действие:" << endl;
        cout << "1 - Площадь круга" << endl;
        cout << "2 - Площадь прямоугольника" << endl;
        cout << "3 - Площадь трапеции" << endl;
        cout << "4 - Площадь треугольника по формуле Герона" << endl;
        cout << "5 - Площадь треугольника через основание и высоту" << endl;
        cout << "6 - Факториал" << endl;
        cout << "0 - Выход" << endl;

        cout << "Введите номер действия: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            double radius;

            cout << "Введите радиус: ";
            cin >> radius;

            Calculator::CircleArea(radius);
            break;
        }

        case 2:
        {
            double first, second;

            cout << "Введите длину и ширину: ";
            cin >> first >> second;

            Calculator::RectangleArea(first, second);
            break;
        }

        case 3:
        {
            double a, b, h;

            cout << "Введите два основания и высоту: ";
            cin >> a >> b >> h;

            Calculator::TrapezoidArea(a, b, h);
            break;
        }

        case 4:
        {
            double first, second, third;

            cout << "Введите три стороны треугольника: ";
            cin >> first >> second >> third;

            Calculator::TriangleArea(first, second, third);
            break;
        }

        case 5:
        {
            double base, height;

            cout << "Введите основание и высоту: ";
            cin >> base >> height;

            Calculator::TriangleArea(base, height);
            break;
        }

        case 6:
        {
            int num;

            cout << "Введите число: ";
            cin >> num;

            Calculator::Factorial(num);
            break;
        }

        case 0:
            cout << "Выход из программы." << endl;
            break;

        default:
            cout << "Некорректный номер действия." << endl;
            break;
        }
    }

    return 0;
}
