#include<bits/stdc++.h>

using namespace std;

// ===========================================================================

// implementation of stack using queues

class Stack {
    queue<int> q1, q2;
    int currentSize;

public:

    Stack() {
        this->currentSize = 0;
    }

    void push(int data) {
        this->currentSize++;
        q2.push(data);

        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }

        queue<int> q = q1;
        q1 = q2;
        q2 = q;
    }

    void pop() {
        if (q1.empty()) {
            return;
        }
        q1.pop();
        this->currentSize--;
    }

    int top() {
        if (q1.empty()) {
            return -1;
        }
        return q1.front();
    }

    int size() {
        return this->currentSize;
    }
};

// ============================================================================

// implementation of stack using queues

class Queue {
    stack<int> s1, s2;
    int size;

public:
    Queue() {
        this->size = 0;
    }

    void enqueue(int data) {
        this->size++;
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(data);
        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }

    void dequeue() {
        if (s1.empty()) {
            return;
        }
        s1.pop();
        this->size--;
    }

    int getSize() {
        return this->size;
    }

    int front() {
        if (s1.empty()) {
            return -1;
        }
        return s1.top();
    }
};

int main() {

//    Stack s;
//    s.push(10);
//    cout<<s.top()<<endl;
//
//    s.push(20);
//    cout<<s.top()<<endl;
//
//    s.push(30);
//    cout<<s.top()<<endl;

    Queue q;
    q.enqueue(10);
    cout << q.front() << endl;

    q.enqueue(20);
    cout << q.front() << endl;

    q.enqueue(30);
    cout << q.front() << endl;

    q.dequeue();
    cout << q.front() << endl;

    q.dequeue();
    cout << q.front() << endl;


}