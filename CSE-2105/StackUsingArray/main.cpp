#include <iostream>

using namespace std;

class Stack {

    static const int N = 100;
    int a[N];
    int top = -1;

public:

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == N;
    }

    int getTop() {
        if(isEmpty()) {
            cout << "Stack is empty." << endl;
            exit(EXIT_FAILURE);
        }
        return a[top];
    }

    void push(int value) {
        if(isFull()) {
            cout << "Stack is full." << endl;
            exit(EXIT_FAILURE);
        }
        top += 1;
        a[top] = value;
    }

    int pop() {
        if(isEmpty()) {
            cout << "Stack is empty." << endl;
            exit(EXIT_FAILURE);
        }
        int value = a[top];
        top -= 1;
        return value;
    }
};

int main()
{
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    int a = s.pop();
    int b = s.pop();
    int c = s.pop();

    s.getTop();

    cout << a << ' ' << b << ' ' << c << endl;

    int t = s.getTop();
    cout << t << endl;

    return 0;
}
