// I denna fil läggs definitionerna (implementationen) av de funktioner
// som deklarerats i Time.h
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    struct klocka
    {
	int hour;
	int minute;
	int second;
	string timestring;

	string time(timef)
	{
	    char *intStr = itoa(hour);
	    timestring = string(intStr);
	    
	    char *intStr = itoa(minute);
	    timestring += string(intStr);

	    char *intStr = itoa(second);
	    timestring += string(intStr);	    
	    if (timef == "am/pm")
	    {
		if (hour <= 12)
		{
		    timestring += " am"
		}
		else
		{
		    int
	    char *intStr = itoa(hour-12);
	    timestreng = string(intStr);		    
		    timestring += " pm"
		}	    
	    }
	    else
	    {
	    return timestring;
	    }
	}
	void control_time()
	{
	    if ((hour,minute,second >= 0) && (hour <= 23)
		&& (minute,second <= 59))
	    {
		cout << "Time was valid.";
	    }
	    else 
	    {
		cout << "Time was not a valid one.";
	    }
	}
    }

    void timecheck()
    {
	if (i.second > 59)
	{
	    i.second = 0;
	    i.minute += 1;
	    if (i.minute > 59)
	    {
		i.minute = 0;
		i.hour += 1;
		if (i.hour > 23)
		{
		    i.hour = 0;
		}
	    }
	}
    }

    int operator ++ (klocka i, ) //Denna är för prefix ++
    {
	i.second +=1;
	timecheck();
	return i.second;
    }
    
    int operator ++( ,klocka i) //Denna är för postfix ++
    {
	int x;
	x = i;
	i.second += 1;
	timecheck();
	return x;
    }
    int checker()
    {
	
    }
    bool operator < 
    {
	
    }
	
TEST_CASE( "Factorials are computed", "[factorial]" ) {
    REQUIRE( Factorial(1) == 1 );
    REQUIRE( Factorial(2) == 2 );
    REQUIRE( Factorial(3) == 6 );
    REQUIRE( Factorial(10) == 3628800 );
}
