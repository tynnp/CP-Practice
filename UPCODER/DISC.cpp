#include <iostream>
#include <cstring>
#include <stack>
using namespace std;

int n, m, disc;
const int MAXN = 1e5 + 5;
bool c1[MAXN], c2[MAXN];
stack<int> st;

int main() {
    cin >> n >> m;
    fill(c1, c1 + MAXN, true);
    fill(c2, c2 + MAXN, true);

    while (m--) {
        cin >> disc;
        st.push(disc);
    }

    while (!st.empty()) {
        int disc = st.top();
        c1[disc] = false;

        if (c2[disc]) cout << disc << " ";
        c2[disc] = false;

        st.pop();
    }

    for (int i = 1; i <= n; i++)
        if (c1[i]) cout << i << " ";

    return 0;
}