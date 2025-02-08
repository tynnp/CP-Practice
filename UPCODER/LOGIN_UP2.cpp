#include <iostream>
#include <vector>
using namespace std;

bool check(string str) {
    char tmp[] = {'u', 'p', 'c', 'o', 'd', 'e', 'r'};
    int idx = 0;

    for (char c : str) 
        if (c == tmp[idx]) 
            idx++;

    return idx == 7;
}

int main() {
    vector<int> vt;
    int t, idx = 1;
    string str;
    cin >> t;

    while (t--) {
        cin >> str;
        if (check(str))     
            vt.push_back(idx);
        idx++;
    }

    cout << vt.size() << endl;
    for (int i = 0; i < vt.size(); i++)
        cout << vt[i] << " ";

    return 0;
}