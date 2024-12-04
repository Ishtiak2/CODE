#include <iostream>
#include <cstring>
using namespace std;

class Stack {
public:
    int capacity;
    char* arr;
    int top;

public:
    Stack(int c) {
        capacity = c;
        arr = new char[c];
        top = -1;
    }

    ~Stack() {
        delete[] arr;
    }

    void push(char x) {
        if (!isFull()) {
            top++;
            arr[top] = x;
        }
    }

    char pop() {
        
        if (!isEmpty()) {
            return arr[top--];
        }
        
        return '\0'; // Return null character if stack is empty
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == capacity - 1;
    }

    char getTop() {
        if (!isEmpty()) {
            return arr[top];
        }
        return '\0'; // Return null character if stack is empty
    }

    int size() {
        return top + 1;
    }

    void display() {
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

bool isOperand(char x) {
    return !(x == '+' || x == '-' || x == '*' || x == '/');
}

int precedence(char x) {
    
    if (x == '*' || x == '/') return 2;
    else if (x == '+' || x == '-') return 1;
    return 0;
}

char* convertToPostfix(const char* infix) {
    
    Stack st(strlen(infix));
    
    char* postfix = new char[strlen(infix) + 1];

    int i = 0, j = 0;

    while (infix[i] != '\0') {
        
        if (isOperand(infix[i])) {
            
            postfix[j++] = infix[i++];

        } else {
            
            while (!st.isEmpty() && precedence(infix[i]) <= precedence(st.getTop())) {
                postfix[j++] = st.pop();
            }
            
            st.push(infix[i++]);
        }
    }

    while (!st.isEmpty()) {
        postfix[j++] = st.pop();
    }

    postfix[j] = '\0';

    return postfix;
}

int main() {
    const char* infix = "a+b*c-d/e";
    char* postfix = convertToPostfix(infix);

    cout << postfix << endl;

    delete[] postfix;
    return 0;
}
