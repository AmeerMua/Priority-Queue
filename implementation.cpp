#include "Queue.h"
#include <iostream>
using namespace std;

bool Queue::isEmpty()
{
	if(front == NULL && rear == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Queue::deQueue()
{
	if(isEmpty())
	{
		return;
	}
	else
	{
		Node* temp=front;
		front = front->getNext();
		delete temp;
	}
}

void Queue::enQueue(int data, int key)
{
	if(isEmpty())
	{
		Node* new_Node= new Node(data, key);
		front = new_Node;
		rear = new_Node;
	}
	else
	{
		Node *new_Node= new Node(data , key);
		rear-> setNext(new_Node);
		rear = new_Node;
		sort();
	}
}

void Queue ::print()

{
	Node *temp = front;
	cout<<"\tData\t\tPriority"<<endl;
	while(temp!=NULL)
	{
		cout<<"\t"<<temp->getData()<<"\t\t"<<temp->getKey()<<endl;
		temp= temp->getNext();
	}

}
void Queue:: swap(Node* current, Node* next)
{
	int tempData = current->getData();
	int tempKey = current->getKey();
	current-> setData(next->getData());
	current-> setKey(next->getKey());
	next->setData(tempData);
	next->setKey(tempKey);
}

void Queue:: sort()
{
	for(Node* temp =front; temp->getNext()!=NULL; temp=temp->getNext())
	{
		for(Node* temp2 = temp->getNext(); temp2!=NULL;temp2 = temp2->getNext())
		{
			if (temp2->getKey() < temp->getKey())
			{
				swap(temp,temp2);
			}
		}
	}
}