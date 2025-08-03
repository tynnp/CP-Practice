#include <iostream>
using namespace std;

struct Rec {
    int x1, y1, x2, y2;
    
    int dt() {
        return (x2 - x1) * (y2 - y1);
    }
};

Rec cut(Rec a, Rec b) {
    if (b.x1 <= a.x1 && b.y1 <= a.y1 && b.x2 >= a.x2 && b.y2 >= a.y2)
        return {0, 0, 0, 0};
  
    if (b.x1 <= a.x1 && b.y1 >= a.y1 && b.x2 >= a.x2 && b.y2 >= a.y2 && b.y1 <= a.y2) 
        a.y2 = b.y1;
    
    if (b.x1 <= a.x1 && b.y1 <= a.y1 && b.x2 <= a.x2 && b.y2 >= a.y2 && b.x2 >= a.x1)
        a.x1 = b.x2;
        
    if (b.x1 >= a.x1 && b.y1 <= a.y1 && b.x2 >= a.x2 && b.y2 >= a.y2 && b.x1 <= a.x2)
        a.x2 = b.x1;
        
    if (b.x1 <= a.x1 && b.y1 <= a.y1 && b.x2 >= a.x2 && b.y2 <= a.y2 && b.y2 >= a.y1)
        a.y1 = b.y2;
        
    return a;
}

istream& operator >> (istream &in, Rec &r) {
    in >> r.x1 >> r.y1 >> r.x2 >> r.y2;
    return in;
}

ostream& operator << (ostream &out, Rec r) {
    out << "(" << r.x1 << ", " << r.y1 << ", " << r.x2 << ", " << r.y2 << ")" << endl;
    return out;
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    Rec a, b, c;
    cin >> a >> b >> c;
    
    Rec res;
    res = cut(a, b);
    // cout << res;
    
    res = cut(res, c);
    // cout << res;
    
    if (!res.dt()) 
        cout << "NO";
    else 
        cout << "YES";
        
    return 0;
}