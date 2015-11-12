# include "linklist.h"
using namespace std;

LinkList::LinkList()
{
	head = NULL;
	tail = NULL;
};

void LinkList::insert(int a)
{
	node* temp = new node();
	temp->data = a;
	temp->next = NULL;
	if(head == NULL)
	{
		head = temp;
		tail = temp;
	}
	else
	{
		tail->next = temp;
		tail = temp;
	}
};

void LinkList::show()
{
	node* temp = head;
	while(temp != NULL)
	{
		cout<<temp->data<<endl;
		temp = temp->next;
	}
};
