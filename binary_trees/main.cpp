#include<bits/stdc++.h>

using namespace std;

// Linked List Class
template<typename T>
class Node {
public:
    T data;
    Node *next;

    explicit Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

Node<int> *makeLinkedList() {
    int data;
    cin >> data;

    if (data == -1) {
        return nullptr;
    }

    Node<int> *head = nullptr;
    Node<int> *tail = nullptr;

    while (data != -1) {
        Node<int> *newNode = new Node<int>(data);

        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }

        cin >> data;
    }

    return head;
}

void printLinkedList(Node<int> *head) {
    if (head == nullptr) {
        return;
    }

    cout << head->data << " ";
    printLinkedList(head->next);
}


// Binary Tree Class
template<typename T>
class BinaryTreeNode {

public:
    T data;
    BinaryTreeNode *left;
    BinaryTreeNode *right;

    BinaryTreeNode(T data) {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};


// ==================================================================

// take input level-wise (uses queue)

BinaryTreeNode<int> *takeInputLevelWise() {
    int rootData;
    cout << "Enter data : ";
    cin >> rootData;

    if (rootData == -1) {
        return nullptr;
    }

    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);

    queue<BinaryTreeNode<int> *> pendingNodes;
    pendingNodes.push(root);

    while (pendingNodes.size() != 0) {
        BinaryTreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();

        // entering the left child

        cout << "Enter the left child of " << front->data << " : ";
        int leftData;
        cin >> leftData;

        if (leftData != -1) {
            BinaryTreeNode<int> *leftChild = new BinaryTreeNode<int>(leftData);
            front->left = leftChild;
            pendingNodes.push(leftChild);
        }


        // entering the right child

        cout << "Enter the right child of " << front->data << " : ";
        int rightData;
        cin >> rightData;

        if (rightData != -1) {
            BinaryTreeNode<int> *rightChild = new BinaryTreeNode<int>(rightData);
            front->right = rightChild;
            pendingNodes.push(rightChild);
        }
    }
    return root;
}



// =====================================================================

// printing the tree level-wise (uses queue)

void printTreeLevelWise(BinaryTreeNode<int> *root) {
    if (root == nullptr) {
        return;
    }

    queue<BinaryTreeNode<int> *> pendingNodes;
    pendingNodes.push(root);

    while (pendingNodes.size() != 0) {
        BinaryTreeNode<int> *front = pendingNodes.front();
        cout << front->data << " : ";

        pendingNodes.pop();

        if (front->left != nullptr) {
            cout << " L -> " << front->left->data;
            pendingNodes.push(front->left);
        } else {
            cout << " L -> " << -1;
        }

        if (front->right != nullptr) {
            cout << " R -> " << front->right->data;
            pendingNodes.push(front->right);
        } else {
            cout << " R -> " << -1;
        }

        cout << endl;
    }
}



// =====================================================================

// printing the tree pre-order (root-left-right)

void preOrder(BinaryTreeNode<int> *root) {
    if (root == nullptr) {
        return;
    }

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}



// =====================================================================

// printing the tree post-order (left-right-root)

void postOrder(BinaryTreeNode<int> *root) {
    if (root == nullptr) {
        return;
    }

    preOrder(root->left);
    preOrder(root->right);
    cout << root->data << " ";
}


// =====================================================================

// printing the tree in-order (left-root-right)

void inOrder(BinaryTreeNode<int> *root) {
    if (root == nullptr) {
        return;
    }

    preOrder(root->left);
    cout << root->data << " ";
    preOrder(root->right);
}



// ===============================================================

// height of binary tree

int heightBinaryTree(BinaryTreeNode<int> *root) {
    if (root == nullptr) {
        return 0;
    }

    int leftHeight = heightBinaryTree(root->left);
    int rightHeight = heightBinaryTree(root->right);

    return (leftHeight > rightHeight) ? (leftHeight + 1) : (rightHeight + 1);
    // +1 to include the root node
}


// ================================================================

// printing the total number of nodes

int numberOfTotalNodes(BinaryTreeNode<int> *root) {

    if (root == nullptr) {
        return 0;
    }

    return 1 + numberOfTotalNodes(root->left) + numberOfTotalNodes(root->right);
}



// ================================================================

// printing the number of leaf nodes

int numberOfLeafNodes(BinaryTreeNode<int> *root) {

    if (root == nullptr) {
        return 0;
    }

    if (root->right == nullptr && root->left == nullptr) {
        return 1;
    }

    return numberOfLeafNodes(root->left) + numberOfLeafNodes(root->right);
}


// ================================================================

// printing the number of leaf nodes

int numberOfNonLeafNodes(BinaryTreeNode<int> *root) {

    if (root == nullptr || (root->right == nullptr && root->left == nullptr)) {
        return 0;
    }

    return 1 + numberOfNonLeafNodes(root->left) + numberOfNonLeafNodes(root->right);
}


// ===================================================================

// making of binary tree using linked list data (uses queue)

BinaryTreeNode<int>* BinaryTreeFromLinkedList(Node<int>* head){
    if(head == nullptr){
        return nullptr;
    }

    queue<BinaryTreeNode<int>*> pendingNodes;
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(head->data);
    pendingNodes.push(root);

    head = head->next;

    while(head != nullptr){

        BinaryTreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();

        BinaryTreeNode<int>* leftChild = nullptr;
        BinaryTreeNode<int>* rightChild = nullptr;

        // updating the left child

        leftChild = new BinaryTreeNode<int>(head->data);
        pendingNodes.push(leftChild);

        head = head->next;


        // updating the right child

        if(head != nullptr){

            rightChild = new BinaryTreeNode<int>(head->data);
            pendingNodes.push(rightChild);
            head = head->next;

        }

        front->left = leftChild;
        front->right = rightChild;
    }

    return root;
}












// =====================================================================

// use the tree example (input taken level-wise)
// 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1


int main() {

//    BinaryTreeNode<int> * root = takeInputLevelWise();
//    printTreeLevelWise(root);
//    cout<<endl;
//
//    preOrder(root);
//    cout<<endl;
//
//    postOrder(root);
//    cout<<endl;
//
//    inOrder(root);
//    cout<<endl;
//
//
//    cout<<"Height : "<<heightBinaryTree(root)<<endl;
//    cout<<"Number of Total Nodes : "<<numberOfTotalNodes(root)<<endl;
//    cout<<"Number of Leaf Nodes : "<<numberOfLeafNodes(root)<<endl;
//    cout<<"Number of Non-Leaf Nodes : "<<numberOfNonLeafNodes(root)<<endl;

    Node<int> *head = makeLinkedList();
    printLinkedList(head);

    cout<<endl;

    BinaryTreeNode<int>* root =  BinaryTreeFromLinkedList(head);
    printTreeLevelWise(root);

    return 0;
}