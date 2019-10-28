#pragma once
#include <iostream>
#include <math.h>
#include <iomanip>
#include <string.h>
#include <string>

using namespace std;

class MyComplex
{
private: 
	double Re;
	double Im;
public:
	MyComplex(double r = 0, double i = 0) { Re = r; Im = i; };

	//get
	double GetRe() {
		return Re;
	};
	double GetIm() {
		return Im;
	};
	//set
	double SetRe(double val) {
		Re = val;
		return 1;
	};
	double SetIm(double val) {
		Im = val;
		return 1;
	};
	//operators
	MyComplex& operator=(MyComplex &c) {
		Re = c.GetRe();
		Im = c.GetIm();
		return (*this);
	}
	friend MyComplex operator+(MyComplex &a, MyComplex &b) {
		MyComplex c;
		c.SetRe(a.GetRe() + b.GetRe());
		c.SetIm(a.GetIm() + b.GetIm());
		return c;
	}
	friend MyComplex operator+(MyComplex a, double  b) {
		MyComplex c;
		c.SetRe(a.GetRe() + b);
		c.SetIm(a.GetIm());
		return c;
	}
	friend MyComplex operator+(double  b, MyComplex a) {
		MyComplex c;
		c.SetRe(b + a.GetRe());
		c.SetIm(a.GetIm());
		return c;
	}
	friend MyComplex operator-(MyComplex &a, MyComplex &b) {
		MyComplex c;
		c.SetRe(a.GetRe() - b.GetRe());
		c.SetIm(a.GetIm() - b.GetIm());
		return c;
	}
	friend MyComplex operator-(MyComplex a, double  b) {
		MyComplex c;
		c.SetRe(a.GetRe() - b);
		c.SetIm(a.GetIm());
		return c;
	}
	friend MyComplex operator-(double  b, MyComplex a) {
		MyComplex c;
		c.SetRe(b - a.GetRe());
		c.SetIm((-1)*a.GetIm());
		return c;
	}
	friend MyComplex operator*(MyComplex &a, MyComplex &b) {
		MyComplex c;
		c.SetRe((a.GetRe() * b.GetRe()) - (a.GetIm() * b.GetIm()));
		c.SetIm((a.GetRe() * b.GetIm()) + (a.GetIm() * b.GetRe()));
		return c;
	}
	friend MyComplex operator*(MyComplex a, double  b) {
		MyComplex c;
		c.SetRe(a.GetRe() * b);
		c.SetIm(a.GetIm() * b);
		return c;
	}
	friend MyComplex operator*(double  b, MyComplex a) {
		MyComplex c;
		c.SetRe(b * a.GetRe());
		c.SetIm(b * a.GetIm());
		return c;
	}
	// cin, cout
	friend ostream& operator<<(ostream &stream, MyComplex &c)
	{
		stream << std::defaultfloat << "(" << c.GetRe() << (c.GetIm() >= 0 ? "+" : "") << c.GetIm() << "i)";
		return stream;
	}
	friend istream& operator>>(istream &stream, MyComplex &c)
	{
		double a, b;
		stream >> a >> b;
		c.SetRe(a);
		c.SetIm(b);
		return stream;
	}

	~MyComplex() {
		//cout << "Destructor";
	}

};


