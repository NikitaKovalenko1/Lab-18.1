#include <iostream>
using namespace std;

class Func
{
	public:
		double x, first, second;

		double function(double first, double second, double x)
		{
			return first * x + second;
		}
};

int main()
{
	setlocale(LC_ALL, "Russian");
	Func Urav;
	cout << "����� �������� ������� y=Ax+B, ��� ��������� ��������� A, B, x" << endl;
	cout << "����� x" << endl;
	cin >> Urav.x;
	cout << "����� A" << endl;
	cin >> Urav.first;
	cout << "����� B" << endl;
	cin >> Urav.second;

	cout << "�����: " << Urav.function(Urav.first, Urav.second, Urav.x);
}