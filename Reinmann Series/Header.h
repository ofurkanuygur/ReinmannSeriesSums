#pragma once
#include<iostream>
#include<iomanip>
#include<cmath>
//3.dereceden bir denklemin katsayılarını reinmann toplamınında kullanılacak aralıkları ve aralıkların kaç eşit parçaya bölünecegini bulucaz
//reinman toplamının sonucunu bulucak bir program..

using namespace std;

struct equation
{
	double a, b, c, d;
};

void print_function(struct equation *d);
double calculate_function(struct equation *d, double x);
double calculate_reinmann(struct equation *d, double a, double b, int n);



void print_function(struct equation *d) {

	cout << "y = " << d->a << "x^3";
	cout << (d->b < 0 ? " - " : " + ") << abs(d->b) << "x^2";
	cout << (d->c < 0 ? " - " : " + ") << abs(d->c) << "x";
	cout << (d->d < 0 ? " - " : " + ") << abs(d->d) <<endl;
}


double calculate_function(struct equation *d, double x) {

	return d->a*x*x*x + d->b*x*x + d->c*x + d->d;

}


double calculate_reinmann(struct equation *d, double a, double b, int n) {

	double x, y, toplam = 0, dx = (b - a) / n;
	for (int i = 0; i < n; i++)
	{
		x = a + i*dx + dx / 2;
		y = calculate_function(d, x);
		toplam += y*dx;
	}
	return toplam;
}
