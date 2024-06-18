#include <iostream>
using namespace std;

struct Node
{
	
	int key;
	Node *right;
	Node *left;
};

Node *root = new Node;

Node *create(int key)
{
	Node *temp = new Node;
	temp->key = key;
	temp->right = NULL;
	temp->left = NULL;
	
	return temp;
	
}

void Insert(Node *root, Node *p)
{
	Node *walker = root;
	Node *swalker = root;
	
	
	if(root == NULL)
	{
		::root = p;
		return;
	}

	while(swalker != NULL)
	{
		walker = swalker;
		
		if(p->key < walker->key)
		{
			swalker = walker->left;
		}
		else
		{
			swalker = walker->right;
		}
	}
	
	if(p->key < walker->key)
	walker->left = p;
	else
	walker->right = p;
	
}

void Print(Node *root)
{
	if(root == NULL)
	return;
	
	cout << root->key << " ";
	Print(root->left);
	Print(root->right);
}

void InsertIter(Node *root, Node *p) //'root' points to 'root' node
{
	Node*  father = root, *child = root;
	while(child!=NULL)
	{
		father = child;
		if(p->key < father->key)
			child = father->left;
		else
			child = father->right;
	} //end while 
	if(p->key < father->key)
		father->left = p;
	else
		father->right = p;
} 



int main()
{
	root = NULL;
	
	Insert(root, create(10));
	Insert(root, create(5));
	Insert(root, create(15));
	Insert(root, create(3));
	
	Print(root);
	
	
	
	return 0;
}
