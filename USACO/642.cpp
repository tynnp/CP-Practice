#include <bits/stdc++.h>
using namespace std;

const int MAXN = 50005;
int n, ans = INT_MAX;
int x[MAXN], y[MAXN];

int area(vector<int> &point) {
    int xmin, xmax, ymin, ymax;
    xmin = ymin = INT_MAX;
    xmax = ymax = INT_MIN;
    
    for (int &idx : point) {
        xmin = min(xmin, x[idx]);
        xmax = max(xmax, x[idx]);
        ymin = min(ymin, y[idx]);
        ymax = max(ymax, y[idx]);
    }
    
    return (xmax - xmin) * (ymax - ymin);
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    freopen("reduce.in", "r", stdin);
    freopen("reduce.out", "w", stdout);
    cin >> n;
    
    for (int i = 0; i < n; i++)
        cin >> x[i] >> y[i];
    
    vector<int> xminIdx, xmaxIdx, yminIdx, ymaxIdx;
    
    for (int i = 0; i < n; i++) {
        if (xminIdx.size() < 4 || x[i] < x[xminIdx.back()]) {
            xminIdx.push_back(i);
            
            sort(xminIdx.begin(), xminIdx.end(), [&](int p, int q) {
                return x[p] < x[q];
            });
            
            if (xminIdx.size() > 4) xminIdx.pop_back();
        }

        if (xmaxIdx.size() < 4 || x[i] > x[xmaxIdx.back()]) {
            xmaxIdx.push_back(i);
            
            sort(xmaxIdx.begin(), xmaxIdx.end(), [&](int p, int q) {
                return x[p] > x[q];
            });
            
            if (xmaxIdx.size() > 4) xmaxIdx.pop_back();
        }

        if (yminIdx.size() < 4 || y[i] < y[yminIdx.back()]) {
            yminIdx.push_back(i);
            
            sort(yminIdx.begin(), yminIdx.end(), [&](int p, int q) {
                return y[p] < y[q];
            });
            
            if (yminIdx.size() > 4) yminIdx.pop_back();
        }

        if (ymaxIdx.size() < 4 || y[i] > y[ymaxIdx.back()]) {
            ymaxIdx.push_back(i);
            
            sort(ymaxIdx.begin(), ymaxIdx.end(), [&](int p, int q) {
                return y[p] > y[q];
            });
            
            if (ymaxIdx.size() > 4) ymaxIdx.pop_back();
        }
    }
    
    set<int> s;
    for (int idx : xminIdx) s.insert(idx);
    for (int idx : xmaxIdx) s.insert(idx);
    for (int idx : yminIdx) s.insert(idx);
    for (int idx : ymaxIdx) s.insert(idx);
    
    vector<int> pointIdx(s.begin(), s.end());
    int m = pointIdx.size();
    
    for (int i = 0; i < m; i++) {
        for (int j = i + 1; j < m; j++) {
            for (int k = j + 1; k < m; k++) {
                vector<int> point;
                
                for (int idx = 0; idx < n; idx++)
                    if (idx != pointIdx[i] && idx != pointIdx[j] && idx != pointIdx[k])
                        point.push_back(idx);
                
                ans = min(ans, area(point));
            }
        }
    }
    
    cout << ans;
    return 0;
}