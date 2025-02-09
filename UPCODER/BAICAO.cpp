#include <bits/stdc++.h>
using namespace std;

int tinhDiem(vector<string> v) {
    int res = 0;
    char jqk = 0;

    for (string c : v) {
        if (c == "J" || c == "Q" || c == "K") {
            jqk++;
            res += 100;
            continue;
        }

        if (c == "A")       
            res += 1;
        else if (c == "10")
            res += 10;
        else 
            res += c[0] - '0';
    }

    if (jqk == 3)
        return res;
    else 
        return res % 10;
}

vector<string> a[5];
string user[] = {"Su", "Lu", "Bu", "Ti", "Teo"};

int main() {
    for (int i = 0; i < 5; i++) {
        string x, y, z;
        cin >> x >> y >> z;
        a[i].push_back(x);
        a[i].push_back(y);
        a[i].push_back(z);
    }

    int maxDiem = 0;
    for (int i = 0; i < 5; i++) 
        maxDiem = max(maxDiem, tinhDiem(a[i]));
    
    for (int i = 0; i < 5; i++) 
        if (maxDiem == tinhDiem(a[i]))
            cout << user[i] << ' ';
    
    return 0;
}