#include <bits/stdc++.h>
using namespace std;

// using template
template <typename T>
class Node{

public:
    T data;
    Node* next;

    Node(T data){
        this->data = data;
        this->next = nullptr;
    }
};


class StackUsingArray{

    int* arr;
    int nextIndex;
    int capacity;

public:

    explicit StackUsingArray(){
        this->capacity = 5;
        this->arr = new int[5];
        this->nextIndex = 0;
    }

    // return the number of elements present in stack
    int size(){
        return  nextIndex;
    }

    bool isEmpty(){
        return nextIndex == 0;
    }

    void push(int data){
        if(nextIndex == capacity){

            //dynamic stack
            int* newArr = new int[capacity*2];
            for(int i = 0;i<capacity;i++){
                newArr[i] = arr[i];
            }

            delete [] arr;
            this->arr = newArr;
            this->capacity *= 2;


            cout<<"Stack size doubled"<<endl;


//            // static stack
//            cout<<"Can't add stack is full"<<endl;


            return;
        }

        this->arr[nextIndex] = data;
        nextIndex++;
    }

    int pop(){
        if(isEmpty()){
            cout<<"Stack is already empty"<<endl;
            return 0;
        }
        nextIndex--;
        return arr[nextIndex];
    }

    int top(){
        if(isEmpty()){
            cout<<"Stack is already empty"<<endl;
            return 0;
        }
        return arr[nextIndex-1];
    }

};

template <typename T>
class StackUsingLL{

    Node<T>* head;
    int size; // number of elements present in stack

public:

    StackUsingLL(){
        this->head = nullptr;
        this->size = 0;
    }

    int getSize(){
        return this->size;
    }

    bool isEmpty(){
        return (this->size == 0);
    }

    void push(T element){
        Node<T>* newNode = new Node<T>(element);
        newNode->next = head;
        head = newNode;
        size++;
    }

    T pop(){
        if(head == nullptr){
            cout<<"Stack is already empty"<<endl;
            return 0;
        }
        size--;
        T ans = head->data;
        Node<T>* temp = head;
        head = head->next;
        delete temp;
        return ans;
    }

    T top(){
        if(head == nullptr){
            cout<<"Stack is already empty"<<endl;
            return 0;
        }

        return head->data;
    }

};


int main(){


    //Static stack
//    StackUsingArray s(10);

    //dynamic stack
    StackUsingArray s;
    cout<<s.isEmpty()<<endl;
    s.push(10);
    cout<<s.isEmpty()<<endl;
    cout<<s.top()<<endl;
    s.push(20);
    cout<<s.isEmpty()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.top()<<endl;

    cout<<s.size()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.isEmpty()<<endl;

    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    s.push(80);
    s.push(90);

    cout<<s.top()<<endl;

    // inbuilt stack
    stack<int> s2;

}