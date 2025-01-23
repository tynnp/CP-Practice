#include <iostream>
using namespace std;

struct Array {
    int size;
    int items[100];
    
    Array operator = (Array other) {
        size = other.size;
        for (int i = 0; i < other.size; i++)
            items[i] = other.items[i];
        return other;
    }
    
    int &operator [] (int index) {
        return items[index];
    }
};

istream& operator >> (istream &in, Array &arr) {
    in >> arr.size;
    for (int i = 0; i < arr.size; i++)
        in >> arr[i];
    return in;
}

ostream& operator << (ostream &out, Array arr) {
    for (int i = 0; i < arr.size; i++)
        out << arr[i] << ' ';
    return out;
}

Array operator + (Array a, Array b) {
    Array res;
    res.size = max(a.size, b.size);
    
    int i = 0, j = 0;
    
    while (i < a.size && j < b.size) {
        res[i] = a[i] + b[j];
        i++, j++;
    }
    
    while (i < a.size) {
        res[i] = a[i];
        i++;
    }
    
    while (j < b.size) {
        res[j] = b[j];
        j++;
    }
    
    return res;
}

bool operator == (Array a, Array b) {
    if (a.size != b.size)
        return false;
        
    for (int i = 0; i < a.size; i++) 
        if (a[i] != b[i])
            return false;
            
    return true;
}

bool operator != (Array a, Array b) {
    return !(a == b);
}

int main() {
    Array a, b;
    cin >> a >> b;
    
    if (a != b)
        cout << "no";
    else 
        cout << "yes";
    
    return 0;
}
