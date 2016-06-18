// Hello.cpp : Defines the entry point for the console application.
//
#include "Hello.h"
#include <ctime>

int main(int argc, char **argv)
{
    Hello message;

    time_t _tm =time(NULL );

    struct tm * curtime = localtime ( &_tm );
    string currentTimeString(asctime(curtime));
    

    const char *myStrings[]= 
    {    "Hello, world.",
         "-- Testing Git Repo.",
         "   -- Concludes Testing.",
         "      -- Concludes Testing by Updating a file after initial commit.",
         "         -- Added Support for SCONS."
    };

    vector <string>  tStringVector(myStrings, myStrings+5);
    vector<string>::const_iterator it;

    for( it= tStringVector.begin(); it != tStringVector.end(); ++it)
    {   message.add(*it);
    }

    message.print();
    cout << "The current date/time is:" << currentTimeString << endl;

    return ( 1 );
}
