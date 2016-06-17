// Hello.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Hello.h"

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	Hello message;

	message.add(string("Hello, world"));
	message.add(string("-- Testing Git Repo"));
	message.add(string("   -- Concludes Testing"));
	message.add(string("      -- Concludes Testing by Updating a file after initial commit"));

	message.print();

	return ( 1 );
}

