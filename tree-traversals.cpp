#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node* left, *right;
    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};

void printInOrder(struct Node* node){
    if(node == NULL)
        return;
    printInOrder(node->left);
    cout << node->data << endl;
    printInOrder(node->right);
}

void printPostOrder(struct Node* node){
    if(node == NULL)
        return;
    printPostOrder(node->left);
    printPostOrder(node->right);
    cout << node->data << endl;
}

void printPreOrder(struct Node* node){
    if (node == NULL)
        return;
    cout << node->data << endl;
    printPreOrder(node->left);
    printPreOrder(node->right);
}

int main(){
//             1
//         2       3
//     8       4       6
// 7
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(8);
    root->left->right = new Node(4);
    root->right->right = new Node(6);
    root->left->left->left = new Node(7);
    cout << "InOrder Traversal is " << endl;
    printInOrder(root);
    cout << endl;
    cout << "PreOrder Traversal is " << endl;
    printPreOrder(root);
    cout << endl;
    cout << "PostOrder Traversal is " << endl;
    printPostOrder(root);
    cout << endl;
    return 0;
}
