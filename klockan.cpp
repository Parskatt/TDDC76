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
	string control_time()
	{
	    if ((hour,minute,second >= 0) && (hour <= 23)
		&& (minute,second <= 59))
	    {
		return "Time was valid.";
	    }
	    else 
	    {
		return "Time was not a valid one.";
	    }
	}
    }
TEST_CASE( "Factorials are computed", "[factorial]" ) {
    REQUIRE( Factorial(1) == 1 );
    REQUIRE( Factorial(2) == 2 );
    REQUIRE( Factorial(3) == 6 );
    REQUIRE( Factorial(10) == 3628800 );
}
