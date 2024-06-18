#include <iostream>
#include <cstring>
#include <sstream>
#include <conio.h>
#define S 100
using namespace std;

struct stack
{
	
	string ar[S];
	int top = -1;
	
}st[40];

void push(stack &st, string x)
{
	st.top++;
	st.ar[st.top] = x;
	
}

int main()
{
	string str, data;
	istringstream name(str);
	getline(cin, str, '&');
	
	
	
	
	
	while(getline(name, data, ' '))
	{
		push(st[0], data);
	}
	
	for(int i = 0; i <= st[0].top; i++)
	cout << st[0].ar[i] << " ";
	
	while(true)
	{
		int find = getch();
		
		if(find == 75)
		{
			st[0].top--;
			for(int i = 0; i <= st[0].top; i++)
			cout << st[0].ar[i] << " ";
			
			cout << "\n\n\n";
		}
		else if(find == 77)
		{
			st[0].top++;
			for(int i = 0; i <= st[0].top; i++)
			cout << st[0].ar[i] << " ";
			
			cout << "\n\n\n";
		}
		
	}

	
	
	return 0;
}
