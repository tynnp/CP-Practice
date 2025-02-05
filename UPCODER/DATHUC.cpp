#include <iostream>
using namespace std;

struct BacNhat {
    int a, b, x;
    int giaTri(int x);
};

istream& operator >> (istream& in, BacNhat &bn);
ostream& operator << (ostream& out, BacNhat bn);
BacNhat operator + (BacNhat u, BacNhat v);
bool operator == (BacNhat u, BacNhat v);

int main() {
    BacNhat f1, f2;
    int x;
    cin >> f1 >> f2 >> x;

    cout << f1 << endl;
    cout << f2 << endl;
    cout << f1 << "+" << f2 << "=" << f1 + f2 << endl;
    cout << f1.giaTri(x) << endl;
    cout << f2.giaTri(x) << endl;
    
    if (f1 == f2) cout << "TRUE";
    else cout << "FALSE";

    return 0;
}

int BacNhat::giaTri(int x) {
    return a*x + b;
}

istream& operator >> (istream& in, BacNhat &bn) {
    in >> bn.a >> bn.b;
    return in;
}

ostream& operator << (ostream& out, BacNhat bn) {
    out << bn.a << "x+" << bn.b;
    return out;
}

BacNhat operator + (BacNhat u, BacNhat v) {
    BacNhat res;
    res.a = u.a + v.a;
    res.b = u.b + v.b;
    return res;
}

bool operator == (BacNhat u, BacNhat v) {
    return u.a + u.b == v.a + v.b;
}