#include <iostream>
using namespace std;

class ARRINT2 {
public:
    int len;
    int* a;

    ARRINT2(int n) {
        len = n;
        a = new int[n];
    }

    friend istream& operator >> (istream &in, ARRINT2 &arrInt) {
        for (int i = arrInt.len-1; i >= 0; i--) 
            in >> arrInt.a[i];
        return in;
    }

    friend ostream& operator << (ostream &out, ARRINT2 arrInt) {
        out << arrInt.len << ": ";
        for (int i = 0; i < arrInt.len; i++)    
            out << arrInt.a[i];
    }

    ARRINT2 operator - (ARRINT2 other) {
        ARRINT2 res(max(len, other.len));

        for (int i = 0; i < res.len; i++) {
            res.a[i] = a[i] - other.a[i];
            if (res.a[i] < 0) res.a[i] = -res.a[i];
        }

        return res;
    }
};

int main() {
    int n, m;
    cin >> n >> m;

    ARRINT2 arrInt1(n), arrInt2(m);
    cin >> arrInt1 >> arrInt2;
    cout << arrInt1 - arrInt2;

    return 0;
}