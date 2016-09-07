#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
  int heltal {0};
  string text;
  double flyttal;
  char tecken;
  
  cout << "Skriv in ett heltal: ";
  cin >> heltal;
  cout << "Du skrev in talet: " <<  heltal << '\n' << endl;
  cin.ignore(100000 , '\n');

  
  cout << "Skriv in fem heltal: ";
  cin >> heltal;
  cout << "Du skrev in talen: " << heltal;
  for( double flyttal = 0 ; flyttal < 4 ; flyttal++)
    {
      cin >> heltal;
      cout << " " << heltal;
    }
  cout << '\n' << endl;

  cin.ignore(10000 , '\n');

  cout << "Skriv in ett heltal och ett flyttal: ";
  cin >> heltal;
  
  cin >> flyttal;
  cout << "Du skrev in heltalet:" << setw(11) << heltal << endl;
  cout << "Du skrev in flyttalet:"<< setprecision(5) << setw(10) << flyttal 
       << '\n' << endl;
  cin.ignore(10000 , '\n');

  cout << "Skriv in ett flyttal och ett heltal: ";
  cin >> flyttal;
  cin >> heltal;
  cout << "Du skrev in heltalet:" << setw(11) << setfill('-') << heltal << endl;
  cout << "Du skrev in flyttalet:" << fixed << setprecision(5) << setw(10)
       << flyttal << '\n' << endl;
  cin.ignore(10000 , '\n');
  
  cout << "Skriv in ett tecken: ";
  
  cin >> tecken;
  cout << "Du skrev in tecknet: " << setfill(' ') << tecken << '\n' << endl;
  cin.ignore(10000 , '\n');

  cout << "Skriv in ett ord: ";
  cin >> text;
  cout << "Du skrev in ordet: " << text << '\n' << endl;
  cin.ignore(1000 , '\n');

  cout << "Skriv in ett heltal och ett ord: ";
  cin >> heltal;
  cin >> text;
  cout << "Du skrev in talet |" << heltal << "| och ordet |" 
       << text << "|." << '\n' << endl;
  cin.ignore(1000 , '\n');

  cout << "Skriv in ett tecken och ett ord: ";
  cin >> tecken;
  cin >> text;
  cout << "Du skrev in \"" << text << "\" och "
       << "'" << tecken << "'." << '\n' << endl;
  cin.ignore(1000 , '\n');

  cout << "Skriv in en rad text: ";
  getline(cin , text);
  cout << "Du skrev in: \"" << text << "\"\n" << endl;
  
  cout << "Skriv in en till rad text: ";
  getline(cin , text);
  cout << "Du skrev in: \"" << text << "\"\n" << endl;
  
  cout << "Skriv in tre ord: ";
  cin >> text;
  cout << "Du skrev in: \"" << text;
  cin >> text;
  cout << "\", \"" << text;
  cin >> text;
  cout << "\" och \"" << text << "\"\n" << endl;
  
  return 0;

  
}
