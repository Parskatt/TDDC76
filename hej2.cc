#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   double tempstart;
   double tempslut;
    cout << "Ange startvärde: ";
    cin >> tempstart;
    cout << '\n' << "Ange slutvärde: ";
    cin >> tempslut;
    while(tempstart > tempslut)
    {
	cout << "Felaktigt intervall! Skriv in ett nytt slutvärde!";
	cin >> tempslut;
	cout << endl;
    }
    cout << "Celsius     Kelvin   Fahrenheit     Réaumur" << endl;
    cout << "------------------------------------------" << endl;
    double kelvin;
    double fahrenheit;
    double reamur;
    while(tempslut >= tempstart)
    {
	kelvin = tempstart + 273.15;
	fahrenheit = tempstart * 1.8 + 32;
	reamur = tempstart * 0.8;
	cout << setw(7) << tempstart;
	cout << setw(11) << kelvin;
	cout << setw(11) << fahrenheit;
	cout << setw(11) << reamur << endl;
	tempstart++;
    }
    return 0;
}
    
    
