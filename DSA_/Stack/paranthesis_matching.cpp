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
        int x= arr[top];
        if (!isEmpty()) {
            top--;
        }
        return x;
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

bool isBalance(char* exp) {
    int x = strlen(exp);
    Stack st(x);

    int i = 0;
    while (exp[i] != '\0') {
        
        if (exp[i] == '(') {
            st.push(exp[i]);
        }
        
        else if (exp[i] == ')') {
            
            if (st.isEmpty()) {
                return false;
            }
            
            else {
                st.pop();
            }
        }
        
        i++;
    }

    return st.isEmpty();
}
//{([a+b]*[c-d])/c}
bool isBalanceUpdate(char *exp) {
    Stack st(strlen(exp));
    
    int i=0;
    while(exp[i]!='\0') {
        
        if(exp[i]== '(' || exp[i]== '{' || exp[i]== '[') {
            st.push(exp[i]);
        }
        
        else if(exp[i]== ')' || exp[i]== '}'  || exp[i]== ']') {
            
            if(st.isEmpty()) return false;

            else st.pop();
        }    
        
        i++;
    }

    return st.isEmpty();
}
bool isOperand(char x) {
    
    if( x== '+' || x=='-' || x=='*' || x= '/') 
        return false;
    
    else 
        return true;    
}

int precedance(char x) {

    if(x=='*' || x=='/') return 2;
    else if(x== '+' || x=='-') return 1;
    else return 3;
}

char* convertToPostfix(char* infix) {

    Stack st(strlen(infix));
    char* postfix= new char[strlen(infix)];

    int i,j;
    i=j=0;

    while(infix[i] != '\0') {

        if(isOperand(infix[i])) {
            postfix[j++]=infix[i++];
        }

        else {
            if(precedance(infix[i]) > precedance(st.getTop())) {
                st.push(infix[i++]);
            }

            else   
                postfix[j++]= st.pop();
        }
    }

    while(st.isEmpty())
        postfix[j++]= st.pop();

    postfix[j]='\0';

    return postfix;

}

int main() {
    char E[] = "((a+b)*(c-d))";
    char F[] = "{([a+b]*[c-d])/c}";

    if (isBalance(E)) {
        cout << "Balanced" << endl;
    } else {
        cout << "Not Balanced" << endl;
    }

    if (isBalanceUpdate(F)) {
        cout << "Balanced" << endl;
    } else {
        cout << "Not Balanced" << endl;
    }


    return 0;
}
