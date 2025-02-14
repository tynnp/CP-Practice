#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *pNext;
    Node(int value): data(value), pNext(nullptr) {}
};

void push_back(Node *&pHead, int value); 
void solve(Node *list, Node *num); 
void clear(Node *&pHead); 

int main() {
    int n; 
    Node *list = nullptr;
    Node *num = nullptr;

    while (cin >> n) 
        push_back(num, n);
    
    for (int i = 0; i <= 9; i++) 
        push_back(list, i);

    solve(list, num);
    clear(list);
    clear(num);
    return 0;
} 

void push_back(Node *&pHead, int value) {
    Node *node = new Node(value); 

    if (pHead == nullptr) {
        pHead = node;
        return;
    }

    Node *cur = pHead;
    while (cur->pNext != nullptr) 
        cur = cur->pNext; 
    cur->pNext = node;
}

void solve(Node *list, Node *num) {
    int k = 0;
    Node *cur = list;
    Node *pos = num;
    
    while (pos != nullptr) {
        if (pos->data < 0) 
            k = (k + 10 + pos->data) % 10;
        else 
            k = (k + pos->data) % 10;

        for (int i = 0; i < k; i++)
            cur = cur->pNext; 
            
        cout << cur->data << " ";
        cur = list; 
        pos = pos->pNext;
    }
} 

void clear(Node *&pHead) {
    while (pHead != nullptr) {
        Node *cur = pHead;
        pHead = pHead->pNext; 
        delete cur;
    }
}