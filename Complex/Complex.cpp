// Complex.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Complex.h"
#include <iomanip>
#include <string.h>
#include <string>
int main()
{
	MyComplex a(1,-1), b(0,0), c, d;
	cin >> c;
	cin >> d;
	double q = 5;
	b = a;
	cout << b << endl;
	cout << "c+d" << *&(c + d) << endl;
	cout << "c-q" << *&(c-q) << endl;
	cout << "c-d" << *&(c - d) << endl;
	cout << "c*d" << *&(d*c) << endl;
}

