#include <iostream>
using namespace std;

class DEQueue {
    int size;
    int front;
    int rear;
    int* arr;

public:
    // Constructor to initialize the deque
    DEQueue(int c) {
        size = c;
        front = rear = -1;
        arr = new int[c];
    }

    // Destructor to clean up allocated memory
    ~DEQueue() {
        delete[] arr;
    }

    // Check if the deque is empty
    bool isEmpty() {
        return rear == front;
    }

    // Check if the deque is full
    bool isFull() {
        return rear == size - 1;
    }

    // Add an element to the front of the deque
    void enqueueFront(int x) {
        if (front == -1) {
            cout << "DEQueue Overflow" << endl;
            return;
        }
        arr[front] = x;
        front--;
    }

    // Add an element to the rear of the deque
    void enqueueRear(int x) {
        if (isFull()) {
            cout << "DEQueue Overflow" << endl;
            return;
        }
        rear++;
        arr[rear] = x;
    }

    // Remove an element from the front of the deque
    int dequeueFront() {
        if (isEmpty()) {
            cout << "DEQueue Underflow" << endl;
            return -1;
        }
        front++;
        int x = arr[front];
        return x;
    }

    // Remove an element from the rear of the deque
    int dequeueRear() {
        if (rear == -1) {
            cout << "DEQueue Underflow" << endl;
            return -1;
        }
        int x = arr[rear];
        rear--;
        return x;
    }

    // Display the elements in the deque
    void display() {
        if (isEmpty()) {
            cout << "DEQueue is empty" << endl;
            return;
        }
        for (int i = front + 1; i <= rear; i++) {
            cout << arr[i];
            if (i < rear) {
                cout << " <- ";
            }
        }
        cout << endl;
    }
};

int main() {
    int A[] = {1, 3, 5, 7, 9};
    int B[] = {2, 4, 6, 8};

    DEQueue deq(sizeof(A) / sizeof(A[0]));

    // Enqueue elements at the rear
    for (int i = 0; i < sizeof(A) / sizeof(A[0]); i++) {
        deq.enqueueRear(A[i]);
    }
    deq.display();
    deq.enqueueRear(11);

    // Dequeue elements from the front
    for (int i = 0; i < sizeof(A) / sizeof(A[0]); i++) {
        deq.dequeueFront();
    }
    deq.dequeueFront();

    cout << endl;

    // Enqueue elements at the front
    for (int i = 0; i < sizeof(B) / sizeof(B[0]); i++) {
        deq.enqueueFront(B[i]);
    }
    deq.display();
    deq.enqueueFront(10);
    deq.enqueueFront(12);

    // Dequeue elements from the rear
    for (int i = 0; i < sizeof(B) / sizeof(B[0]); i++) {
        deq.dequeueRear();
    }
    deq.display();
    deq.dequeueRear();
    deq.dequeueRear();

    return 0;
}
