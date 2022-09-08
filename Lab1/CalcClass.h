#pragma once
#include <math.h>

ref class CalcClass {
	double a, b;

public: 
	CalcClass() {
		this->a = 1;
		this->b = 1;
	}
	double getA(double x, double y, double z, double b) {
		double end = ((y - pow(x, 2)) / (z + 4 * pow(y, 2)));
		a = log(pow(fabs((y-pow(fabs(pow(x, 2) - b), 0.5)) * end), 2/3));
		return a;
	}
	double getB(double x, double y, double z) {
		b = 1-((x+y)/pow(fabs(z), 0.34))+(pow(y, 2)/Faktr(3))+(pow(z, 3)/Faktr(5)) + (exp(x-y)/(z+y));
		return b;
	}

private:
	double Faktr(int n) {
		double f = 1;
		if (n > 1)
			for (int i = 2; i <= n; i++)
				f *= i;
		return f;
	}
};

