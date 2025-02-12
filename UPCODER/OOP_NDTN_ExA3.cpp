#include <iostream>
using namespace std;

class ARRINT1 {
public:
    int len;
    int* a;

    ARRINT1(int n) {
        len = n;
        a = new int[n];
    }

    friend istream& operator >> (istream &in, ARRINT1 &arrInt) {
        for (int i = arrInt.len-1; i >= 0; i--) 
            in >> arrInt.a[i];
        return in;
    }

    friend ostream& operator << (ostream &out, ARRINT1 arrInt) {
        out << arrInt.len << ": ";
        for (int i = 0; i < arrInt.len; i++)    
            out << arrInt.a[i];
    }

    ARRINT1 operator + (ARRINT1 other) {
        ARRINT1 res(max(len, other.len));

        for (int i = 0; i < res.len; i++) {
            res.a[i] = a[i] + other.a[i];
            if (res.a[i] >= 10) res.a[i] -= 10;
        }

        return res;
    }
};

int main() {
    int n, m;
    cin >> n >> m;

    ARRINT1 arrInt1(n), arrInt2(m);
    cin >> arrInt1 >> arrInt2;
    cout << arrInt1 + arrInt2;

    return 0;
}