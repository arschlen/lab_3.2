
#include <iostream>
using namespace std;
int main()
{
	double x; // ������� ��������
	double a; // ������� ��������
	double b; // ������� ��������
	double c; // ������� ��������
	double F; // ��������� ���������� ������
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	32;
		cout << "x = "; cin >> x;

	// ����� 1: ������������ � ���������� ����
	if (x+10 < 0 && b != 0)
		F = a*x*x-c*x+b;
	if (x+10 > 0 && b == 0)
		F = (x - a) / (x - c);
	if (!(x < 0 && b != 0) && !(x > 0 && b == 0))
		F = -x / a-c ;
	cout << endl;
	cout << "1) F = " << F << endl;}