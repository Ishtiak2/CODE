#include<bits/stdc++.h>
#include<queue>  // For std::queue
using namespace std;

// Function to display the elements of the queue
void display(queue<int> qu) {
    
    cout << "Queue: ";
    
    while(!qu.empty()) {
        cout << qu.front();
        qu.pop();
        if (!qu.empty()) {
            cout << " <- ";
        }
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int s = sizeof(arr)/sizeof(arr[0]);

    queue<int> qu;

    // Enqueue elements into the queue
    for(int i = 0; i < s; i++) {
        qu.push(arr[i]);
    }

    // Display the queue
    display(qu);

    // Trying to enqueue another element
    cout << "Enqueue 6" << endl;
    qu.push(6);

    // Dequeue an element
    cout << "Dequeue: " << qu.front() << endl;
    qu.pop();

    // Display the queue after dequeue
    display(qu);

    return 0;
}
