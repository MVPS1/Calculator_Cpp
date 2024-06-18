#include <iostream>
#define MAX 5
using namespace std;

struct Queue {  //define Queue structure
	int front, rear; 
	int queue[MAX]; 
} q; 


void enqueue() 
	{ 
		int data;
		
			if(q.rear == MAX)
			{
				cout << "MTROOS YA GESHIM";
			}
			else
			{	
				cin >> data;
				q.queue[q.rear] = data;
				q.rear++;
				
			}
	}


	void dequeue() 
	{ 
		
		if(q.front == q.rear)
		{
			cout << "FADE YA GESHIM";
		}
		else
		{
			q.front++;
		}
		
	}


void display() 
	{ 
		if(q.front == q.rear)
		{
			cout << "FADE YA GESHIM";
		}
		else
		{
			for(int i = q.front; i < q.rear; i++)
			{
				cout << q.queue[i] << "<--";
			}
		}
	}


void front() 
	{ 
		if(q.front == q.rear)
		{
			cout << "FADE YA GESHIM";
		}
		else
		{
			cout << "This is front YA GESHIM";
			cout << q.queue[q.front];
		}
	}

void rear() 
	{ 
		if(q.front == q.rear)
		{
			cout << "FADE YA GESHIM";
		}
		else
		{
			cout << "This is rear YA GESHIM";
			cout << q.queue[q.rear - 1];
		}
	
		
	}

int main() 
{ 
	q.front = q.rear = 0;
	
	int choice;
	
	
	while(true)
	{
		
	cin >> choice;
	switch(choice)
	{
		case 1: enqueue(); break;
		case 2: dequeue(); break;
		case 3: display(); break;
		case 4: front(); break;
		case 5: rear(); break;
		case 6: return 1;
		
		default:
			cout <<	"zgggggg fe oghek";  
		
	}
	
	}
	
	
	
	return 0; 
}

