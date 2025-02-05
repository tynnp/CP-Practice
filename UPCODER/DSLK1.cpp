#include <iostream>
using namespace std;

struct Node {
    char data;
    Node *pNext;
};

Node* make(char value);
void clear(Node *&pHead);
void print(Node *pHead);
void solve(Node *&pHead);
void push(Node *&pHead, char value);

int main() {
    char c;
    Node *pHead = nullptr;

    while (cin >> c)
        push(pHead, c);

    solve(pHead);   
    print(pHead);
    clear(pHead);
    return 0;
} 

Node* make(char value) {
    Node* node = new Node;
    node->data = value;
    node->pNext = nullptr;
    return node;
}

void clear(Node *&pHead) {
    while (pHead != nullptr) {
        Node *tmp = pHead;
        pHead = pHead->pNext;
        delete tmp;
    }
}

void print(Node *pHead) {
    while (pHead != nullptr) {
        cout << pHead->data << " ";
        pHead = pHead->pNext;
    }
}

void solve(Node *&pHead) {
    if (pHead == nullptr) 
        return;

    while (pHead && pHead->pNext && pHead->data > pHead->pNext->data) {
        Node *tmp = pHead;
        pHead = pHead->pNext;
        delete tmp;
    }

    Node *prev = pHead;
    Node *cur = (pHead ? pHead->pNext : nullptr);

    while (cur) {
        if (prev->data > cur->data) {
            Node *tmp = cur;
            prev->pNext = cur->pNext;
            cur = cur->pNext;
            delete tmp;
            
        } else {
            prev = cur;
            cur = cur->pNext;
        }
    }
}

void push(Node *&pHead, char value) {
    Node *node = make(value);

    if (pHead == nullptr) {
        pHead = node;
        return;
    }

    Node *tmp = pHead;
    while (tmp->pNext != nullptr) 
        tmp = tmp->pNext;
    tmp->pNext = node;
}