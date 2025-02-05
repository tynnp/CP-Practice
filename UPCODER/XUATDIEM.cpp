#include <iostream>
using namespace std;

struct Diem {
    int x, y;
};

struct MangDiem {
    int size;
    Diem data[100];
    Diem diemLonNhat();
    Diem tongDiem();
};

istream& operator >> (istream& in, Diem& diem);
ostream& operator << (ostream& out, Diem diem);
bool operator == (Diem a, Diem b);
bool operator < (Diem a, Diem b);
Diem operator + (Diem a, Diem b);

istream& operator >> (istream& in, MangDiem& arr);
ostream& operator << (ostream& out, MangDiem arr);
MangDiem operator + (MangDiem a, MangDiem b);

int main() {
    MangDiem arr; 
    cin >> arr;
    cout << arr.diemLonNhat() << endl;
    cout << arr.tongDiem() << endl;
    return 0;
}

istream& operator >> (istream& in, Diem& diem) {
    in >> diem.x >> diem.y;
    return in;
}

ostream& operator << (ostream& out, Diem diem) {
    out << "(" << diem.x << "," << diem.y << ")";
    return out;
}

bool operator == (Diem a, Diem b) {
    return (a.x == b.x && a.y == b.y);
}

bool operator < (Diem a, Diem b) {
    if (a.x < b.x) 
        return true;

    if ((a.x == b.x) && (a.y < b.y)) 
        return true;

    return false;
}

Diem operator + (Diem a, Diem b) {
    Diem res;
    res.x = a.x + b.x;
    res.y = a.y + b.y;
    return res;
}

istream& operator >> (istream& in, MangDiem& arr) {
    arr.size = 0;
    while (cin >> arr.data[arr.size]) arr.size++;
    return in;
} 

ostream& operator << (ostream& out, MangDiem arr) {
    for (int i = 0; i < arr.size; i++)
        out << arr.data[i];
    return out;
}

MangDiem operator + (MangDiem a, MangDiem b) {
    MangDiem res;
    res.size = max(a.size, b.size);

    for (int i = 0; i < res.size; i++) 
        res.data[i] = a.data[i] + b.data[i];

    return res;
}

Diem MangDiem::diemLonNhat() {
    Diem res = data[0];
    for (int i = 1; i < size; i++)
        if (res < data[i]) 
            res = data[i];
    return res;
}

Diem MangDiem::tongDiem() {
    Diem res = data[0];
    for (int i = 1; i < size; i++)
        res = res + data[i];
    return res;
}