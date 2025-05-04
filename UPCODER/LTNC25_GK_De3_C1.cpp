#include <iostream>
#include <iomanip>
using namespace std;

struct NhanVien {
    string maSo;
    double heSoLuong;
};

struct Node {
    NhanVien data;
    Node* next;
};

Node* creNode(NhanVien p) {
    Node* node = new Node();
    node->data = p;
    node->next = NULL;
    return node;
}

void add(Node*& head, NhanVien p) {
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
        cout << "{" << cur->data.maSo << " - " << cur->data.heSoLuong << "}\n";
        cur = cur->next;
    }
}

int main() {
    int n;
    string maSo;
    double heSoLuong;
    Node* head = NULL;
    
    cin >> n;
    while (n--) {
        cin >> maSo >> heSoLuong;
        NhanVien p;
        p.maSo = maSo;
        p.heSoLuong = heSoLuong;
        add(head, p);
    }
    
    print(head);
    return 0;
}