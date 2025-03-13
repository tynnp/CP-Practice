#include <iostream>
using namespace std;

int n, k;
string s, tin[100];

int main() {
    cin >> s >> k;
    
    int prev = 0;
    int cur = s.find('#');
    
    while (cur != string::npos) {
        tin[n++] = s.substr(prev, cur - prev);
        prev = cur + 1;
        cur = s.find('#', cur + 1);
    }
    
    tin[n++] = s.substr(prev, cur - prev);
    // for (int i = 0; i < n; i++)
    //     cout << tin[i] << ' ';
    
    for (int i = 0; i < n; i++) {
        string x = tin[i];
        int m = x.size();
        
        for (int i = 0; i < m; i++)
            if (isalpha(x[i])) {
                if (islower(x[i]))
                    x[i] = 'a' + ((x[i] - 'a' - k + 26) % 26);
                else if (isupper(x[i]))
                    x[i] = 'A' + ((x[i] - 'A' - k + 26) % 26);
            } 
            
        tin[i] = x;
    }
    
    // for (int i = 0; i < n; i++)
    //     cout << tin[i] << ' ';
    
    int len = 0;
    string res;
    for (int i = 0; i < n; i++) {
        if (len < tin[i].size()) {
            res = tin[i];
            len = tin[i].size();
        }
    }
    
    cout << n << endl;
    for (int i = 0; i < res.size(); i++)
        if (isalpha(res[i]))
            cout << char(toupper(res[i]));
    
    return 0;
}