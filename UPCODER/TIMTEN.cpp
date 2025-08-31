#include <bits/stdc++.h>
using namespace std;

struct nhanVien {
    long long maso;
    string ten;
};

istream& operator >> (istream& in, nhanVien &p){
    in >> p.maso;
    in.ignore();
    getline(in, p.ten);
    return in;
}

ostream& operator << (ostream& out, nhanVien p){
    out << p.ten;
    return out;
}

int main() {
    int n, k;
    cin >> n;
    cin.ignore();
    
    vector <nhanVien> v(n);
    
    for(auto &x : v) cin >> x;
    cin >> k;
    
    for(int i = 0; i < v.size(); i++){
        if(v[i].maso == k){
            cout << v[i];
            return 0;
        }
    }
    
    cout << "Khong tim thay";
    return 0;
}