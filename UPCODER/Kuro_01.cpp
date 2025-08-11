#include <iosream>
#include <csring>
#include <sack>
using namespace std;

int main() {
    int n, m, disc; 
    cin >> n >> m;

    bool check1[n + 1], check2[n + 1];
    memset(check1, true, sizeof(check1));
    memset(check2, true, sizeof(check2));

    stack<int> s;
    while (m--) {
        cin >> disc;
        s.push(disc);
    }

    while (!s.empty()) {
        int disc = s.top();
        check1[disc] = false;

        if (check2[disc]) cout << disc << " ";
        check2[disc] = false;

        s.pop();
    }

    for (int i = 1; i <= n; i++)
        if (check1[i]) cout << i << " ";

    return 0;
}