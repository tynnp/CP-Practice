#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    stack<char> st;

    for (int i = 0; i < s.size(); i++) {
        char c = s[i];

        if (c == '(') {
            st.push(c);
            continue;
        }   

        if (st.empty()) {
            cout << "NO" << endl;
            return 0;
        }

        st.pop();
    }

    if (st.empty()) 
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;

    return 0;
}
