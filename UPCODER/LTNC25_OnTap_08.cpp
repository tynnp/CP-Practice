#include <iostream>
#include <iomanip>
using namespace std;

template<typename T>
struct Array {
    int size;
    T data[100];

    T tong() {
        T ans = 0;
        for (int i = 0; i < size; i++)
            ans += data[i];
        return ans;    
    }
};

template<typename T>
istream &operator >> (istream &in, Array<T> &a) {
    a.size = 0;
    while (in >> a.data[a.size]) 
        a.size++;
    return in;
}

template<typename T>
ostream &operator << (ostream &out, Array<T> a) {
    out << fixed << setprecision(2);
    out << a.tong();
    return out;
}

int main() {
    char kt;
    cin >> kt;

    if (kt == 'a') {
        Array<int> a;
        cin >> a;
        cout << a;
    }

    if (kt == 'b') {
        Array<double> b;
        cin >> b;
        cout << b;
    }
    
    return 0;
}