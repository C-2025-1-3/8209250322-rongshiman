#include<iostream>
#include<iomanip>
#include"mytemperature.h"

using namespace std;
//摄氏温度到华氏温度
double celsius_to_fah(double cel) {
	return cel * 9.0 / 5.0 + 32;
}
//华氏温度到摄氏温度
double fahrenheit_to_cels(double fah) {
	return (fah - 32) * 5.0 / 9.0;
}
int main() {
	cout << fixed << setprecision(1);
	cout << "Celsius\tFahrenheit | Fahrenheit\tCelsius" << endl;
	double cel1 = 40.0;
	double fah1 = 120.0;
	cout << cel1 << "\t" << celsius_to_fah(cel1)
		<< "\t | " << fah1 << "\t" << fahrenheit_to_cels(fah1) << endl;
	
	double cel2 = 39.0;
	double fah2 = 110.0;
	cout << cel2 << "\t" << celsius_to_fah(cel2)
		<< "\t | " << fah2 << "\t" << fahrenheit_to_cels(fah2) << endl;

	cout << "……" << "\t" <<"……"
		<< "\t | " << "……" << "\t" <<setw(12)<< "……" << endl;

	double cel3 = 31.0;
	double fah3 = 30.0;
	cout << cel3 << "\t" << celsius_to_fah(cel3)
		<< "\t | " << fah3 << "\t" << fahrenheit_to_cels(fah3) << endl;
	return 0;
}