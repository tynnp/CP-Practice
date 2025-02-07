#include <iostream>
#include <cmath>
using namespace std;

struct KG2C {
    int x, y;
};

struct KG3C {
    int x, y, z;
};

template <typename T>
struct Array {
    int size = 0;
    T data[100];

    double khoangCachLonNhat();
    void sapXepTangDan();
    void sapXepGiamDan();
};

istream& operator >> (istream &in, KG2C &toaDo);
ostream& operator << (ostream &out, KG2C toaDo);
double operator - (KG2C a, KG2C b);
bool operator < (KG2C a, KG2C b);

istream& operator >> (istream &in, KG3C &toaDo);
ostream& operator << (ostream &out, KG3C toaDo);
double operator - (KG3C a, KG3C b);
bool operator < (KG3C a, KG3C b);

template<typename T>
istream& operator >> (istream &in, Array<T> &array);

template<typename T>
ostream& operator << (ostream &out, Array<T> array);


int main() {
    string str; 
    Array<KG2C> arr2C;
    Array<KG3C> arr3C;

    while (cin >> str) {
        if (str == "Oxy") cin >> arr2C;
        if (str == "Oxyz") cin >> arr3C;
    }

    arr2C.sapXepTangDan(); 
    cout << arr2C << endl;
    
    arr3C.sapXepGiamDan(); 
    cout << arr3C << endl;

    cout << roundf(arr2C.khoangCachLonNhat()*1000)/1000 << endl;
    cout << roundf(arr3C.khoangCachLonNhat()*1000)/1000 << endl;

    return 0;
}

istream& operator >> (istream &in, KG2C &toaDo) {
    in >> toaDo.x >> toaDo.y;
    return in;
}

ostream& operator << (ostream &out, KG2C toaDo) {
    out << "(" << toaDo.x << ", " << toaDo.y << ")";
    return out;
}

double operator - (KG2C a, KG2C b) {
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

bool operator < (KG2C a, KG2C b) {
    if (a.x < b.x) return true;
    if (a.x == b.x && a.y < b.y) return true;
    return false;
}

istream& operator >> (istream &in, KG3C &toaDo) {
    in >> toaDo.x >> toaDo.y >> toaDo.z;
    return in;
}

ostream& operator << (ostream &out, KG3C toaDo) {
    out << "(" << toaDo.x << ", " << toaDo.y << ", " << toaDo.z << ")";
    return out;
}

double operator - (KG3C a, KG3C b) {
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2) + pow(b.z - a.z, 2));
}

bool operator < (KG3C a, KG3C b) {
    if (a.x < b.x) return true;
    if (a.x == b.x && a.y < b.y) return true;
    if (a.x == b.x && a.y == b.y && a.z < b.z) return true;
    return false;
}

template<typename T>
istream& operator >> (istream &in, Array<T> &array) {
    T n; 
    in >> n;
    array.data[array.size++] = n;
    return in;
} 

template<typename T>
ostream& operator << (ostream &out, Array<T> array) {
    for (int i = 0; i < array.size; i++) 
        out << array.data[i] << " ";
    return out;
}

template<typename T>
double Array<T>::khoangCachLonNhat() {
        double res = 0;
        for (int i = 0; i < size; i++)
            for (int j = i + 1; j < size; j++)
                if (res < data[i] - data[j])
                    res = data[i] - data[j];
        return res;
    }

template<typename T>
void Array<T>::sapXepTangDan() {
    for (int i = 1; i < size; i++) {
        int j = i;
        while (j > 0 && data[j] < data[j-1]) {
            swap(data[j], data[j-1]);
            j--;
        }
    }
}

template<typename T> 
void Array<T>::sapXepGiamDan() {
    for (int i = 1; i < size; i++) {
        int j = i;
        while (j > 0 && data[j-1] < data[j]) {
            swap(data[j-1], data[j]);
            j--;
        }
    }
}