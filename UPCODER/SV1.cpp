#include <iostream>
using namespace std;

struct SinhVien {
    string hoVaTen;
    double diem[3];
    
    double DTB() {
        return (diem[0] + diem[1] + diem[2]) / 3; 
    }
};

istream &operator >> (istream &in, SinhVien &sv) {
    getline(in, sv.hoVaTen);
    in >> sv.diem[0] >> sv.diem[1] >> sv.diem[2];
    return in;
}

ostream &operator << (ostream &out, SinhVien sv) {
    out << sv.hoVaTen;
    return out;
}

bool operator < (SinhVien sv1, SinhVien sv2) {
    return sv1.DTB() < sv2.DTB();
}

int main() {
    int n = 0;
    SinhVien dsSV[100];
    
    while (cin >> dsSV[n]) {
        n++;
        cin.ignore();
    }
    
    double diemMax = 0;
    
    for (int i = 0; i < n; i++) 
        if (dsSV[i].DTB() > diemMax)
            diemMax = dsSV[i].DTB();
    
    for (int i = 0; i < n; i++) {
        if (dsSV[i].DTB() == diemMax) {
            cout << dsSV[i];
            break;
        }
    }
    
    return 0;
}