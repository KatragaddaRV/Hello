// Hello.cpp : Defines the entry point for the console application.
#include "Hello.h"
#include <ctime>

int main(int argc, char **argv)
{
    time_t _tm= time(NULL);
    struct tm * curtime= localtime(&_tm);

    string currentTimeString(asctime(curtime));

    const char *myStrings[]= 
               {    "Hello, world.",
                    "-- Testing Git Repo.",
                    "   -- Concludes Testing.",
                    "         -- Repo can now be built with scons"
               };

    vector <string>  tStringVector(myStrings, myStrings+(sizeof(myStrings)/sizeof(char *)));
    vector<string>::const_iterator it;

    Hello message;
    for( it= tStringVector.begin(); it != tStringVector.end(); ++it)
    {   message.add(*it);
    }
    message.print();

    cout << "The current date/time is: " << currentTimeString << endl;

    return ( 1 );
}
