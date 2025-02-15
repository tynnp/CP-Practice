#include <iostream>
using namespace std;

int main() {
    char a[26];
    char *p = a;
    
    for (int i = 0; i < 26; i++) 
        *(p + i) = 'A' + i;
    
    cout << "Alphabets: ";
    for (int i = 0; i < 26; i++) 
        cout << *(p + i) << " ";

    return 0;
}