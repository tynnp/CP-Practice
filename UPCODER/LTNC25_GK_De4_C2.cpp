#include <iostream>
using namespace std;

struct DonHang {
    string maDH;
    int tongTien;
};

struct Node {
    DonHang data;
    Node* next;
};

Node* creNode(DonHang dh) {
    Node* node = new Node();
    node->data = dh;
    node->next = NULL;
    return node;
}

void add(Node*& head, DonHang dh) {
    Node* node = creNode(dh);
    
    if (head == NULL) {
        head = node;
        return;
    }
    
    Node* cur = head;
    while (cur->next) 
        cur = cur->next;
    cur->next = node;
}

void print(Node*& head) {
    Node* cur = head;
    while (cur) {
        cout << "{" << cur->data.maDH << " - " << cur->data.tongTien << "}\n";
        cur = cur->next;
    }
}

void print(Node*& head, int giaLonNhat) {
    Node* cur = head;
    while (cur) {
        if (cur->data.tongTien <= giaLonNhat)
            cout << "{" << cur->data.maDH << " - " << cur->data.tongTien << "}\n";
        cur = cur->next;
    }
}


void del(Node*& head, string maDH) {
    Node* cur = head;
    Node* prev = NULL;

    while (cur) {
        if (cur->data.maDH == maDH) {
            if (prev == NULL) 
                head = cur->next;
            else 
                prev->next = cur->next;
    
            delete cur;
            return;  
        }
        
        prev = cur;
        cur = cur->next;
    }
}

int main() {
    int n;
    DonHang dh;
    string maDHCX;
    int tienLonNhat;
    Node* head = NULL;
    
    cin >> n;
    while (n--) {
        cin >> dh.maDH >> dh.tongTien;
        add(head, dh);
    }
    
    cin >> maDHCX >> tienLonNhat;
    del(head, maDHCX);
    print(head, tienLonNhat);
    return 0;
}