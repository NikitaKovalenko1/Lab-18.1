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
	cout << "Поиск значения функции y=Ax+B, при различных значениях A, B, x" << endl;
	cout << "Введи x" << endl;
	cin >> Urav.x;
	cout << "Введи A" << endl;
	cin >> Urav.first;
	cout << "Введи B" << endl;
	cin >> Urav.second;

	cout << "Ответ: " << Urav.function(Urav.first, Urav.second, Urav.x);
}