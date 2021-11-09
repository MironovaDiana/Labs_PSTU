#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	double a, b, c;
	cout << "Введите числа через Enter" << endl;
	cin >> a;
	cin >> b;
	c = a * b;
	cout << "Результат умножения:" << c;
	return 0;
}

