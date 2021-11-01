// задача1. менять цифры с помощью новой переменной.
#include <iostream>
using namespace std;

int main()
{
    //ввод числа+проверка
    setlocale(LC_ALL, "RUS");
    int i, a, b, c, t, a1, b1, c1;
    bool proverka;
    proverka = false;
    cout << "Введите трёхзначное число, в котором цифры не повторяются\n";
    cin >> i;
    a = i / 100;
    b = (i / 10) % 10;
    c = i % 10;
    a1 = a;
    b1 = b;
    c1 = c;

    if (i > 100) {
        if (i < 999) {
            if (a != b) {
                if (b != c) {
                    if (a != c) {
                        proverka = true;
                    }
                }
            }
        }
    }

    if (proverka == false) {
        cout << "Введите число корректно\n";
    }

    if (proverka == true) {
        cout << "Возможные коомбинации цифр:\n";
        cout << a << b << c << endl; 
        t = b; 
        b = c; 
        c = t; 
        cout << a << b << c << endl; 
        t = a; 
        a = c; 
        c = t; 
        cout << a << b << c << endl; 
        t = b; 
        b = c; 
        c = t; 
        cout << a << b << c << endl; 
        t = a; 
        a = c; 
        c = t; 
        cout << a << b << c << endl;
        t = b;
        b = c;
        c = t;
        cout << a << b << c << endl;
        if (a1 > b1) {
            if (a1 > c1) {
                if (b1 > c1) {
                    cout << "Наибольшая из комбинаций:\n";
                    cout << a1 << b1 << c1 << endl;
                }
                else {
                    cout << "Наибольшая из комбинаций:\n";
                    cout << a1 << c1 << b1 << endl;
                }
            }
        }
        if (b1 > c1) {
            if (b1 > a1) {
                if (a1 > c1) {
                    cout << "Наибольшая из комбинаций:\n";
                    cout << b1 << a1 << c1 << endl;
                }
                else {
                    cout << "Наибольшая из комбинаций:\n";
                    cout << b1 << c1 << a1 << endl;
                }
            }
        }
        if (c1 > a1) {
            if (c1 > b1) {
                if (a1 > b1) {
                    cout << "Наибольшая из комбинаций:\n";
                    cout << c1 << a1 << b1 << endl;
                }
                else {
                    cout << "Наибольшая из комбинаций:\n";
                    cout << c1 << b1 << a1 << endl;
                }
            }
        }

    }
    return 0;
}











