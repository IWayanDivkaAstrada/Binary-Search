class Node{
	
	public :
		int value; //data value
		Node *next;	//pointer untuk node selanjutnya
		//Node *tmp;
		
		Node(){ //constructor: sebuah method yang dipanggil pertama kali
			next = NULL;	
		}
};

class LinkedList {
	
	
	
	public:
		
		Node *head;
		Node *tail;
		void insertToHead(int);
		void insertToTail(int);
		void insertAfter(int, int); //insert data setelah node ini ) insertAfter(X, B)
		bool find(Node*, int);
		
		void deleteFromHead();
		void deleteFromTail();
		void deleteByValue(int);
		
		void printAll();
		
		LinkedList(){
			head = tail = NULL;
		}
};