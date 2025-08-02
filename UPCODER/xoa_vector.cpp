#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; 
    vector<int> v;
    string daySo;

    cin >> n;
    cin.ignore();
    getline(cin, daySo);

    for (int i = 0; i < daySo.size(); i += 2)
        v.push_back(daySo[i] - '0');

    getline(cin, daySo);

    if (daySo.size() < 3) {
        if (daySo[0] == '-') v.clear();
        else {
            int a = daySo[0] - '0';
            v.erase(v.begin() + a);
        }

    } else {
        int a = daySo[0] - '0';
        int b = daySo[2] - '0';
        v.erase(v.begin() + a, v.begin() + b);
    }

    if (v.empty()) cout << "empty";
    else {
        for (int i = 0; i < v.size(); i++)
            cout << v[i] << " ";
    }

    return 0;
}