#include <iostream>
#include <iomanip>
using namespace std;

struct ToaDo {
    double x, y;
};

istream &operator >> (istream &in, ToaDo &td) {
    in >> td.x >> td.y;
    return in;
}

ostream &operator << (ostream &out, ToaDo td) {
    out << fixed << setprecision(2);
    out << '(' << td.x << ", " << td.y << ')';
    return out;
}

ToaDo operator + (ToaDo a, ToaDo b) {
    ToaDo res;
    res.x = a.x + b.x;
    res.y = a.y + b.y;
    return res;
}

ToaDo operator - (ToaDo a, ToaDo b) {
    ToaDo res;
    res.x = a.x - b.x;
    res.y = a.y - b.y;
    return res;
}

int main() {
    ToaDo a, b;
    cin >> a >> b;
    cout << a + b << endl;
    cout << a - b;
    return 0;
}