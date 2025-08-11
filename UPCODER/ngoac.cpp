// 1. Sử dụng con trỏ file
#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream in("ngoac.inp");
    ofstream out("ngoac.out");
    string s;
    bool check = false;
    
    while (getline(in, s)) {
        if (check == true) 
            out << "\n";

        stack<char> st;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') 
                st.push(s[i]);
           
            if (s[i] == ')') {
                if (!st.empty() && st.top() == '(') st.pop();
                else st.push(s[i]);
            }

            else if (s[i] == '}') {
                if (!st.empty() && st.top() == '{') st.pop();
                else st.push(s[i]);
            }

            else if (s[i] == ']') {
                if (!st.empty() && st.top() == '[') st.pop();
                else st.push(s[i]);
            }
        }

        if (st.empty()) 
            out << "\"YES\"";
        else 
            out << "\"NO\"";

        check = true;
    }
    
    in.close();
    out.close();
    return 0;
}