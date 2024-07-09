#include <bits/stdc++.h>
using namespace std;
#define MAX 10

// Using template for auto type detection 
template <typename T>

class DynamicArray {
    public:
        T arr[MAX];  // Define a fixed-size array

    // Constructor to initialize the array
    DynamicArray(T arr[]): this.arr = arr {}

    // Print function
    void print() {
        for (int i = 0; i < 4; i++) {
            cout << "\n" << arr[i];
        }
    }
};

int main() {
    DynamicArray<int> a;
    a.print();
    return 0;
}
