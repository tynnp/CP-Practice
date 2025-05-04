#include <iostream>
#include <iomanip>
using namespace std;

struct SinhVien {
    string maSo;
    double diemTB;
};

struct Node {
    SinhVien data;
    Node* next;
};

Node* creNode(SinhVien p) {
    Node* node = new Node();
    node->data = p;
    node->next = NULL;
    return node;
}

void add(Node*& head, SinhVien p) {
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
        cout << "{" << cur->data.maSo << " - " << cur->data.diemTB << "}\n";
        cur = cur->next;
    }
}

int main() {
    int n;
    string maSo;
    double diemTB;
    Node* head = NULL;
    
    cin >> n;
    while (n--) {
        cin >> maSo >> diemTB;
        SinhVien p;
        p.maSo = maSo;
        p.diemTB = diemTB;
        add(head, p);
    }
    
    print(head);
    return 0;
}