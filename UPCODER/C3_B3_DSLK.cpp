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
    
    void sortASC() {
        if (!head || !head->next) return;
        
        for (Node* i = head; i; i = i->next)
            for (Node* j = i->next; j; j = j->next)
                if (i->data > j->data)
                    swap(i->data, j->data);
    }
    
    int getMin() {
        int res = 9999;
        Node* cur = head;
        
        while (cur) {
            res = min(res, cur->data);
            cur = cur->next;
        }

        return res;
    }

    LinkedList inters(LinkedList other) {
        LinkedList res;
        Node* cur = head;

        while (cur) {
            if (other.contains(cur->data) && !res.contains(cur->data))
                res.push_back(cur->data);
            cur = cur->next;
        }

        return res;
    }

    LinkedList fill(LinkedList other) {
        int val = other.getMin();
        LinkedList res;
        Node* cur = head;

        while (cur) {
            if (cur->data != val)
                res.push_back(cur->data);
            cur = cur->next;
        }

        return res;
    }

    bool contSublist(Node* otherHead, Node* subHead, int len) {
        for (Node* cur = otherHead; cur; cur = cur->next) {
            Node* i = cur;
            Node* j = subHead;
            int cnt = 0;

            while (i && j && i->data == j->data && cnt < len) {
                i = i->next;
                j = j->next;
                cnt++;
            }

            if (cnt == len) return true;
        }

        return false;
    }

    LinkedList creSublist(Node* startNode, int len) {
        LinkedList res;
        Node* cur = startNode;
        for (int i = 0; i < len && cur; i++, cur = cur->next) 
            res.push_back(cur->data);
        return res;
    }

    LinkedList findFSL(LinkedList other) {
        Node* start = head;

        while (start) {
            Node* end = start;
            int maxLen = 0;

            while (end) {
                maxLen++;
                end = end->next;
            }
            
            for (int len = maxLen; len >= 1; len--) 
                if (contSublist(other.head, start, len)) 
                    return creSublist(start, len);
            start = start->next;
        }

        return LinkedList(); 
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
    
    L3 = L1.inters(L2);
    L3.sortASC();
    L3.print();

    L4 = L1.findFSL(L2);
    L4.print();

    L5 = L1.fill(L2);
    L5.print(false);
    return 0;
}