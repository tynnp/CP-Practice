#include <iostream>
#include <fstream>
#include <algorithm>
#include <cmath>
using namespace std;

struct Diem {
    int x, y, z;
};

struct Array {
    int size;
    Diem data[100];

    double khoangCachLonNhat();
    void sapXepTangDan();
    void sapXepGiamDan();
};

istream &operator >> (istream &in, Diem &diem);
ostream &operator << (ostream &out, Diem diem);
Diem operator + (Diem a, Diem b);
double operator - (Diem a, Diem b);
bool operator < (Diem a, Diem b);
bool operator == (Diem a, Diem b);

istream &operator >> (istream &in, Array &arr);
ostream &operator << (ostream &out, Array arr);
Array operator + (Array a, Array b);
double* operator - (Array a, Array b);
bool operator == (Array a, Array b);

int main() {
    // ifstream ifile;
    // ofstream ofile;
    // ifile.open("OPERATOR.inp");
    // ofile.open("OPERATOR.out");

    Array list1, list2, list3;
    cin >> list1 >> list2;
    list3 = list1 + list2;
    double* list4 = list1 - list2;
    bool check = (list1 == list2);

    list1.sapXepTangDan();
    cout << list1 << endl;
    cout << roundf(list1.khoangCachLonNhat()*1000)/1000 << endl;

    list2.sapXepGiamDan();
    cout << list2 << endl;
    cout << roundf(list2.khoangCachLonNhat()*1000)/1000 << endl;

    cout << list3 << endl;

    for (int i = 0; i < max(list1.size, list2.size); i++)
        cout << roundf(list4[i]*1000)/1000 << " ";
    cout << endl;

    cout << (check ? "TRUE" : "FALSE");

    // ifile.close();
    // ofile.close();
    return 0;
}

istream &operator >> (istream &in, Diem &diem) {
    in >> diem.x >> diem.y >> diem.z;
    return in;
}

ostream &operator << (ostream &out, Diem diem) {
    out << "(" << diem.x << "," << diem.y << "," << diem.z << ")";
    return out;
}

Diem operator + (Diem a, Diem b) {
    Diem res;
    res.x = a.x + b.x;
    res.y = a.y + b.y;
    res.z = a.z + b.z;
    return res;
}

double operator - (Diem a, Diem b) {
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2) + pow(b.z - a.z, 2));
}

bool operator < (Diem a, Diem b) {
    if (a.x != b.x) return a.x < b.x;
    if (a.y != b.y) return a.y < b.y;
    return a.z < b.z;
}

bool operator == (Diem a, Diem b) {
    return  (a.x == b.x || a.x == b.y || a.x == b.z) || 
            (a.y == b.x || a.y == b.y || a.y == b.z) || 
            (a.z == b.x || a.z == b.y || a.z == b.z);
}

istream &operator >> (istream &in, Array &arr) {
    in >> arr.size;
    for (int i = 0; i < arr.size; i++) 
        in >> arr.data[i];
    return in;
} 

ostream &operator << (ostream &out, Array arr) {
    for (int i = 0; i < arr.size; i++)
        out << arr.data[i] << " ";
    return out;
}

Array operator + (Array a, Array b) {
    Array res, arrMax;
    arrMax = (a.size > b.size ? a : b);
    int minLen = min(a.size, b.size);
    int maxLen = max(a.size, b.size);
    res.size = maxLen;

    for (int i = 0; i < minLen; i++)
        res.data[i] = a.data[i] + b.data[i];

    for (int i = minLen; i < maxLen; i++)
        res.data[i] = arrMax.data[i];

    return res;
}

double* operator - (Array a, Array b) {
    double* res = new double[max(a.size, b.size)];
    int minLen = min(a.size, b.size);
    int maxLen = max(a.size, b.size);

    for (int i = 0; i < minLen; i++)
        res[i] = a.data[i] - b.data[i];

    for (int i = minLen; i < maxLen; i++)
        res[i] = 0;

    return res;
}

bool operator == (Array a, Array b) {
    if (a.size != b.size) 
        return false;

    for (int i = 0; i < a.size; i++)
        if (!(a.data[i] == b.data[i])) 
            return false;

    return true;
}

double Array::khoangCachLonNhat() {
    double res = 0;
    for (int i = 0; i < size; i++)
        for (int j = i+1; j < size; j++)
            if (res < data[i] - data[j])
                res = data[i] - data[j];
    return res;
}

void Array::sapXepTangDan() {
    for (int i = 1; i < size; i++) {
        int j = i;
        while (j > 0 && data[j] < data[j-1])
            swap(data[j-1], data[j]), j--;
    }
}

void Array::sapXepGiamDan() {
    for (int i = 1; i < size; i++) {
        int j = i;
        while (j > 0 && data[j-1] < data[j])
            swap(data[j-1], data[j]), j--;
    }
}