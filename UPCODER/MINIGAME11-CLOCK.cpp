#include <bits/stdc++.h>
using namespace std;

int main() {
    string cur;
    int t;

    cin >> cur >> t;
    int hh = stoi(cur.substr(0, 2));
    int mm = stoi(cur.substr(3, 2));
    int ss = stoi(cur.substr(6, 2));

    int total = hh * 3600 + mm * 60 + ss + t;
    
    hh = (total / 3600) % 24;
    mm = (total / 60) % 60;
    ss = total % 60;

    cout << setw(2) << setfill('0') << hh << ":";
    cout << setw(2) << setfill('0') << mm << ":";
    cout << setw(2) << setfill('0') << ss; 

    return 0;
}