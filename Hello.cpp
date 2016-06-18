// Hello.cpp : Defines the entry point for the console application.
//
#include "Hello.h"

int main(int argc, char **argv)
{
    Hello message;
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

    return ( 1 );
}
