#include <iostream>
using namespace std;

struct Node
{
	
	int data;
	Node *next, *prev;
};

Node *head = NULL, *tail = NULL, *track = NULL, *temp = NULL;

void AddFirst(int x)
{
	temp = new Node;
	temp->prev = NULL;
	temp->next = NULL;
	temp->data = x;
	
	if(head == NULL)
	{
		head = temp;
		tail = temp;
	}
	else
	{
		temp->next = head;
		head->prev = temp;
		head = temp;
		
	}
	
}

void AddMid(int x, int y)
{
	
	if(y == 1)
	{
		AddFirst(x);
		return;
	}
	temp = new Node;
	temp->prev = NULL;
	temp->next = NULL;
	temp->data = x;
	track = head;
	
	if(head == NULL)
	{
		head = temp;
		tail = temp;
	}
	else
	{
		
		for(int i = 0; i < y-2; i++)
		{
			track = track->next;
		}
		
		temp->next = track->next;
		temp->prev = track; 
		track->next->prev = temp;
		track->next = temp;
		
		
	}
}

void PrintFirst()
{
	track = head;
	
	while(track != NULL)
	{
		cout << track->data << ", ";
		track = track->next;
	}
	
	cout << endl;
	
}

void PrintLast()
{
	track = tail;
	
	while(track != NULL)
	{
		cout << track->data << ", ";
		track = track->prev;
	}
	
	cout << endl;
}		



int main()
{
	for(int i = 0; i < 20; i+=2)
	AddFirst(i);
	
	PrintFirst();
	PrintLast();
	AddMid(777, 1);
	PrintFirst();
	PrintLast();
	return 0;
}
