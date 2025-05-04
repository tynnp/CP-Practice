#include <iostream>
#include <iomanip>
using namespace std;

struct SanPham {
    string maSo;
    double donGia;
};

struct Node {
    SanPham data;
    Node* next;
};

Node* creNode(SanPham p) {
    Node* node = new Node();
    node->data = p;
    node->next = NULL;
    return node;
}

void add(Node*& head, SanPham p) {
    Node* node = creNode(p);
    
    if (head == NULL) {
        head = node;
        return;
    }
    
    Node* cur = head;
    while (cur->next != NULL)
        cur = cur->next;
    cur->next = node;
}

void print(Node*& head) {
    Node* cur = head;
    
    while (cur != NULL) {
        cout << fixed << setprecision(2);
        cout << "{" << cur->data.maSo << " - " << cur->data.donGia << "}\n";
        cur = cur->next;
    }
}

int main() {
    int n;
    string maSo;
    double donGia;
    Node* head = NULL;
    
    cin >> n;
    while (n--) {
        cin >> maSo >> donGia;
        SanPham p;
        p.maSo = maSo;
        p.donGia = donGia;
        add(head, p);
    }
    
    print(head);
    return 0;
}