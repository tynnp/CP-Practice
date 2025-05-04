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
 
int main() {
    int n;
    DonHang dh;
    Node* head = NULL;
    
    cin >> n;
    while (n--) {
        cin >> dh.maDH >> dh.tongTien;
        add(head, dh);
    }
    
    print(head);
    return 0;
}