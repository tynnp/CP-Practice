#include <iostream>
using namespace std;

class Hinh {
public: 
    virtual istream& nhap(istream& in) = 0;
    virtual double dienTich() = 0;
};

class HinhVuong : public Hinh {
private:
    double canh;
public:
    virtual istream& nhap(istream& in) {
        in >> canh;
        return in;
    }

    virtual double dienTich() {
        return canh * 4;
    }
};

class HinhChuNhat : public Hinh {
private:
    double dai, rong;
public: 
    virtual istream& nhap(istream& in) {
        in >> dai >> rong;
        return in;
    }

    virtual double dienTich() {
        return (dai + rong) * 2;
    }
};

int main() {
    Hinh* a[100];
    int i = 0; 
    char c;

    while (cin >> c) {
        if (c == 'a') a[i] = new HinhVuong();
        if (c == 'b') a[i] = new HinhChuNhat();
        a[i]->nhap(cin);
        cout << a[i]->dienTich() << '\n';
    }

    return 0;
}