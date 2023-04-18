#include <iostream>
#include "Linkedlist.h"
using namespace std;

void LinkedList::insertToHead(int input)
{
	Node *newNode  = new Node();
	newNode->value = input;
	newNode->next  = head;
	head		   = newNode;
	
	if (tail == NULL)
	{
		tail = head;
	}
}

void LinkedList::insertToTail(int input)
{
	Node *newNode  = new Node();
	newNode->value = input;
	newNode->next  = NULL;
	tail->next	   = newNode;
	tail		   = newNode; 
}

void LinkedList::insertAfter(int item, int input)
{
	Node *newNode	= new Node();
	newNode->value	= input;
	
	Node *tmp = head;
	while (tmp->value != item)
	{
		tmp = tmp->next;
	}
	newNode->next = tmp->next;
	tmp->next	  = newNode;
}

void LinkedList::deleteFromHead()
{
	Node *delNode = head;
	head = head->next;
	delete delNode;
}

void LinkedList::printAll(){
	
	Node *tmp =head;
	while (tmp != NULL)	{
		cout<<tmp->value<< "->";
		tmp = tmp->next;
	}
}