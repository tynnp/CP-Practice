#include <iostream>
using namespace std;

int main() {
    int x, y;
    int ngay[] = {0, 31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    cin >> x >> y;
    
    if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
        ngay[2] = 29;
    else 
        ngay[2] = 28;
        
    cout << ngay[x];
    return 0;
}
