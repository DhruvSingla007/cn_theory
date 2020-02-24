#include <bits/stdc++.h>
using namespace std;


template <typename T>
class Node{

    T data;
    Node* next;

    Node(T data){
        this->data = data;
        this->next = nullptr;
    }

};


template <typename T>
class QueueUsingArray{

    T *data;
    int firstIndex;
    int nextIndex;
    int size;
    int capacity;


public:

    QueueUsingArray(/*int size*/){
        this->data = new T[5];
        this->firstIndex = -1;
        this->nextIndex = 0;
        this->size = 0;
        this->capacity = 5;
    }

    int getSize(){
        return this->size;
    }

    bool isEmpty(){
        return this->size == 0;
    }

    void enqueue(T element){
        if(this->size == this->capacity){
            T* newData = new T[capacity*2];
            int j = 0;
            for(int i = firstIndex;i<capacity;i++){
                newData[j] = data[i];
                j++;
            }

            for(int i = 0;i<firstIndex;i++){
                newData[j] = data[i];
            }

            delete [] data;
            data = newData;
            firstIndex = 0;
            nextIndex = capacity;

            capacity = capacity*2;

            // static queue
//            cout<<"Queue is full"<<endl;
//            return;
        }
        data[nextIndex] = element;
        nextIndex = (nextIndex + 1) % this->capacity;

        if(firstIndex == -1){
            firstIndex = 0;
        }
        size++;
    }

    T front(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return 0;
        }

        return data[firstIndex];
    }

    T dequeue(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return;
        }

        T ans = data[firstIndex];
        firstIndex = (firstIndex + 1) % this->capacity;
        size--;

        if(this->size == 0){
            this->firstIndex = -1;
            this->nextIndex = 0;
        }

        return ans;
    }
};

template <typename T>
class QueueUsingLL{

    Node<T>* head;
    Node<T>* tail;
    int size;

public:

    QueueUsingLL(){
        this->head = nullptr;
        this->tail = nullptr;
        this->size = 0;
    }

    int getSize(){
        return this->size;
    }

    bool isEmpty(){
        return (size == 0);
    }

    void enqueue(T element){
        Node<T>* newNode = new Node<T>(element);
        if(head == nullptr){
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }

        this->size++;
    }

    T front(){
        if(head == nullptr){
            cout<<"Queue is empty"<<endl;
            return 0;
        }
        return head->data;
    }

    T dequeue(){
        if(isEmpty()){
            cout<<"Queue is Empty"<<endl;
        }

        T ans = head->data;
        Node<T>* temp = head;
        head = head->next;
        delete temp;
        this->size--;
        return ans;
    }
};


int main(){

    QueueUsingArray<int> q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    cout<<q.front()<<endl;

    // inbuilt Queue
    queue<int> q2;
    q2.push(10);
    cout<<q2.front()<<endl;
    q2.pop();
    cout<<q2.size()<<endl;
    cout<<q2.empty()<<endl;
}
