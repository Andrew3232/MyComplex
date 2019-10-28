// Complex.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Complex.h"
#include <iomanip>
#include <string.h>
#include <string>
int main()
{
	MyComplex a(1, -1), b(0, 0), c, d;
	cout << "Enter c" << endl;
	cin >> c;
	cout << "Enter d" << endl;
	cin >> d;
	double q = 5;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	b = a;
	cout << "b=a" << b << endl;
	cout << "c+d=" << *&(c + d) << endl;
	cout << "c-q=" << *&(c - q) << endl;
	cout << "c-d=" << *&(c - d) << endl;
	cout << "c*d=" << *&(d * c) << endl;
}

