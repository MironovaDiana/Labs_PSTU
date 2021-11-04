// промежуток времени.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int hour1, minut1, sec1, hour2, minut2, sec2, hour, minut, sec;
	cout << "Время должно быть в пределах одного дня!" << "Время фиксируем как на часах-до обеда от 0 до 12, после обеда с12 до 24 часов" << endl;
	cout << "Введите начальное время"<<endl;
	cout << "Часов:" << endl;
	cin >> hour1;
	cout << "Минут:" << endl;
	cin >> minut1;
	cout << "Секунд:" << endl;
	cin >> sec1;
	cout << "Введите конечное время";
	cout << "Часов:" << endl;
	cin >> hour2;
	cout << "Минут:" << endl;
	cin >> minut2;
	cout << "Секунд:" << endl;
	cin >> sec2;
	if (hour1 > hour2) || ((hour1>24)||(hour2>24)) {
		cout << "Время не соответствует требованию!" << endl;
		cout << "Начальное количество часов:" << endl;
		cin >> hour1;
		cout << "конечное количество часов:" << endl;
		cin >> hour2;
	}
	if (minut1 => 60) || (minut2=>60) {
		cout << "Время не соответствует требованию!" << endl;
		cout << "Начальное количество минут:" << endl;
		cin >> minut1;
		cout << "конечное количество минут:" << endl;
		cin >> minut2;
	}
	if (sec2 => 60) || (sec1 => 60) {
		cout << "Время не соответствует требованию!" << endl;
		cout << "Начальное количество секунд:" << endl;
		cin >> sec1;
		cout << "конечное количество секунд:" << endl;
		cin >> sec2;
	}
	cout << "Промежуточное время" << endl;
	hour = abs(hour2 - hour1);
	if (minut2 > minut1) {
		minut = minut2 - minut1;
	}
	else {
		minut = (minut2 + 60) - minut1;
	}
	if (sec2 > sec1) {
		sec = sec2 - sec1;
	}
	else {
		sec = (sec2 + 60) - sec1;
	}
	cout << "Часов: " << hour << endl;
	cout << "Минут: " << minut << endl;
	cout << "Секунд: " << sec << endl;
}


