#include <iostream>
#include <String>
#include <cmath>
#define S 70
using namespace std;

struct Stack2
{
	int ar[S];
	int top;
	
}st2;


void push2(int x)
{
	st2.top = st2.top + 1; 
	st2.ar[st2.top] = x - '0';
	
}

void pop2()
{
	
	st2.top = st2.top - 1;
	
}

int GetAns(string input)
{
	st2.top = -1;
	
	for(int i = 0; i < input.length(); i++)
	{
		if(input[i] <= '9' && input[i] >= '0')
		{
			push2(input[i]);
		}
		else
		{
			switch(input[i])
			{
				case '+': st2.ar[st2.top - 1] = st2.ar[st2.top - 1] + st2.ar[st2.top]; break;
				case '-': st2.ar[st2.top - 1] = st2.ar[st2.top - 1] - st2.ar[st2.top]; break;
				case '*': st2.ar[st2.top - 1] = st2.ar[st2.top - 1] * st2.ar[st2.top]; break;
				case '/': st2.ar[st2.top - 1] = st2.ar[st2.top - 1] / st2.ar[st2.top]; break;
				case '^': st2.ar[st2.top - 1] = pow(st2.ar[st2.top - 1], st2.ar[st2.top]); break;
				
			}
			
			pop2();
			
		}
		
		
	}
	
	return st2.ar[0];
}
