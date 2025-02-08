#include <bits/stdc++.h>
using namespace std;

struct Node {
    int info;
    Node *left;
    Node *right;
    Node(int value);
};

void insert(Node *&root, int value);
void print(Node *root);
void clear(Node *&root);

int main() {
    int n;
    Node *root = nullptr;
    
    while (cin >> n) 
        insert(root, n);
    
    print(root);
    clear(root);
    return 0;
} 

Node::Node(int value) {
    info = value;
    left = right = nullptr;
}

void insert(Node *&root, int value) {
    Node *node = new Node(value);
    
    if (root == nullptr) {
        root = node;
        return;
    }
    
    if (root->info == value) return;
    if (root->info > value) return insert(root->left, value);
    if (root->info < value) return insert(root->right, value);
}

void print(Node *root) {
    if (root == nullptr) return;
    if (root->left != nullptr) print(root->left);
    if (root->right != nullptr) print(root->right);
    cout << root->info << " ";
}

void clear(Node *&root) {
    if (root == nullptr) return;
    clear(root->left);
    clear(root->right);
    delete root;
}