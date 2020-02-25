#include <bits/stdc++.h>

using namespace std;

template<typename T>
class TreeNode {
public:
    T data;
    vector<TreeNode<T> *> children;

    TreeNode(T data) {
        this->data = data;
    }

};




// ====================================================

// take input children-wise recursively (build Tree :))

TreeNode<int> *takeInput() {
    int rootData;
    cout << "Enter data : ";
    cin >> rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);

    int n;
    cout << "Enter the number of children of " << rootData << " : ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        TreeNode<int> *child = takeInput();
        root->children.push_back(child);
    }
    return root;
}


// ============================================================

// take input level-wise  (uses queue)

TreeNode<int> *takeInputLLevelWise() {
    int rootData;
    cout << "Enter data : ";
    cin >> rootData;

    TreeNode<int> *root = new TreeNode<int>(rootData);

    queue<TreeNode<int> *> pendingNodes;
    pendingNodes.push(root);

    while (pendingNodes.size() != 0) {
        TreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();

        int n;
        cout << "Enter the number of children of " << front->data << " : ";
        cin >> n;

        for (int i = 0; i < n; i++) {
            int childData;
            cout << "Enter the " << i + 1 << " child of " << front->data;
            cin >> childData;
            TreeNode<int> *child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }

    }
    return root;
}




// =====================================================

// print tree recursively

void printTree(TreeNode<int> *root) {
    if (root == nullptr) {
        return;
    }
    cout << root->data << " : ";
    for (int i = 0; i < root->children.size(); i++) {
        cout << root->children[i]->data << " , ";
    }

    cout << endl;

    for (int i = 0; i < root->children.size(); i++) {
        printTree(root->children[i]);
    }
}

// ===============================================================

// counting the number of leaf nodes

int noLeafNodes(TreeNode<int> *root) {
    int count = 0;
    if (root == nullptr) {
        return 0;
    }

    if (root->children.size() == 0) {
        count++;
    }

    for (int i = 0; i < root->children.size(); i++) {
        count += noLeafNodes(root->children[i]);
    }

    return count;
}

// ===========================================================

// printing preOrder

void preOrder(TreeNode<int> *root) {
    if (root == nullptr) {
        return;
    }
    cout << root->data << " ";
    for (int i = 0; i < root->children.size(); i++) {
        preOrder(root->children[i]);
    }
}

// ===============================================================

// printing postOrder

void postOrder(TreeNode<int>* root){

    if(root == nullptr){
        return;
    }

    for(int i = 0;i<root->children.size();i++){
        postOrder(root->children[i]);
    }
    cout<<root->data<<" ";
}



// take tree :  (taken level-wise)
// 1 3 2 3 4 2 5 6 2 7 8 0 0 0 0 1 9 0

int main() {
//    TreeNode<int>* root = new TreeNode<int>(1);
//    TreeNode<int>* node1 = new TreeNode<int>(2);
//    TreeNode<int>* node2 = new TreeNode<int>(3);
//
//    root->children.push_back(node1);
//    root->children.push_back(node2);

//    TreeNode<int> *root = takeInput();


    TreeNode<int> *root = takeInputLLevelWise();
    printTree(root);

//    cout<<noLeafNodes(root);

    preOrder(root);
    cout<<endl;
    postOrder(root);
}