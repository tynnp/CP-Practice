#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int sumA = 0, sumB = 0;
    for (int i = 1; i < a; i++)
        if (a % i == 0)
            sumA += i;

    for (int i = 1; i < b; i++)
        if (b % i == 0)
            sumB += i;
    
    if (a == sumB && b == sumA) 
        cout << "la cap ban be";
    else 
        cout << "khong la cap ban be";
    
    return 0;
}