#include <bits/stdc++.h>
#include <cmath>
using namespace std;

struct Diem {
    int x, y;
};

struct DuongTron {
    Diem d;
    int r;
};

istream &operator >> (istream &in, Diem &d);
ostream &operator << (ostream &out, Diem d);
double operator - (Diem a, Diem b);

istream &operator >> (istream &in, DuongTron &dt);
ostream &operator << (ostream &out, DuongTron dt);
bool operator == (DuongTron a, DuongTron b);
bool operator < (DuongTron a, DuongTron b);

Diem toaDoTam(DuongTron C);
double banKinh(DuongTron C);

int main() {
    Diem a;
    DuongTron dt1, dt2, dt3;
    cin >> a >> dt1 >> dt2;
    cin.ignore();
    
    cout << a << endl;
    cout << dt1 << endl;
    cout << dt2 << endl;
    
    string s;
    getline(cin, s); 
  
    int tamX, tamY, R2;
    size_t pos = s.find("(x-");

    if(pos != string::npos) {
        pos += 3; 
        size_t pos2 = s.find(")^2", pos);
        string sTamX = s.substr(pos, pos2 - pos);
        tamX = stoi(sTamX);
    }

    pos = s.find("(y-");
    if(pos != string::npos) {
        pos += 3; 
        size_t pos2 = s.find(")^2", pos);
        string sTamY = s.substr(pos, pos2 - pos);
        tamY = stoi(sTamY);
    }
    
    pos = s.find("=");
    if(pos != string::npos) {
        pos += 1; 
        string sR2 = s.substr(pos);
        R2 = stoi(sR2);
    }

    dt3.d.x = tamX;
    dt3.d.y = tamY;
    dt3.r = sqrt(R2); 
    
    if(dt1 == dt2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    
    if(dt1 < dt2)
        cout << "C1 < C2" << endl;
    else if(dt2 < dt1)
        cout << "C1 > C2" << endl;
    else
        cout << "C1 = C2" << endl;
    
    int dx = a.x - dt1.d.x;
    int dy = a.y - dt1.d.y;
    int d = dx * dx + dy * dy;
    int r = dt1.r * dt1.r;

    if(d < r)
        cout << "A nam trong C1" << endl;
    else if(d == r)
        cout << "A nam tren C1" << endl;
    else
        cout << "A nam ngoai C1" << endl;
    
    dx = a.x - dt2.d.x;
    dy = a.y - dt2.d.y;
    d = dx * dx + dy * dy;
    r = dt2.r * dt2.r;

    if(d < r)
        cout << "A nam trong C2" << endl;
    else if(d == r)
        cout << "A nam tren C2" << endl;
    else
        cout << "A nam ngoai C2" << endl;
    
    cout << "Tam " << toaDoTam(dt3) << " Ban kinh " << banKinh(dt3);
    
    return 0;
}

istream &operator >> (istream &in, Diem &d) {
    in >> d.x >> d.y;
    return in;
}

ostream &operator << (ostream &out, Diem d) {
    out << '(' << d.x << ',' << d.y << ')';
    return out;
}

double operator - (Diem a, Diem b) {
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

istream &operator >> (istream &in, DuongTron &dt) {
    in >> dt.d >> dt.r;
    return in;
}

ostream &operator << (ostream &out, DuongTron dt) {
    out << "(x-" << dt.d.x << ")^2+(y-" << dt.d.y << ")^2=" << dt.r * dt.r;
    return out;
}

bool operator == (DuongTron a, DuongTron b) {
    return (a.r == b.r && a.d.x == b.d.x && a.d.y == b.d.y);
}

bool operator < (DuongTron a, DuongTron b) {
    return a.r < b.r;
}

Diem toaDoTam(DuongTron C) {
    return C.d;
}

double banKinh(DuongTron C) {
    return C.r;
}
