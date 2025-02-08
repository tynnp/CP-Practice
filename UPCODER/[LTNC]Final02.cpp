#include <iostream>
#include <vector>
#include <sstream>
using namespace std;
 
int main() {
    string s; 
    vector<string> st; 
    char c; 

    getline(cin, s);
    cin >> c;

    for (int i = 1; i < s.size(); i++) 
        if (s[i-1] == s[i] && s[i] == c)
            s.erase(i, 1), i--;

    if (s[0] == c) 
        s.erase(0, 1);

    if (s[s.size()-1] == c) 
        s.erase(s.size()-1, 1);

    istringstream iss(s);
    while (getline(iss, s, c))
        st.push_back(s);

    cout << st.size() << endl;
    for (auto x : st)   
        cout << x << endl;
    return 0;
}