#include <iostream>
#define MAX_SIZE 10

using namespace std;

class Queue {
    private:
        int front;
        int rear;
        int arr[MAX_SIZE];
    public:
        Queue() {
            front = -1;
            rear = -1;
        }
        
        bool isFull() {
            return (rear == MAX_SIZE - 1);
        }
        
        bool isEmpty() {
            return (front == -1 || front > rear);
        }
        
        void enqueue(int value) {
            if (isFull()) {
                cout << "Queue is full!" << endl;
            }
            else {
                if (front == -1) {
                    front = 0;
                }
                rear++;
                arr[rear] = value;
                cout << "Enqueued " << value << " into the queue." << endl;
            }
        }
        
        void dequeue() {
            if (isEmpty()) {
                cout << "Queue is empty!" << endl;
            }
            else {
                cout << "Dequeued " << arr[front] << "." << endl;
                front++;
            }
        }
        
        void display() {
            if (isEmpty()) {
                cout << "Queue is empty!" << endl;
            }
            else {
                cout << "Elements in the queue are: ";
                for (int i = front; i <= rear; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
            }
        }
};

int main() {
    Queue q;
    q.enqueue(15);
    q.enqueue(30);
    q.enqueue(45);
    q.dequeue();
    q.display();
    
}
