#include<iostream>
using namespace std;

void output(int, int, int);
int discriminant(int, int, int);
void roots(double, double, double, double);

void main(void)
{
	int a, b, c, d;
	cout << "Enter numbers for quadratic equation (a, b, c): " << endl;
	cin >> a >> b >> c;
	if (a == 0)
	{
		cout << "a = 0, enter another number for a: " << endl;
		cin >> a;
	}

	output(a, b, c);
	d = discriminant(a, b, c);
	roots(a, b, c, d);

	system("pause");
}

void output(int a, int b, int c)
{
	cout << a << "x^2 + " << b << "x + " << c << " = 0" << endl;
}

int discriminant(int a, int b, int c)
{
	int D;
	D = (b * b) - (4 * a * c);
	cout << "D = " << D << endl;
	return D;
}

void roots(double a, double b, double c, double d)
{
	double x1, x2;
	x1 = (-b + sqrt(d)) / (2 * a);
	x2 = (-b - sqrt(d)) / (2 * a);

	if (d > 0)
	{
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
	}

	if (d == 0)
	{
		cout << "x = " << x1 << endl;
	}

	if (d < 0)
	{
		cout << "No roots" << endl;
	}
}
