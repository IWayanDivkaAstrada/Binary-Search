#include <iostream>
#include "Linkedlist.h"
using namespace std;


int main(int argc, char** argv) {
	
	LinkedList list1;
	
	list1.insertToHead(15);
	list1.insertToHead(20);
	list1.insertToHead(35);
	list1.insertToHead(60);
	list1.insertToTail(5);
	list1.insertAfter(20,60);
	
	cout << "head : " << list1.head->value << endl;
	cout << "tail : " << list1.tail->value << endl;
	cout << list1.head->next->next->value << endl;
	cout << list1.head->next->next->next->value << endl;
	list1.printAll();
	
	
	return 0;
}