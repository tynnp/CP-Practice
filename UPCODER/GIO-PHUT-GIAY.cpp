#include <iostream>
using namespace std;

string parse(int giay) {
    int h = giay/3600; giay %= 3600;
    int m = giay/60; 
    int s = giay %= 60;
    return to_string(h) + ':' + to_string(m) + ':' + to_string(s);
}

int main() {
    int giay;
    cin >> giay;
    cout << parse(giay);
    return 0;
}