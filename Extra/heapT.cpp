#include <bits/stdc++.h>
using namespace std;

// Function to insert a value into the heap
void insert(vector<int> &heap, int x) {
    heap.push_back(x);
    int current = heap.size() - 1;

    // Percolate up
    while (current > 0) {
        int parent = (current - 1) / 2;

        if (heap[current] > heap[parent]) {
            swap(heap[current], heap[parent]);
            current = parent;
        } else {
            break;
        }
    }
}

// Function to delete the root of the heap
void deleteH(vector<int> &heap) {
    if (heap.size() == 0) return; // If the heap is empty, do nothing

    int n = heap.size();
    swap(heap[0], heap[n - 1]);
    heap.pop_back(); // Remove the last element
    n--; // Update size after pop

    // Percolate down
    int i = 0;
    while (i < n) {
        int big = i;
        int lchild = 2 * i + 1;
        int rchild = 2 * i + 2;

        if (lchild < n && heap[lchild] > heap[big]) {
            big = lchild;
        }

        if (rchild < n && heap[rchild] > heap[big]) {
            big = rchild;
        }

        if (heap[i] < heap[big]) {
            swap(heap[i], heap[big]);
            i = big;
        } else {
            break;
        }
    }
}

void hepify(vector<int> &heap, int i)
{
    int n = heap.size();
    while (i < n) {
        int big = i;
        int lchild = 2 * i + 1;
        int rchild = 2 * i + 2;

        if (lchild < n && heap[lchild] > heap[big]) {
            big = lchild;
        }

        if (rchild < n && heap[rchild] > heap[big]) {
            big = rchild;
        }

        if (heap[i] < heap[big]) {
            swap(heap[i], heap[big]);
            i = big;
        } else {
            break;
        }
    }
}

// Function to display the heap
void display(const vector<int> &heap) {
    for (int val : heap) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    vector<int> heap;
    
    // Insert elements into the heap
    insert(heap, 90);
    insert(heap, 85);
    insert(heap, 97);
    insert(heap, 72);
    insert(heap, 73);
    insert(heap, 80);
    insert(heap, 89);

    // Display the heap
    cout << "Heap after insertions: ";
    display(heap);

    // Delete the root element and display the heap
    deleteH(heap);
    cout << "Heap after deleting root: ";
    display(heap);

    return 0;
}
