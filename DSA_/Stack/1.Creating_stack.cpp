#include<iostream>
using namespace std;

class Stack {
public:    
    int capacity;
    int* arr;
    int top;
public:
    Stack(int c) {
        capacity=c;
        arr= new int[c];
        top=-1;
    }

    void push(int x) {
        top++;
        arr[top]= x;
    }

    void pop() {
        top--;
    }
    
    bool isEmpty() {
        return top==-1;
    }
    bool isFull() {
        return top==capacity-1;
    }

    int getTop() {
        return arr[top];
    }

    int size() {
        return top+1;
    }

    void display() {
        for(int i=0;i<=top;i++) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }         

};



int main() {
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    
    st.display();
    cout<<st.getTop()<<endl;;

    st.pop();
    st.pop();
    st.display();

}