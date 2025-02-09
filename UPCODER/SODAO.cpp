#include <iostream>
using namespace std;

struct SoDao {
    int num;

    int soDao() {
        int tmp = num;
        int res = 0;
        while (tmp > 0) 
            res = res*10 + tmp%10,
            tmp /= 10;
        return res;
    }
};

istream& operator >> (istream &in, SoDao &sd) {
    in >> sd.num;
    return in;
}

ostream& operator << (ostream &out, SoDao sd) {
    out << "[SoDao] " << sd.num;
    return out;
}

bool operator > (SoDao a, SoDao b) {
    return a.soDao() > b.soDao();
}

int operator + (SoDao sd, int x) {
    return sd.soDao() + x;
}

int main() {
    SoDao a, b;
    cin >> a >> b;

    cout << a << endl;
    cout << b << endl;

    cout << (a > b ? "YES" : "NO") << endl;
    
    int res = a + 0;
    cout << b + res;

    return 0;
}