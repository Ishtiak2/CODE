#include<iostream>
using namespace std;

class Queue{
    int size;
    int front;
    int rear;
    int* arr;
public:
    Queue(int c) {
        size= c;
        front=rear=-1;
        arr= new int[c];
    }

    bool isEmpty() {
        return rear==front;
    }

    bool isFull() {
        return rear==size-1;
    }
     
    void enqueue(int x) {
        if(isFull()) {
            cout<<"Queue is Full"<<endl;
            return;
        }

        rear++;
        arr[rear]= x;
    }

    int dequeue() {

        if(isEmpty()) {
            cout<<"Queue underflow"<<endl;
            return -1;
        }

        front++;
        int x= arr[front];

        return x;
    }

    void display() {
        for(int i=front+1; i<=rear; i++) {
            
            cout<< arr[i] <<flush;
            
            if(i < rear) {
                cout<< " <- "<<flush;
            }

        }

        cout<<endl;
    }

};

int main() {
    int arr[]={1,2,3,4,5};

    int s= sizeof(arr)/sizeof(arr[0]);

    Queue qu(s);

    //enqueue

    for(int i=0; i<s; i++) {
        qu.enqueue(arr[i]);
    }

    qu.display();

    qu.enqueue(6);

    qu.dequeue();
    qu.display();

    return 0;
}
