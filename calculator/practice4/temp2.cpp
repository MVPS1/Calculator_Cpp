#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	string s;
	
	getline(cin, s, '&');
	
	istringstream i(s);
	
	while(getline(i, s, ' '))
	{
		
		cout << s << " ";
		
	}
	
	
	return 0;
}
