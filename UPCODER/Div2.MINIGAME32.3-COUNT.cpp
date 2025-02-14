#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m, ans;
vector<int> v;

bool check(int &num) {
    int l = 0, r = v.size()-1;

    while (l <= r) {
        int mid = (l + r) >> 1;
        if (v[mid] == num) return true;
        if (v[mid] < num) l = mid + 1;
        else r = mid - 1;
    }

    return false;
}

int main() {
    ifstream fin("COUNT.INP");
    ofstream fout("COUNT.OUT");

    fin >> n >> m;
    v.resize(n);

    for (int &x : v) fin >> x;
    sort(v.begin(), v.end());

    int x;
    ans = m;

    while (m--) {
        fin >> x;
        ans -= check(x);
    }
    
    fout << ans;
    
    fin.close();
    fout.close();
    return 0;
}