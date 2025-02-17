#include <bits/stdc++.h>
using namespace std;

struct Node {
    string name; 
    int marks;
    Node* next;
};

void InsertFirst(Node* &pHead, string vname, int vmarks) {
    Node* node = new Node;
    node->name = vname;
    node->marks = vmarks;
    node->next = pHead;
    pHead = node;
}

void DeleteFirst(Node* &pHead) {
    if (pHead == nullptr)
        return;
    Node* temp = pHead;
    pHead = pHead->next;
    delete temp;
}

int Count(Node* pHead, int vmarks) {
    int cnt = 0;
    for (Node* cur = pHead; cur != nullptr; cur = cur->next) 
        if (cur->marks != vmarks)
            cnt++;
    return cnt;
}

int main() {
    Node* head = nullptr;
    string line;
    
    while(getline(cin, line)) {
        if(line == "finish") break; 
        
        stringstream is(line);
        string cmd;
        is >> cmd;
        
        if(cmd == "ins") { 
            string name;
            int marks;
            is >> name >> marks;
            InsertFirst(head, name, marks);
        }

        if(cmd == "del") { 
            DeleteFirst(head);
        }

        if(cmd == "count") { 
            int marks;
            is >> marks;
            cout << Count(head, marks) << "\n";
        }
    }
    

    while(head != nullptr) 
        DeleteFirst(head);
    
    return 0;
}