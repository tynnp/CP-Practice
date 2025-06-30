#include <iostream>
using namespace std;

class SoPhuc {
private:
    int thuc, ao;
    
public:
    void setThuc(int thuc) {
        this->thuc = thuc;
    }

    int getThuc() {
        return thuc;
    }

    void setAo(int ao) {
        this->ao = ao;
    }

    int getAo() {
        return ao;
    }

    SoPhuc(int k = 1) {
        thuc = ao = k;
    }

    SoPhuc(int thuc, int ao) {
        this->thuc = thuc;
        this->ao = ao;
    }

    friend istream &operator >> (istream &in, SoPhuc &s) {
        in >> s.thuc >> s.ao;
        return in;
    }

    friend ostream &operator << (ostream &out, SoPhuc s) {
        out << s.thuc << "+" << s.ao << "i";
        return out;
    }

    SoPhuc operator + (SoPhuc other) {
        SoPhuc res;
        res.thuc = thuc + other.thuc;
        res.ao = ao + other.ao;
        return res;
    }

    SoPhuc operator - (SoPhuc other) {
        SoPhuc res;
        res.thuc = thuc - other.thuc;
        res.ao = ao - other.ao;
        return res;
    }
    
    SoPhuc operator * (SoPhuc other) {
        SoPhuc res;
        res.thuc = thuc * other.thuc - ao * other.ao;
        res.ao = thuc * other.ao + ao * other.thuc;
        return res;
    }
    
    SoPhuc operator ^ (int n) {
        SoPhuc res(1, 0);
        for (int i = 0; i < n; i++)
            res = res * (*this);
        return res;
    }
};

int main() {
    int n;
    SoPhuc a, b;
    cin >> a >> b >> n;
    cout << (a * b) << endl;
    cout << (a ^ n);
    return 0;
}