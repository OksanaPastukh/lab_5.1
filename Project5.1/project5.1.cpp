// Lab_5.1

#include <iostream>
#include <cmath>
using namespace std;

double h(const double a, const double b);
int main()
{
	double t, s;

	cout << "t = "; cin >> t;
	cout << "s = "; cin >> s;

	double p = (h(t*t, 1) * h(t*t, 1) * h(t*t, 1) + h(1, t * (s * s))) / (1 + h(s,t) * h(s,t));
	cout << "p = " << p << endl; 
	return 0;
}

double h(const double a, const double b)
{
	return (a * a) * sin(b) + (b * b) * cos(a);
}