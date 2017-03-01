#include"Header.h"

int main() {

	struct equation f;
	double initial_value, last_value;
	int rectangle;

	cout << fixed << setprecision(1);// virgülden soranki basamak sayisinini 1 olarak ayarladık..

	cout << "Enter the coefficients of the equation :  " << endl;
	cin >> f.a >> f.b >> f.c >> f.d;//fonksiyonu aldım

	cout << "Equation Entered : " << endl;
	print_function(&f); //fonksiyonu yaz..

	cout << "Enter range values and section number :" << endl;
	cin >> initial_value >> last_value >> rectangle; // aralık değerlerini aldım..

	cout << "Reinmann Sums : " << endl;
	cout << calculate_reinmann(&f, initial_value, last_value, rectangle);

	system("pause");
	return 0;
}