#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

struct PhanSo {
    int tu, mau;
    PhanSo(): tu(0), mau(0) {}
};

template <typename T>
struct Array {
    int size;
    T *data;
    T tongPhanTu();
    T phanTuMax();
};

istream& operator >> (istream &in, PhanSo &p);
ostream& operator << (ostream &out, PhanSo p);
bool operator == (PhanSo a, PhanSo b);
bool operator < (PhanSo a, PhanSo b);
bool operator > (PhanSo a, PhanSo b);
PhanSo operator + (PhanSo a, PhanSo b);

template<typename T>
istream& operator >> (istream &in, Array<T> &arr);

template<typename T>
ostream& operator << (ostream &out, Array<T> arr);

template<typename T>
Array<T> operator + (Array<T> arr1, Array<T> arr2);

Array<int> sapXep(Array<int> arr, char c = '<');
Array<PhanSo> sapXep(Array<PhanSo> arr, char c = '<');

int main() {
    char c; 
    cin >> c;
    Array<int> arrInt1;
    Array<int> arrInt2;
    Array<PhanSo> arrPhanSo1;
    Array<PhanSo> arrPhanSo2;

    if (c == 'I') {
        cin >> arrInt1 >> arrInt2;
        Array<int> sum = arrInt1 + arrInt2;

        cout << arrInt1 << endl;
        cout << "MAX 1 = " << arrInt1.phanTuMax() << endl;
        cout << "SUM 1 = " << arrInt1.tongPhanTu() << endl;
        Array<int> res1 = sapXep(arrInt1); cout << res1 << endl;

        cout << arrInt2 << endl;
        cout << "MAX 2 = " << arrInt2.phanTuMax() << endl;
        cout << "SUM 2 = " << arrInt2.tongPhanTu() << endl;
        Array<int> res2 = sapXep(arrInt2, '>'); cout << res2 << endl;
    
        cout << sum;

    } 
    
    if (c == 'F') {
        cin >> arrPhanSo1 >> arrPhanSo2;
        Array<PhanSo> sum = arrPhanSo1 + arrPhanSo2; 

        cout << arrPhanSo1 << endl;
        cout << "MAX 1 = " << arrPhanSo1.phanTuMax() << endl;
        cout << "SUM 1 = " << arrPhanSo1.tongPhanTu() << endl;
        Array<PhanSo> res1 = sapXep(arrPhanSo1); cout << res1 << endl;

        cout << arrPhanSo2 << endl;
        cout << "MAX 2 = " << arrPhanSo2.phanTuMax() << endl;
        cout << "SUM 2 = " << arrPhanSo2.tongPhanTu() << endl;
        Array<PhanSo> res2 = sapXep(arrPhanSo2, '>'); cout << res2 << endl;

        cout << sum;
    }

    return 0;
}

istream& operator >> (istream &in, PhanSo &p) {
    string str; 
    in >> str;
    int index = 0;

    for (index; index < str.length(); index++) {
        if (str[index] == '/') break;
        p.tu = p.tu*10 + str[index] - 48;
    }

    for (++index; index < str.length(); index++) {
        if (str[index] == '/') break;
        p.mau = p.mau*10 + str[index] - 48;
    }

    return in;
}

ostream& operator << (ostream &out, PhanSo p) {
    int ucln = __gcd(p.tu, p.mau);
    p.tu /= ucln;
    p.mau /= ucln;

    out << p.tu;
    if (p.tu != 0 && p.mau != 1)
        out << "/" << p.mau;

    return out;
}

bool operator == (PhanSo a, PhanSo b) {
    return a.tu*b.mau == a.mau*b.tu;
}

bool operator < (PhanSo a, PhanSo b) {
    return a.tu*b.mau < a.mau*b.tu;
}

bool operator > (PhanSo a, PhanSo b) {
    return a.tu*b.mau > a.mau*b.tu;
}

PhanSo operator + (PhanSo a, PhanSo b) {
    PhanSo res;
    res.tu = a.tu*b.mau + a.mau*b.tu;
    res.mau = a.mau * b.mau;
    
    int ucln = __gcd(res.tu, res.mau);
    res.tu /= ucln, res.mau /= ucln;

    return res;
}

template<typename T>
istream& operator >> (istream &in, Array<T> &arr) {
    in >> arr.size;
    arr.data = new T[arr.size];

    for (int i = 0; i < arr.size; i++)
        in >> arr.data[i];

    return in;
}

template<typename T>
ostream& operator << (ostream &out, Array<T> arr) {
    for (int i = 0; i < arr.size; i++)
        out << arr.data[i] << " ";
    return out;
}

template<typename T>
Array<T> operator + (Array<T> arr1, Array<T> arr2) {
    Array<T> res, max, min;

    if (arr1.size < arr2.size) 
        max = arr2, min = arr1;
    else 
        max = arr1, min = arr2;

    res.size = max.size;
    res.data = new T[res.size];

    for (int i = 0; i < min.size; i++)
        res.data[i] = max.data[i] + min.data[i];
    for (int i = min.size; i < max.size; i++)
        res.data[i] = max.data[i];

    return res;
}

Array<int> sapXep(Array<int> arr, char c) {
    if (c == '<') {
        sort(arr.data, arr.data + arr.size, [] (int a, int b) {
            if (a % 2 == 0 && b % 2 != 0) return true;
            if (a % 2 != 0 && b % 2 == 0) return false;
            return a < b;
        });

    } 

    if (c == '>') {
        sort(arr.data, arr.data + arr.size, [] (int a, int b) {
            if (a % 2 != 0 && b % 2 != 0) return a > b;
            if (a % 2 == 0 && b % 2 == 0) return a > b;
            return a % 2 != 0;
        });
    }

    return arr;
}

Array<PhanSo> sapXep(Array<PhanSo> arr, char c) {
    if (c == '<') {
        for (int i = 1; i < arr.size; i++) {
            int j = i;
            while (j > 0 && arr.data[j-1] > arr.data[j]) {
                swap(arr.data[j-1], arr.data[j]);
                j--;
            }
        }
    } 
    
    if (c == '>') {
        for (int i = 1; i < arr.size; i++) {
            int j = i;
            while (j > 0 && arr.data[j-1] < arr.data[j]) {
                swap(arr.data[j-1], arr.data[j]);
                j--;
            }
        }
    }

    return arr;
}

template<typename T>
T Array<T>::tongPhanTu() {
    T res = data[0];
    for (int i = 1; i < size; i++)
        res = res + data[i];
    return res;
}  

template<typename T>
T Array<T>::phanTuMax() {
    T res = data[0];
    for (int i = 1; i < size; i++)
        if (res < data[i])
            res = data[i];
    return res;
}