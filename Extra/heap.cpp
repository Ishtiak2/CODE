#include <bits/stdc++.h> 
using namespace std;

// Function to insert a new value into the heap
void insert(vector<int> &heap, int value) {
    
    heap.push_back(value); // Add the new value to the end of the heap
    
    int current = heap.size() - 1; // Get the index of the newly added value

    // Percolate up to maintain the heap property
    while (current > 0) {
        int parent = (current - 1) / 2; // Calculate the parent index

        // If the current value is greater than its parent, swap them
        if (heap[current] > heap[parent]) {
            swap(heap[parent], heap[current]);
            current = parent; // Move up to the parent index
        } else {
            break; // The heap property is satisfied
        }
    }
}

// Function to delete the root element from the heap
void deleteH(vector<int> &heap) {
    int n = heap.size();

    if (n == 0) return; // Handle the case of an empty heap

    // Swap the root with the last element and remove the last element
    swap(heap[0], heap[n - 1]);
    heap.pop_back();
    n--; // Update size after removing the last element

    // Percolate down from the root to maintain the heap property
    int i = 0;
    while (i < n) {
        int l = 2 * i + 1;  // Left child index
        int r = 2 * i + 2;  // Right child index
        int big = i;        // Assume the current node is the largest

        // Compare the left child with the current node
        if (l < n && heap[l] > heap[big]) {
            big = l; // Left child is bigger
        }

        // Compare the right child with the current largest node
        if (r < n && heap[r] > heap[big]) {
            big = r; // Right child is bigger
        }

        // If the current node is smaller than the largest child, swap them
        if (heap[i] < heap[big]) {
            swap(heap[i], heap[big]);
            i = big; // Move down to the largest child index
        } else {
            break; // The heap property is satisfied
        }
    }
}

// Function to heapify a subtree with root at index 'i'
void heapify(vector<int> &heap, int i) {
    int size = heap.size();

    // Percolate down the subtree to maintain the heap property
    while (true) {
        int largest = i;
        int l = 2 * i + 1;  // Left child index
        int r = 2 * i + 2;  // Right child index

        // Compare the left child with the current node
        if (l < size && heap[l] > heap[largest])
            largest = l;

        // Compare the right child with the current largest node
        if (r < size && heap[r] > heap[largest])
            largest = r;

        // If the largest is not the current node, swap them
        if (largest != i) {
            swap(heap[i], heap[largest]);
            i = largest; // Move down to the largest child index
        } else {
            break; // The heap property is satisfied
        }
    }
}

// Function to delete a specific node from the heap
void deleteNode(vector<int> &heap, int num) {
    int size = heap.size();
    int i;

    // Find the index of the node to be deleted
    for (i = 0; i < size; i++) {
        if (num == heap[i])
            break;
    }

    // Swap the node with the last element and remove the last element
    swap(heap[i], heap[size - 1]);
    heap.pop_back();
    size = heap.size();  // Update size after deletion

    // Heapify from the current index to adjust the heap
    if (i < size) {
        heapify(heap, i);
    }
}

// Function to display the elements of the heap
void display(const vector<int> &heap) {
    for (int i = 0; i < heap.size(); i++) {
        cout << heap[i] << " "; // Print each element of the heap
    }
    cout << endl;
}

int main() {
    vector<int> heap;

    // Insert elements into the heap
    insert(heap, 20);
    insert(heap, 14);
    insert(heap, 15);
    insert(heap, 5);
    insert(heap, 10);
    insert(heap, 7);
    insert(heap, 13);

    cout << "Heap after insertion:" << endl;
    display(heap); // Display the heap after insertion

    // Delete the root element
    cout << "After deletion of root:" << endl;
    deleteH(heap);
    display(heap); // Display the heap after deletion

    return 0;
}
