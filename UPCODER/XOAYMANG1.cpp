#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *pNext;
    Node(int value): data(value), pNext(nullptr) {}
};

bool empty(Node *pHead);
void print(Node *pHead);
void clear(Node *&pHead, Node *&pTail);
void push_back(Node *&pHead, Node *&pTail, int value);
void rotate_left(Node *&pHead, Node *&pTail, int k);

int main() {
    int x, n, k;
    Node *pHead = nullptr;
    Node *pTail = nullptr;

    cin >> n >> k;
    k = k % n;

    while (n--) {
        cin >> x;
        push_back(pHead, pTail, x);
    }

    rotate_left(pHead, pTail, k);
    print(pHead);
    clear(pHead, pTail);
    return 0;
} 

bool empty(Node *pHead) {
    return pHead == nullptr;
}

void print(Node *pHead) {
    while (pHead != nullptr) {
        cout << pHead->data << " ";
        pHead = pHead->pNext;
    }
}

void clear(Node *&pHead, Node *&pTail) {
    while (pHead != nullptr) {
        Node *x = pHead;
        pHead = pHead->pNext;
        delete x;
    }
    pTail = nullptr;
}

void push_back(Node *&pHead, Node *&pTail, int value) {
    Node *node = new Node(value);

    if (pHead == nullptr) {
        pHead = node;
        pTail = node;
        return;
    }

    pTail->pNext = node;
    pTail = node;
}

void rotate_left(Node *&pHead, Node *&pTail, int k) {
    if (empty(pHead) || k == 0) return;
    Node *cur = pHead;
    int cnt = 1;

    while (cnt < k && cur != nullptr) {
        cur = cur->pNext;
        cnt += 1;
    }

    if (cur == nullptr || cur->pNext == nullptr) return;

    Node *new_Head = cur->pNext;
    cur->pNext = nullptr;
    pTail->pNext = pHead;
    pHead = new_Head;
}