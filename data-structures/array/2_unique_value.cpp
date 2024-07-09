#include <bits/stdc++.h>
using namespace std; 
/**
 * Problem Statement: Given an integer array sorted in non-decreasing order, remove the duplicates in place such that each unique element appears only once. The relative order of the elements should be kept the same.
*/

//* brute force 
int brute (vector<int> &arr, int n) {
    set<int> st; int index {0};
    for (int i = 0; i < n; i++) {
        st.insert(arr[i]);
    }
    for (auto i : st) {
        arr[index] = i;
        index++
    } 
    return sizeof(arr)/sizeof(arr[0]);
}

//* optimal force 
int optimal (vector<int> &arr, int n) {
    int i {0};
    for (int j = 1; j < n; j++) {
        if (arr[i] != arr[j]) {
            arr[i+1] = arr[j];
            i++
        }
    }
    return ++i;
}

int main() {
    int n = 10; vector<int> arr = {1, 1, 3, 3, 4, 4, 5, 7, 9, 9};

    // tc - nLogn + n
    // sc - n
    cout << "\nBrute Force: " << endl;
    cout << brute(arr, n) << endl; 
    // tc - n
    // sc - 1
    cout << "\optimal Force: " << endl;
    cout << optimal(arr, n) << endl; 

    return 0 ;
}