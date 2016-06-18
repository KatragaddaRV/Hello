#ifndef __HELLOH__
#define __HELLOH__
/*---------------------------------------------------------*/
/* File: Hello.h -- Ramana Katragadda                      */
/*---------------------------------------------------------*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Hello
{
public:
    Hello(void)  {}
    ~Hello(void) {}

    void add(string message)
    {   _sMessageList.push_back(message);
    }
    void print(void)
    {   vector<string>::const_iterator it;
        for(it= _sMessageList.begin(); it != _sMessageList.end(); ++it)
        {   cout << *it << endl;
        }
    }

private:
    typedef vector<string> stringVector;

    stringVector  _sMessageList;
};
#endif
