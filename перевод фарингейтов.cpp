//Написать программу, которая переводит температуру в градусах по Фаренгейту(F) в градусы Цельсия(C) по формуле : 𝐶 = 5 / 9 (𝐹−32)

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	double c, f;
	cout << "Введите температуру в Фарингейтах" << endl;
	cin >> f;
	c = ((f - 32)*5)/9;
	cout << "Переведенное в градусы Цельсия" << endl;
	cout << c;
	return 0;
}


