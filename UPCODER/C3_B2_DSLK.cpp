#include <iostream>
#include <sstream>
using namespace std;

class LinkedList;

class Node {
private:
    friend class LinkedList;
    int data;
    Node* next;

public:
    Node(int val): data(val), next(nullptr) {}
};

class LinkedList {
private:
    int size;
    Node* head;
    
public:
    LinkedList(): size(0), head(nullptr) {}
    
    void print(bool endline = true) {
        Node* cur = head;
        
        while (cur) {
            if (cur != head) cout << ' ';
            cout << cur->data;
            cur = cur->next;
        }
        
        if (endline) 
            cout << endl;
    }

    bool contains(int val) {
        Node* cur = head;
        
        while (cur) {
            if (cur->data == val)
                return true;
            cur = cur->next;
        }
        
        return false;
    }

    void push_back(int val) {
        Node* node = new Node(val);
        size++;
        
        if (!head) {
            head = node;
            return;
        }
        
        Node* cur = head;
        while (cur->next) 
            cur = cur->next;
        cur->next = node;
    }
    
    void sortDESC() {
        if (!head || !head->next) return;
        
        for (Node* i = head; i; i = i->next)
            for (Node* j = i->next; j; j = j->next)
                if (i->data < j->data)
                    swap(i->data, j->data);
    }
    
    void sortHalf() {
        if (!head || !head->next) return;
    
        Node* mid = head;
        for (int i = 0; i < size / 2; i++)
            mid = mid->next;
    
        for (Node* i = head; i != mid; i = i->next) 
            for (Node* j = head; j->next != mid; j = j->next) 
                if (j->data < j->next->data)
                    swap(j->data, j->next->data);
    
        for (Node* i = mid; i; i = i->next) 
            for (Node* j = i->next; j; j = j->next) 
                if (i->data > j->data)
                    swap(i->data, j->data);
    }
    
    LinkedList merge(LinkedList other) {
        LinkedList res;
        Node* cur = head;
        
        while (cur) {
            if (!res.contains(cur->data))
                res.push_back(cur->data);
            cur = cur->next;
        }
        
        cur = other.head;
        
        while (cur) {
            if (!res.contains(cur->data))
                res.push_back(cur->data);
            cur = cur->next;
        }
        
        return res;
    }
    
    LinkedList diff(LinkedList other) {
        LinkedList res;
        Node* cur = head;
        
        while (cur) {
            if (!other.contains(cur->data) && !res.contains(cur->data))
                res.push_back(cur->data);
            cur = cur->next;
        }

        return res;
    }
    
    LinkedList sum(LinkedList other) {
        LinkedList res;
        Node* i = head;
        Node* j = other.head;
        
        while (i || j) {
            if (i && j) {
                res.push_back(i->data + j->data);
                i = i->next;
                j = j->next;
                
            } else if (i) {
                res.push_back(i->data);
                i = i->next;
                
            } else {
                res.push_back(j->data);
                j = j->next;
            }
        }
        
        return res;
    }
};

int main() {
    int x;
    string s;
    LinkedList L1, L2, L3, L4, L5;
    
    getline(cin, s);
    stringstream ss(s);
    
    while (ss >> x)
        L1.push_back(x);
        
    ss.clear();
    getline(cin, s);
    ss = stringstream(s);
    
    while (ss >> x)
        L2.push_back(x);
    
    L3 = L1.merge(L2);
    L3.sortDESC();
    L3.print();
    
    L4 = L1.diff(L2);
    L4.sortHalf();
    L4.print();
    
    L5 = L1.sum(L2);
    L5.print(false);
    return 0;
}