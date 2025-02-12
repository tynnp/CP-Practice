#include <iostream>
#include <string>
#include <vector>
using namespace std;

string s;
int pos[10];
bool visited[10];
vector<char> st;  

int main(){
    cin >> s;
    int n = s.size();

    for (int i = 0; i < n; i++) {
        int d = s[i] - '0';
        pos[d] = i;
    }
    
    for (int i = 0; i < n; i++){
        char c = s[i];
        int d = c - '0';
        if (visited[d]) continue;
        
        while (!st.empty() && st.back() < c && pos[st.back()-'0'] > i) {
            visited[st.back()-'0'] = false; 
            st.pop_back();
        }
        
        st.push_back(c);
        visited[d] = true;
    }
    
    string ans(st.begin(), st.end());
    cout << ans;
    
    return 0;
}