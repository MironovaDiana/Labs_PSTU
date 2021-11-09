#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int h1, h2, h, m1, m2, m, s1, s2, s;
	cout << "Введите последовательно часы, минуты и секунды начала промежутка" << endl;
	cin >> h1 >> m1 >> s1;

	while (h1 > 23)
	{
		while (m1 > 60)
		{
			while (s1 > 60)
			{
				cout << "Данные не корректны. Повторите ввод" << endl;
				cin >> h1 >> m1 >> s1;
			}
		}
	}
	cout << "Введите последовательно часы, минуты и секунды конца промежутка" << endl;
	cin >> h2 >> m2 >> s2;

	while (h2 > 23)
	{
		while (m2 > 60)
		{
			while (s2 > 60)
			{
				cout << "Данные не корректны. Повторите ввод" << endl;
				cin >> h2 >> m2 >> s2;
			}
		}
	}

	if (s2 > s1)
	{
		s = s2 - s1;
	}
	else
	{
		m2 = m2 - 1;
		s2 = s2 + 60;
		s = s2 - s1;
	}

	if (m2 > m1)
	{
		m = m2 - m1;
	}
	else
	{
		h2 = h2 - 1;
		m2 = m2 + 60;
		m = m2 - m1;
	}

	h = h2 - h1;

	cout << "Продолжительность промежутка " << h << ":" << m << ":" << s << endl;
	return 0;
}
