#include<bits/stdc++.h>

using namespace std;

class Node {

public:
    int data;
    Node *next;

    Node(int element) {
        data = element;
        next = nullptr;
    }
};




// Method 1 Time Complexity On2

Node *takeInput() {
    int data = 0;
    cin >> data;
    Node *head = nullptr;

    while (data != -1) {
        Node *newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node *temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        cin >> data;
    }

    return head;
}

// Method 2 Time Complexity O(n)

Node *takeInput2() {
    int data = 0;
    cin >> data;
    Node *head = nullptr;
    Node *tail = nullptr;
    while (data != -1) {
        Node *newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = tail->next;
        }
        cin >> data;
    }

    return head;
}

//===========================================================================

// length of linked list

int length(Node *head) {

    int count = 0;
    Node *temp = head;
    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }
    return count;
}

//===========================================================================



void printLinkedList(Node *&head) {
    if (head == nullptr) {
        return;
    }
    cout << head->data << " ";
    printLinkedList(head->next);
}

//===========================================================================

// Print ith node (while loop)

void printIthNode(Node *head, int i) {
    Node *temp = head;
    while (i > 0) {
        if (temp->next != nullptr) {
            temp = temp->next;
            i--;
        } else {
            return;
        }
    }
    cout << temp->data;
}

//===========================================================================

// Print ith node (recursively)

void printIthNode2(Node *&head, int i) {
    if (head == nullptr) {
        return;
    }
    if (i == 0) {
        cout << head->data << endl;
        return;
    }
    printIthNode2(head->next, i - 1);
}

//===========================================================================

// insert node at ith index using loop

void insertNode(Node *&head, int i, int data) {

    if (head == nullptr) {
        return;
    }

    if (i == 0) {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        return;
    }

    Node *temp = head;
    while (i > 1 && temp->next != nullptr) {
        i--;
        temp = temp->next;
    }

    if(i>1 && temp->next == nullptr){
        return;
    }

    Node *tempNext = temp->next;
    Node *newNode = new Node(data);
    temp->next = newNode;
    newNode->next = tempNext;
}

//===========================================================================

// insert node at ith index using recursion

Node *insertNodeRec(Node *head, int i, int data) {
    if (head == nullptr) {
        return head;
    }

    if (i == 0) {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        return head;
    }

    Node *temp = insertNodeRec(head->next, i - 1, data);
    head->next = temp;
    return head;
}

//===========================================================================

// delete node at ith index using loop

void deleteNode(Node *&head, int i) {
    if (head == nullptr) {
        return;
    }

    if (i == 0) {
        head = head->next;
        return;
    }

    Node *temp = head;
    while (temp != nullptr && i > 1) {
        temp = temp->next;
        i--;
    }

    if (temp != nullptr && temp->next != nullptr) {
        temp->next = temp->next->next;
    }
}

//===========================================================================

// delete node at ith index using recursion

Node *deleteNodeRec(Node *head, int i) {
    if (head == nullptr) {
        return head;
    }

    if (i == 0) {
        head = head->next;
        return head;
    }

    Node *temp = deleteNodeRec(head->next, i - 1);
    head->next = temp;
    return head;
}



//===========================================================================

// length of node recursively

int length2(Node *&head) {
    if (head == nullptr) {
        return 0;
    }

    return length2(head->next) + 1;
}

int main() {

//    Node* n1 = new Node(1);
//    Node* n2 = new Node(2);
//    Node* n3 = new Node(3);
//
//    Node *head = n1;
//    n1->next = n2;
//    n2->next = n3;

    Node *head = takeInput2();

//    cout << head->data << endl;

    printLinkedList(head);

//    cout << endl;
//
//    cout << head->data << endl;
//
//    cout << endl;

    // print ith node
//    cout<<head->data<<endl;
//    printIthNode2(head,2);
//    cout<<head->data<<endl;

    // insert node at ith position
//    insertNode(head,0,60);
//    printLinkedList(head);
//    cout<<endl;
//    cout<<head->data<<endl;

    // delete node at ith index
//    deleteNode(head,0);
//    printLinkedList(head);

    // length of node recursively
//    int len = length2(head);
//    cout << len;

    // insert node at ith index using recursion
//    head = insertNodeRec(head, 5, 60);
//    printLinkedList(head);
//    cout<<endl;
//    cout<<head->data<<endl;

    // delete node recursively at ith index
//    head = deleteNodeRec(head, 0);
//    printLinkedList(head);

    cout << endl;
    insertNode(head, 2, 5);
    printLinkedList(head);
}