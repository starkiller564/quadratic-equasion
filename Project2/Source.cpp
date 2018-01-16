#include<iostream>
using namespace std;

void output(int, int, int);
int discriminant(int, int, int);
void roots(int, int, int, int);

void main(void)
{
	int a, b, c, d;
	cout << "Enter numbers for quadratic equation (a, b, c): " << endl;
	cin >> a >> b >> c;

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
	return D;
}

void roots(int a, int b, int c, int d)
{
	if (d > 0)
	{
		cout << "x1 = " << double (-b + sqrt(d)) / (2 * a) << endl;
		cout << "x2 = " << double (-b - sqrt(d)) / (2 * a) << endl;
	}
	if (d == 0)
	{
		cout << "x = " << double (-b / (2 * a)) << endl;
	}
	if (d < 0)
	{
		cout << "No roots" << endl;
	}
}