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
    static int Div(int a, int b)
    {
        if (b==0)
        {
            std::cout << "На ноль делить нельзя"
            return -1;
        }
        int res = a / b;
        return res;
    }
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
    // Подзадача 7
	static int Factorial(int num)
	{
		int result = 1;
		for (int i = 2; i <= num; i++)
		{
			result *= i;
		}
		cout << "Факториал числа" << num << "=" << result << endl;
		return result;
	}

};

int main()
{
    Console::SetUnicode();
    
    int flag;

    while (true)
    {
        cout << "\Калькулятор площади фигур" << endl;
        cout << "Выберите фигуру:" << endl;
        cout << "1. Круг" << endl;
        cout << "2. Прямоугольник" << endl;
        cout << "3. Трапеция" << endl;
        cout << "4. Треугольник (по 3 сторонам)" << endl;
        cout << "5. Треугольник (по основанию и высоте)" << endl;
        cout << "0. Выход" << endl;
        cout << "Ваш выбор: ";
        cin >> flag;

        if (flag == 0)
        {
            cout << "Выход из программы. До свидания!" << endl;
            break; 
        }

        switch (flag)
        {
        case 1: // круг
        {
            double radius;
            cout << "Введите радиус: ";
            cin >> radius;
            Calculator::CircleArea(radius); 
            break;
        }
        case 2: // прямоугольник
        {
            double a, b;
            cout << "Введите стороны прямоугольника (a и b): ";
            cin >> a >> b;
            Calculator::RectangleArea(a, b);
            break;
        }
        case 3: // трапеция
        {
            double a, b, h;
            cout << "Введите основания (a, b) и высоту (h): ";
            cin >> a >> b >> h;
            Calculator::TrapezoidArea(a, b, h);
            break;
        }
        case 4: // треугольник по 3 сторонам (формула Герона)
        {
            double a, b, c;
            cout << "Введите три стороны треугольника: ";
            cin >> a >> b >> c;
            Calculator::TriangleArea(a, b, c);
            break;
        }
        case 5: // треугольник по основанию и высоте
        {
            double base, height;
            cout << "Введите основание и высоту: ";
            cin >> base >> height;
            Calculator::TriangleArea(base, height);
            break;

        case 6:
		{
			int num;
			cout << "Введите значение числа:";
			cin >> num;
			if (num < 0)
			{
				cout << "Факториал определен только для неотрицательных чисел" << endl;
			}
			else
			{
				Calculator::Factorial(num);
			}
			break;
        }
        default:
            cout << "Ошибка: Неверный номер фигуры. Попробуйте снова." << endl;
            break;
        }
    }

    return 0;
}