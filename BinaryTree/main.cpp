#include <iostream>
#include "BinaryTree.h"

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	BinaryTree bin;
	
	bin.insertNode(10);
	bin.insertNode(25);
	bin.insertNode(75);
	bin.insertNode(82);
	bin.insertNode(57);
	bin.insertNode(33);
	bin.insertNode(55);
	bin.insertNode(93); 
	
	bin.inOrder();
	cout << endl;
	bin.preOrder();
	cout << endl;
	bin.postOrder();
	cout << endl; 
	return 0;
}