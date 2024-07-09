#include <iostream>
using namespace std;

// # Problem
// arr -> [1,2,1,3,2] -> 5
// 1 -> 2
// 2 -> 2
// 3 -> 1

// * How?
//@ Brute Force
// time complexcity O(n)
int countTheNumBF(int m, int n, int arr[]) {
    int count = 0;
    for (int i = 0; i < n; ++i) if (arr[i] == m) count++;
    return count;
}

int main() {
    int arr[]{0, 1, 2, 2, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    // time complexcity O(n*m) m -> no of itr
    cout << countTheNumBF(2, size, arr) << endl;
    cout << countTheNumBF(1, size, arr) << endl;
    cout << countTheNumBF(23, size, arr) << endl;
    cout << countTheNumBF(4, size, arr) << endl;
    cout << countTheNumBF(45, size, arr) << endl;
    cout << countTheNumBF(34, size, arr) << endl;
    cout << countTheNumBF(343, size, arr) << endl;
    cout << countTheNumBF(42, size, arr) << endl;
    cout << countTheNumBF(43, size, arr) << endl;
    return 0;
}


//! 10^8 takes 1s
// so 
// 1 -> 1/10^8
// 10^10 -> 1*10^2 -> 100s (1min+)
// !Now, if the length of the query becomes large like 105 and the array size also becomes large like 105, the time complexity will be O(1010). 