#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Hello
{
public:
	Hello(void)  {}
	~Hello(void) {}

	void add(std::string& message)
	{   _sMessageList.push_back(message);
	}
	void print(void)
	{   std::vector<std::string>::const_iterator it;
		for(it= _sMessageList.begin(); it != _sMessageList.end(); ++it)
		{   std::cout << *it << std::endl;
		}
	}

private:
	typedef std::vector<std::string> stringVector;

	stringVector  _sMessageList;
};


