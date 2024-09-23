#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double xp;
	double xk;
	double dx;
	double a; // ������� ��������
	double b; // ������� ��������
	double c; // ������� ��������
	double F; // ��������� ���������� ������

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "F" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x - 1 < 0 && b - x != 0)
			F = a * pow(x, 2) + b;
		else
			if (x - 1 > 0 && b + x == 0)
				F = (x - a) / x;
			else
				F = x / c;
		cout << "|" << setw(7) << setprecision(2) << F
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}