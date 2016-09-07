#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string lng{""};
string shrt{""};
double wquant;
int cquant;
string s;

int main()
{
    while(cin >> s)
	
    {
	if (wquant == 0)
	{ 
	    shrt = s;
	    lng = s;
	}

	int slen{s.length()};
	if(slen > lng.length())
	{
	    lng = s;
	}
	if (slen < shrt.length())
	{
	    shrt = s;
	}
	wquant++;
	cquant += slen;
    }
    float med{cquant / wquant};
    if (wquant == 0)
    {
	cout << "Om du skriver in ord så kanske programmet fungerar bättre"
	     << endl;
	shrt = "";
	med = 0;
    }
    cout << "Texten innehöll " << wquant << " ord." << endl;
    cout << "Det kortaste ordet var \"" << shrt << "\" med " 
	 << shrt.length() << " bokstäver." << endl;
    cout << "Det längsta ordet var \"" << lng << "\" med "
	 << lng.length() << " bokstäver." << endl;
    cout << "Medelordlängden var " << med << " bokstäver." << endl;
    return 0;
}

     
