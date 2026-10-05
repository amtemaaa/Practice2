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

	cout << "Калькулятор площади " << endl;
	cout << "Выберите фигуру:" << endl;
	cout << "1 - Найти площадь круга" << endl;
	cout << "2 - Найти площадь прямоугольника" << endl;
	cout << "3 - Найти площадь трапеции" << endl;
	cout << "4 - Найти площадь треугольника по формуле Герона" << endl;
	cout << "5 - Найти площадь треугольника через основание и высоту" << endl;
	cout << "6 - Найти факториал" << endl;
	cout << "0 - Выход из цикла" << endl;
	int choice = -1;
	while (choice != 0)
	{
	
		cout << "\nВведите номер формулы(0 - выход из цикла)";
		cin >> choice;
		switch (choice)

		{
		case 1:
		{
			double radius;
			cout << "введите радиус: ";
			cin >> radius;
			Calculator::CircleArea(radius);
			break;
		}
		case 2:
		{
			double first, second;
			cout << "Введите значение первой стороны: ";
			cin >> first;
			cout << "Введите значение второй стороны: ";
			cin >> second;
			Calculator::RectangleArea(first, second);
			break;
		}
		case 3:
		{
			double a, b, h;
			cout << "Введите значение первого основания: ";
			cin >> a;
			cout << "Введите значение второго основания: ";
			cin >> b;
			cout << "Введите значение высоты: ";
			cin >> h;
			Calculator::TrapezoidArea(a, b, h);
			break;
		}
		case 4:
		{
			double first, second, third;
			cout << "Введите значение первой стороны: ";
			cin >> first;
			cout << "введите значение второй стороны: ";
			cin >> second;
			cout << "Введите значение третьей стороны: ";
			cin >> third;
			Calculator::TriangleArea(first, second, third);
			break;
		}
		case 5:
		{
			double base, height;
			cout << "Введите значение основания: ";
			cin >> base;
			cout << "Введите значение высоты: ";
			cin >> height;
			Calculator::TriangleArea(base, height);
			break;
		}
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
		case 0:
		{
			cout << "Выход из программы" << endl;
			break;
		}
		default:
			cout << "Ошибка. Введите число от 0 до 6" << endl;
			break;
		}
	}
	return 0;
}

