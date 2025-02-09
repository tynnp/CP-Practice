#include <iostream>
using namespace std;

class Array {
private:
    int size;
    int data[100];

public:
    int& operator [] (int index) {
        return data[index];
    }

    friend istream &operator >> (istream &in, Array &arr) {
        arr.size = 0;
        while(in >> arr[arr.size])
            arr.size++;
        return in;
    }

    friend ostream &operator << (ostream &out, Array arr) {
        for (int i = 0; i < arr.size; i++)
            out << arr[i] << " ";
        return out;
    }

    int getSize() {
        return size;
    }

    void sapXepTang() {
        for (int i = 1; i < size; i++) {
            int j = i;
            while (j > 0 && data[j-1] > data[j])
                swap(data[j-1], data[j]), j--;
        }
        return;
    }

    void sapXepGiam() {
        for (int i = 1; i < size; i++) {
            int j = i;
            while (j > 0 && data[j-1] < data[j])
                swap(data[j-1], data[j]), j--;
        }
        return;
    }

    bool findOf(int x) {
        for (int i = 0; i < size; i++)
            if (data[i] == x) 
                return true;
        return false; 
    }
};

int main() {
    int x;
    Array a, tmp;
    cin >> x >> a;
    tmp = a;

    cout << a.getSize() << endl;
    cout << (a.findOf(x) ? "TRUE\n" : "FALSE\n");

    a.sapXepTang(); 
    cout << a << endl;

    tmp[0] = tmp[0] + 1;
    tmp.sapXepGiam(); 
    cout << tmp << endl;
    
    return 0;
}