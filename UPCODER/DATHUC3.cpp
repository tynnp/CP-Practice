#include <iostream>
#include <cmath>
using namespace std;

struct BacHai {
    int a, b, c;

    int tinhGiaTri(int x) {
        return a*x*x + b*x + c;
    }
};

istream& operator >> (istream &in, BacHai &bacHai) {
    in >> bacHai.a >> bacHai.b >> bacHai.c;
    return in;
}

ostream& operator << (ostream &out, BacHai bacHai) {
    out << bacHai.a << "x^2";

    if (bacHai.b < 0) out << "-";
    else out << "+";
    out << abs(bacHai.b) << "x";

    if (bacHai.c < 0) out << "-";
    else out << "+";
    out << abs(bacHai.c);
}

BacHai operator + (BacHai bh1, BacHai bh2) {
    BacHai res;
    res.a = bh1.a + bh2.a;
    res.b = bh1.b + bh2.b;
    res.c = bh1.c + bh2.c;
    return res;
}

bool operator == (BacHai bh1, BacHai bh2) {
    return bh1.a == bh2.a && bh1.b == bh2.b && bh1.c == bh2.c;
}

struct BacNhat {
    int a, b;

    int tinhGiaTri(int x) {
        return a*x + b;
    }
};

istream& operator >> (istream &in, BacNhat &bacNhat) {
    in >> bacNhat.a >> bacNhat.b;
    return in;
}

ostream& operator << (ostream &out, BacNhat bacNhat) {
    out << bacNhat.a << "x";

    if (bacNhat.b < 0) out << "-";
    else out << "+";
    out << abs(bacNhat.b);

    return out;
}

BacHai operator * (BacNhat bn1, BacNhat bn2) {
    BacHai res;
    res.a = bn1.a * bn2.a;
    res.b = bn1.a * bn2.b + bn1.b*bn2.a;
    res.c = bn1.b * bn2.b;
    return res;
}

int main() {
    BacHai F1, F2;
    BacNhat F3, F4;
    cin >> F1 >> F2 >> F3 >> F4;
    int x; cin >> x;

    cout << F1 << endl;
    cout << F1.tinhGiaTri(x) << endl;

    cout << F2 << endl;
    cout << F2.tinhGiaTri(x) << endl;

    BacHai F5 = F1 + F2;
    cout << F5 << endl;
    cout << F5.tinhGiaTri(x) << endl;

    BacHai F6 = F3 * F4;
    cout << "(" << F3 << ")*(" << F4 << ")=";
    cout << F6 << endl;
    cout << F6.tinhGiaTri(x) << endl;

    if (F1 == F2 && F2 == F6) cout << "TRUE3";
    else if (F2 == F6) cout << "TRUE2";
    else if (F1 == F6) cout << "TRUE1";
    else cout << "FALSE";

    return 0;
}