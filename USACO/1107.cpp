#include <bits/stdc++.h>
using namespace std;

int n;
map<string, int> res;

map<string, int> zodiac {
    {"Rat", 11}, {"Ox", 0}, {"Tiger", 1}, {"Rabbit", 2}, {"Dragon", 3}, {"Snake", 4},
    {"Horse", 5}, {"Goat", 6}, {"Monkey", 7}, {"Rooster", 8}, {"Dog", 9}, {"Pig", 10}
};

void process() {
    string s, a[8];
    getline(cin, s);
    
    stringstream ss(s);
    for (int i = 0; i < 8; i++)
        ss >> a[i];
    
    res[a[0]] = res[a[7]];
    int k = a[3] == "previous" ? -1 : 1;
    
    do {
        res[a[0]] += k;
    } while ((12 + res[a[0]] % 12) % 12 != zodiac[a[4]]);
    
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    cin.ignore();
    
    for (int i = 0; i < n; i++)
        process();
    
    cout << abs(res["Elsie"]);
    return 0;
}