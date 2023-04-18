#include <iostream>
#define MAX_SIZE 10

using namespace std;

class Stack {
    private:
        int top;
        int arr[MAX_SIZE];
    public:
        Stack() {
            top = -1;
        }
        
        bool isFull() {
            return top == MAX_SIZE - 1;
        }
        
        bool isEmpty() {
            return top == -1;
        }
        
        void push(int value) {
            if (isFull()) {
                cout << "Stack overflow!" << endl;
            }
            else {
                top++;
                arr[top] = value;
                cout << "Pushed " << value << " into the stack." << endl;
            }
        }
        
        void pop() {
            if (isEmpty()) {
                cout << "Stack underflow!" << endl;
            }
            else {
                cout << "Popped " << arr[top] << " from the stack." << endl;
                top--;
            }
        }
        
        void display() {
            if (isEmpty()) {
                cout << "Stack is empty!" << endl;
            }
            else {
                cout << "Elements in the stack are: ";
                for (int i = 0; i <= top; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
            }
        }
};

int main() {
    Stack s;
    s.push(50);
    s.push(40);
    s.push(30);
    s.push(20);
    s.push(10);
    s.pop();
    s.display();
    
    return 0;
}
