#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *pNext;
    Node(int value): data(value), pNext(nullptr) {}
};

bool empty(Node *pHead);
int front(Node *pHead);
void clear(Node *&pHead);
void push_back(Node *&pHead, int value);
void push_front(Node *&pHead, int value);
void pop_front(Node *&pHead);

int main() {
    int n, k;
    Node *pHead = nullptr;
    cin >> n >> k;

    if (k > 0) {
        for (int i = 0; i < n; i++)
            push_back(pHead, i);
    } else {
        for (int i = 1; i < n; i++)
            push_front(pHead, i);
        push_front(pHead, 0);
    }

    k = abs(k);
    while (!empty(pHead)) {
        for (int i = 1; i < k; i++) {
            push_back(pHead, front(pHead));
            pop_front(pHead);
        }

        cout << front(pHead) << " ";
        pop_front(pHead);
    }

    clear(pHead);
    return 0;
} 

bool empty(Node *pHead) {
    return pHead == nullptr;
}

int front(Node *pHead) {
    return pHead->data;
}

void clear(Node *&pHead) {
    while (pHead != nullptr) {
        Node *cur = pHead;
        pHead = pHead->pNext;
        delete cur;
    }
}

void push_back(Node *&pHead, int value) {
    Node *node = new Node(value);
    Node *cur = pHead;

    if (pHead == nullptr) {
        pHead = node;
        return;
    }

    while (cur->pNext != nullptr) 
        cur = cur->pNext;
    cur->pNext = node;
}

void push_front(Node *&pHead, int value) {
    Node *node = new Node(value);
    node->pNext = pHead;
    pHead = node;
}

void pop_front(Node *&pHead) {
    Node *cur = pHead;
    pHead = pHead->pNext;
    delete cur;
}