static double CircleArea(double radius)
{
	double value = M_PI * radius * radius;
	double rounded = round(value * 100.0) / 100.0;

	cout << "Площадь круга: " << rounded << endl;

	return rounded;
}