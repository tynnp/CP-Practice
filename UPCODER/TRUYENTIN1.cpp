#include <bits/stdc++.h>
using namespace std;

bool ssChan(int a, int b) {
    return abs(a) < abs(b);
}

bool ssLe(int a, int b) {
    return abs(a) > abs(b);
}

main() {
    int x, n;
    string s;

    cin >> n;
    cin.ignore();

    while (n--) {
        getline(cin, s);
        stringstream ss(s);
        vector<int> chan, le;

        while (ss >> x) {
            if (x % 2 == 0)
                chan.push_back(x);
            else 
                le.push_back(x);
        }

        sort(chan.begin(), chan.end(), ssChan);
        sort(le.begin(), le.end(), ssLe);

        for (int i = 0; i < chan.size(); i++)
            cout << chan[i] << ' ';
        
        for (int i = 0; i < le.size(); i++)
            cout << le[i] << ' ';
        
        cout << endl;
    }

    return 0;
}