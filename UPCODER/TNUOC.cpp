#include <iostream>
using namespace std;
 
int main() {
    int so_dien, tien_dien = 0; 
    cin >> so_dien;

    if (so_dien <= 16) 
        tien_dien *= 7000;
    else if (so_dien <= 50) 
        tien_dien = (so_dien-16)*8500 + 16*7000;
    else 
        tien_dien = (so_dien-16-34)*100000 + 34*8500 + 16*7000;
    
    cout << tien_dien;
    return 0;
}