#include <iostream>
using namespace std;

struct List
{
	int data;
	List *link;	

};

	List *head = NULL;
	List *tail = NULL;


void add(int num)
{
	List *temp =  new List;

	if(head == NULL)
	{
	
		temp->data = num;
		temp->link = NULL;
		head = temp;
		tail = temp;
	}
	else
	{
		temp->data = num;
		temp->link = head;
		head = temp;
		
	}
	
	
}
int main()
{
	bool *IsFirst = new bool;
	*IsFirst = true;
	
	add(55);
	add(30);
	add(20);
	add(15);
	
	List *track = new List;
	track = head;
	
	
	while(track->link != NULL)
	{
			if(*IsFirst)
			cout << track->data << endl;
			
		track = track->link;
		cout << track->data << endl;
		
		*IsFirst = false;
	}
	
	return 0;
}
