#include<bits/stdc++.h>

using namespace std;

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

// ====================================================================

// inserting a node in binary search tree

void insertNode(BinaryTreeNode<int> * &root, int element) {
    if (root == nullptr) {
        BinaryTreeNode<int>* newChild = new BinaryTreeNode<int>(element);
        root = newChild;
    }

    if (element > root->data) {
        insertNode(root->right, element);
    } else if (element < root->data) {
        insertNode(root->left, element);
    }

}


// ====================================================================

// deleting a node in binary search tree

/* CASE 1 :
 *  Node to be deleted is leaf: Simply remove from the tree.

              50                            50
           /     \         delete(20)      /   \
          30      70       --------->    30     70
         /  \    /  \                     \    /  \
       20   40  60   80                   40  60   80

*/

void deleteNode(BinaryTreeNode<int> * &root, int element) {
    if (root == nullptr) {
        return;
    }

    if(element == root->data){
        BinaryTreeNode<int>* temp = root;
        root = nullptr;
        free(temp); // can also write 'delete temp';
        return;

    } else if (element > root->data) {
        deleteNode(root->right, element);
    } else if (element < root->data) {
        deleteNode(root->left, element);
    }
}

int main() {

    BinaryTreeNode<int>* root = takeInputLevelWise();
    printTreeLevelWise(root);

    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;

//    insertNode(root, 40);
//    printTreeLevelWise(root);
//
//    cout<<endl;
//    cout<<endl;
//    cout<<endl;
//    cout<<endl;

    deleteNode(root, 30);
    printTreeLevelWise(root);

}