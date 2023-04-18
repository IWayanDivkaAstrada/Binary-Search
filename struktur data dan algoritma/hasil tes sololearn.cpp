#include <iostream>
using namespace std;

#define MAX_SIZE 100

class Stack {
  private:
    int top;           // variabel untuk menyimpan index atas stack
    int arr[MAX_SIZE]; // array untuk menyimpan data stack
  public:
    // konstruktor
    Stack() {
      top = -1; // inisialisasi top dengan -1
    }
    
    // fungsi untuk memasukkan elemen ke dalam stack
    void push(int x) {
      if(top == MAX_SIZE - 1) { // cek apakah stack sudah penuh
        cout << "Error: Stack overflow\n";
        return;
      }
      top++; // naikkan top
      arr[top] = x; // simpan elemen ke dalam array
    }
    
    // fungsi untuk menghapus elemen dari stack
    void pop() {
      if(top == -1) { // cek apakah stack sudah kosong
        cout << "Error: Stack underflow\n";
        return;
      }
      top--; // turunkan top
    }
    
    // fungsi untuk mengambil elemen teratas dari stack
    int peek() {
      if(top == -1) { // cek apakah stack sudah kosong
        cout << "Error: Stack is empty\n";
        return -1;
      }
      return arr[top]; // kembalikan elemen teratas
    }
    
    // fungsi untuk memeriksa apakah stack kosong
    bool isEmpty() {
      return top == -1;
    }
};

int main() {
  Stack s;
  s.push(5);
  s.push(10);
  s.push(15);
  
  cout << s.peek() << endl; // 15
  
  s.pop();
  s.pop();
  
  cout << s.peek() << endl; // 5
  
  return 0;
}

