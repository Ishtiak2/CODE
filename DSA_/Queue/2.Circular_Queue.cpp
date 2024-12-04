#include<iostream>
using namespace std;

class CircularQueue {
    int size;
    int front;
    int rear;
    int* arr;
    public:

    CircularQueue(int c) {
        size=c;
        front = rear= 0;
        arr= new int[c];
    }

    bool isEmpty() {
        return rear==front;
    }

    bool isFull() {
        return (rear+1)%size == front;
    }

    void enqueue(int x) {
        
        if(isFull()) {
            cout<<"Queue is full"<<endl;
            return;
        }

        rear= (rear+1)%size;
        arr[rear]= x;

    }

    int dequeue() {
        
        if(isEmpty()) {
            cout<<"Queue is empty"<<endl;
            return -1;
        }

        front= (front+1) % size;

        int x= arr[front];
        
        return x;

    }

    void display() {
        int i= front+1;

        do {

            cout<< arr[i]<<" <- ";

            i= (i+1) % size;

        }while(i != (rear+1) % size);

        cout<<endl;
    }


};

int main() {
    int arr[] = {1,2,3,4,5};
    int s= sizeof(arr)/sizeof(arr[0])+1;

    CircularQueue cq(s);

    for(int i=0; i<s; i++) {

        cq.enqueue(arr[i]);
    
    }

    cq.display();

    return 0;
}