#include <iostream>
using namespace std;

struct SoLaMa {
    string kt[11] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX", "X"};
    int val;
};

istream &operator >> (istream &in, SoLaMa &slm);
ostream &operator << (ostream &out, SoLaMa slm);
bool operator < (SoLaMa a, SoLaMa b);
int operator + (SoLaMa a, SoLaMa b);
int operator + (SoLaMa slm, int x);

int main() {
    SoLaMa a, b;
    cin >> a >> b;
    
    cout << a << endl;
    cout << b << endl;
    cout << a + b << endl;
    
    if (a < b)
        cout << "true";
    else 
        cout << "false";
        
    return 0;
}

istream &operator >> (istream &in, SoLaMa &slm) {
    string s;
    in >> s;
    
    for (int i = 1; i <= 10; i++)
        if (slm.kt[i] == s) 
            slm.val = i;
    
    return in;
}

ostream &operator << (ostream &out, SoLaMa slm) {
    out << slm.val;
    return out;
}

bool operator < (SoLaMa a, SoLaMa b) {
    return a.kt[a.val] < b.kt[b.val];
}

int operator + (SoLaMa a, SoLaMa b) {
    return a.val + b.val;
}

int operator + (SoLaMa slm, int x) {
    return slm.val + x;
}