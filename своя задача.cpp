// своя задача.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");

	int x, c = 0;
	cout << "Введите число для получения всех делителей данного числа : ";
	cin >> x;

	for (int i = 1; i < x + 1; i++)
	{
		if (x % i == 0)
		{
			cout << i << " ";
			c++;
		}
	}
	cout << endl;
	if (c == 2) {
		cout << "Число простое.";
	}
	else {
		cout << "Число не простое";
	}
	return 0;
}




