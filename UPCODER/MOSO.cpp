#include <bits/stdc++.h>
using namespace std;

#define int int64_t

string max(string a, string b) {
  while(a[0] == '0') a.erase(0, 1);
  while(b[0] == '0') b.erase(0, 1);
  
  if(a.size() > b.size()) return a;
  if(a.size() < b.size()) return b;
  
  int i = 0;
  while(a[i] == b[i]) i++;
  
  if(a[i] > b[i]) return a;
  return b;
}

int32_t main() {
    string s, a, m;
    cin >> s;
    
    int i = 0;
    
    while (i < s.size()) {
        if ('0' <= s[i]  && s[i] <= '9') {
            a += s[i];
            i++;
            continue;
        }
        
        if (a.size() != 0) {
            if (m.size() == 0)
                m = a;
            else 
                m = max(m, a);
            a.clear();
        }

        i++;
    }

    if (a.size() != 0) {
        if (m.size() == 0)
            m = a;
        else 
            m = max(m, a);
    }
    
    while(m[0] == '0')  m.erase(0, 1);
    cout << m;
    
    return 0;
}