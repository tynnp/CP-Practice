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
    int n;
    cin >> n;
    
    char c;
    Node *pHead = nullptr;
    for (int i = 0; i < n; i++) {
        cin >> c;
        push(pHead, c);
    }

    print(pHead);
    cout << "\n";
    solve(pHead);
    print(pHead);
    cout << "\n";
    
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
        cout << pHead->data;
        pHead = pHead->pNext;
    }
}

void solve(Node *&pHead) {
    if (pHead == nullptr)
        return;

    bool ext[26] = {false};
    Node *cur = pHead;
    while (cur) {
        ext[cur->data - 'A'] = true;
        cur = cur->pNext;
    }
    
    Node *newHead = nullptr, *tail = nullptr;
    for (char ch = 'A'; ch <= 'Z'; ch++) {
        Node *node = make(ch);
        if (newHead == nullptr) {
            newHead = node;
            tail = node;
        } else {
            tail->pNext = node;
            tail = node;
        }
    }
    
    clear(pHead);
    pHead = newHead;
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
