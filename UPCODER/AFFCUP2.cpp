#include <bits/stdc++.h>
using namespace std;

struct ThongTin {
    string doiNha, doiKhach;
    int diemNha, diemKhach;
} a, b, c, d;

char kt;
int tongDiem[5];

int main() {
    cin >> a.doiNha >> a.diemNha >> kt >> b.diemKhach >> b.doiKhach;
    cin >> b.doiNha >> b.diemNha >> kt >> a.diemKhach >> a.doiKhach;
    cin >> c.doiNha >> c.diemNha >> kt >> d.diemKhach >> d.doiKhach;
    cin >> d.doiNha >> d.diemNha >> kt >> c.diemKhach >> c.doiKhach; 
    
    tongDiem[1] = a.diemNha + a.diemKhach;
    tongDiem[2] = b.diemNha + b.diemKhach;
    tongDiem[3] = c.diemNha + c.diemKhach;
    tongDiem[4] = d.diemNha + d.diemKhach;

    if (tongDiem[1] > tongDiem[2])
        cout << a.doiNha;
    else if (tongDiem[1] < tongDiem[2])
        cout << b.doiNha;
    else {
        if (a.diemKhach > b.diemKhach)
            cout << a.doiNha;
        else 
            cout << b.doiNha;
    }

    cout << " - ";

    if (tongDiem[3] > tongDiem[4])
        cout << c.doiNha;
    else if (tongDiem[3] < tongDiem[4])
        cout << d.doiNha;
    else {
        if (c.diemKhach > d.diemKhach) 
            cout << c.doiNha;
        else 
            cout << d.doiNha;
    }

    return 0;
}