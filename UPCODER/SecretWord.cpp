#include <iostream>
using namespace std;

string reverse(string str) {
    string res = "";
    for (int i = 0; i < str.length(); i++)
        res = str[i] + res;
    return res;
}

string check(string str) {
    string tmp = str, res = reverse(tmp);
    
    for (int i = str.length()-1; i >= 0; i--) {
        if (str.find(res) != string::npos) 
            return res;
        tmp.erase(i, 1);
        res = reverse(tmp);
    }

    return str;
}

int main() {
    int test;
    string str;
    cin >> test;

    while (test--) {
        cin >> str;
        cout << check(str) << endl;
    }

    return 0;
}