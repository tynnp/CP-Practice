#include <iostream>
using namespace std;

struct SoDao {
    int number;

    int soDao() {
        int tmp = number;
        int res = 0;
        while (tmp > 0) 
            res = res*10 + tmp%10,
            tmp /= 10;
        return res;
    }
};

istream& operator >> (istream &in, SoDao &sd) {
    in >> sd.number;
    return in;
}

ostream& operator << (ostream &out, SoDao sd) {
    out << "[SoDao] " << sd.number;
    return out;
}

bool operator > (SoDao a, SoDao b) {
    return a.soDao() > b.soDao();
}

int operator + (SoDao sd, int x) {
    return sd.soDao() + x;
}

template<typename T>
struct Array {
    int size;
    T data[1000];

    int tongSo() {
        int res = 0;
        for (int i = 0; i < size; i++)
            res = data[i] + res;
        return res;
    }

    T soLonNhat() {
        T res = data[0];
        for (int i = 1; i < size; i++) 
            if (data[i] > res)
                res = data[i];
        return res;
    }
};

template<typename T>
istream& operator >> (istream &in, Array<T> &arr) {
    in >> arr.data[arr.size];
    arr.size++;
    return in;
}

template<typename T>
ostream& operator << (ostream &out, Array<T> arr) {
    if (arr.size == 0) 
        out << "khong co\nkhong co\n";
    else {
        out << arr.tongSo() << endl;
        out << arr.soLonNhat() << endl;
    }
    return out;
}

int main() {
    char c; 
    Array<int> arrInt;
    Array<SoDao> arrSoDao;

    while (cin >> c) {
        if (c == 'T') cin >> arrInt;
        if (c == 'D') cin >> arrSoDao;
    }

    cout << arrInt;
    cout << arrSoDao;

    return 0;
}