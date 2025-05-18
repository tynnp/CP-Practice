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

bool operator > (ToaDo a, ToaDo b) {
    if (a.x > b.x)
        return true;
    
    if (a.x == b.x && a.y > b.y)
        return true;
    
    return false;
}

bool operator < (ToaDo a, ToaDo b) {
    if (a.x < b.x) 
        return true;

    if (a.x == b.x && a.y < b.y)
        return true;
    
    return false;
}

// Tien to
ToaDo operator ++ (ToaDo &td) {
    td.x += 1;
    td.y += 1;
    return td;
}

// Hau to
ToaDo operator ++ (ToaDo &td, int) {
    ToaDo prev = td;
    td.x += 1;
    td.y += 1;
    return prev;
}

// Tien to
ToaDo operator -- (ToaDo &td) {
    td.x -= 1;
    td.y -= 1;
    return td;
}

// Hau to
ToaDo operator -- (ToaDo &td, int) {
    ToaDo prev = td;
    td.x -= 1;
    td.y -= 1;
    return td;
}

int main() {
    ToaDo a;
    cin >> a;

    ToaDo b = a++;
    cout << a << endl;
    cout << --b;

    return 0;
}