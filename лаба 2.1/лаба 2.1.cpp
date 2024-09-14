// Lab_02.cpp
// < Артем'єва Наталія >
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 1
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double Pi = 4 * atan(1.); // число пі
	double alpha; // вхідний параметр
	//double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу
	cout << "alpha = "; cin >> alpha;
	//z1 = 2*pow((sin(3* Pi - 2*alpha)), 2)*pow((cos(5* Pi +2*alpha)), 2);
	z2 = 1.0/4-1.0/4*sin(5.0/2* Pi  - 8*alpha);
	cout << endl;
	//cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl; 
cin.get();

return 0;
}