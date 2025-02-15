#include <iostream>
using namespace std;

struct TacGia {
    int n;
    string danhSach[5];

    bool check(string tg) {
        for (int i = 0; i < n; i++)
            if (danhSach[i] == tg) return true;
        return false;
    }
};

istream &operator >> (istream &in, TacGia &tg) {
    in >> tg.n;
    in.ignore();
    for (int i = 0; i < tg.n; i++)
        getline(in, tg.danhSach[i]);
    return in;
}

struct Sach {
    string tenSach;
    TacGia tacGia;
    string nhaXuatBan;
    int namXuatBan;

    bool checkTacGia(string tg) {
        return tacGia.check(tg);
    }

    bool checkNhaXuatBanVaNam(string nxb, int nam) {
        return nhaXuatBan == nxb && namXuatBan == nam;
    }
};

istream &operator >> (istream &in, Sach &s) {
    in >> s.tenSach >> s.tacGia;
    getline(in, s.nhaXuatBan);
    in >> s.namXuatBan;
    return in;
}

ostream &operator << (ostream &out, Sach s) {
    out << s.tenSach << "-" << s.tacGia.n << " tac gia-" << s.nhaXuatBan << "-" << s.namXuatBan;
    return out;
}

struct Node {
    Sach data;
    Node *next;
    Node(Sach s): data(s), next(nullptr) {}
};

struct LinkedList {
    Node *head;
    LinkedList(): head(nullptr) {}

    void add(Sach s) {
        Node *node = new Node(s);

        if (head == nullptr) {
            head = node;
            return;
        }

        Node *cur = head;
        while (cur->next != nullptr)
            cur = cur->next;
        cur->next = node;
    }

    void print() {
        Node *cur = head;
        while (cur != nullptr) {
            cout << cur->data << endl;
            cur = cur->next;
        }
    }

    int cntTacGia(string tg) {
        int res = 0;
        Node *cur = head;

        while (cur != nullptr) {
            if (cur->data.checkTacGia(tg)) res++;
            cur = cur->next;
        }

        return res;
    }

    void print2(string nxb, int nam) {
        int cnt = 0;
        Node *cur = head;

        while (cur != nullptr) {
            if (cur->data.checkNhaXuatBanVaNam(nxb, nam)) cnt++;
            cur = cur->next;
        }

        cout << cnt << endl;

        cur = head;
        while (cur != nullptr) {
            if (cur->data.checkNhaXuatBanVaNam(nxb, nam))
                cout << cur->data << endl;
            cur = cur->next;
        }
    }
};

int main() {
    int nam, n;
    string nxb, tg;
    LinkedList list;

    cin >> nam;
    cin.ignore();
    getline(cin, nxb);
    getline(cin, tg);
    cin >> n;

    Sach x;
    while (n--) {
        cin >> x;
        list.add(x);
    }

    list.print();
    cout << list.cntTacGia(tg) << endl;
    list.print2(nxb, nam);

    return 0;
}