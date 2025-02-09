#include <iostream>
#include <string>
#define endl '\n'
using namespace std;

struct SMG {
    string maSo;
    string soDienThoai;
    string nhaMang;
};

struct QuanLiSMG {
    int size;
    SMG data[100];

    void nhap() {
        cin >> size;
        for (int i = 0; i < size; i++)
            cin >> data[i].maSo >> data[i].soDienThoai >> data[i].nhaMang;
        return;
    }

    void xuat() {
        for (int i = 0; i < size; i++) {
            cout << data[i].maSo << ":";
            cout << data[i].soDienThoai << ":";
            cout << data[i].nhaMang << endl;
        }
        return;
    }

    void timKiem(string sdt) {
        for (int i = 0; i < size; i++) {
            string soDauList = data[i].soDienThoai.substr(0, 3);
            string soDauUser = sdt.substr(0, 3);
            if (soDauList == soDauUser) {
                cout << data[i].maSo << ":";
                cout << data[i].soDienThoai << ":";
                cout << data[i].nhaMang << endl;
            }
        }
    }
};

int main() {
    string sdt; 
    QuanLiSMG list;
    list.nhap();
    cin >> sdt;
    list.timKiem(sdt);
    return 0;
}