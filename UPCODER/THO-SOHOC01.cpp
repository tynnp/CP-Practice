#include <iostream>
using namespace std;

bool checkDoiXung(string s) {
    int len = s.size();
    for (int i = 0; i <= len/2; i++)
        if (s[i] != s[len-1-i]) 
            return false;
    return true;
}

char soLonNhat(string s) {
    char res = '0';
    for (int i = 0; i < s.size(); i++)
        if (res < s[i]) res = s[i];
    return res;
}

int main() {
    string s;
    cin >> s;
    cout << soLonNhat(s) << endl;
    cout << (checkDoiXung(s) ? "Co" : "Khong");
    return 0;
}