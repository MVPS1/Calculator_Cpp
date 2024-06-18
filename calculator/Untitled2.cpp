#include <iostream>
#include <cmath>
#include <cstring>
#include "Calc.h"
#define S 300
using namespace std;

struct Stack
{
	char ar[S];
	int top;
	
	
}st;

string postfix = "";

void push(int x)
{
	st.top = st.top + 1; 
	st.ar[st.top] = x;
	
}

void pop()
{
	
	st.top = st.top - 1;
	
}

void add()
{
	
	postfix = postfix + st.ar[st.top];
	pop();
	
}

void Second_cheek(char x)
{
	if(x == '-' || x == '+')
	{
		while(st.ar[st.top] != '(' && st.top > -1)
		{
			add();
		}	
	}
	
	if(x == '/' || x == '*')
	{
		while(st.ar[st.top] != '(' && st.ar[st.top] != '+' && st.ar[st.top] != '-' && st.top > -1)
		{
			add();
		}	
	}
}

void cheek(char x)
{
	if(st.top == -1)
	{
		push(x);
		return;
	}
	
	if(x == '(')
	{
		push(x);
	}
	
	if(x == '-' || x == '+')
	{
		
		if(st.ar[st.top] == '(')
		{
			push(x);
			return;
		}
		else
		{
			add();
			Second_cheek(x);
			push(x);
			return;
		}	
	}
	
	if(x == '*' || x == '/')
	{
		
		if(st.ar[st.top] == '(' || st.ar[st.top] == '+' || st.ar[st.top] == '-')
		{
		
			push(x);
			return;
		}
		else
		{
			add();
			Second_cheek(x);
			push(x);
			return;
		}	
	}
	
	if(x == '^')
	{
		
		if(true)
		{
			push(x);
			return;
		}
		else
		{
			add();
			push(x);
			return;
		}	
	}
		
		if(x == ')')
		{
			
			while(st.ar[st.top] != '(')
			{
			
				add();
			}
			
			pop();
			
		}
		
	
	
}

int main()
{
	st.top = -1;
	string input;
	cout << "Enter infix Expression : ";
	cin >> input;
	
	for(int i = 0; i < input.length(); i++)
	{
		if(input[i] <= '9' && input[i] >= '0')
		{
			postfix = postfix + input[i];
		}
		else
		{
			cheek(input[i]);
		}
		
	}
	
	 while(st.top > -1)
	 {
	 	add();
	 }
	
		cout << endl << "Postfix Expression : " << postfix << endl;
		cout << "Answer : " << GetAns(postfix);
	
	
	return 0;
}
