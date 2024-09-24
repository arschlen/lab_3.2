
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double a; // вхідний параметр
	double b; // вхідний параметр
	double c; // вхідний параметр
	double F; // результат обчислення виразу
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	32;
		cout << "x = "; cin >> x;

	// спосіб 1: розгалуження в скороченій формі
	if (x+10 < 0 && b != 0)
		F = a*x*x-c*x+b;
	if (x+10 > 0 && b == 0)
		F = (x - a) / (x - c);
	if (!(x < 0 && b != 0) && !(x > 0 && b == 0))
		F = -x / a-c ;
	cout << endl;
	cout << "1) F = " << F << endl;}