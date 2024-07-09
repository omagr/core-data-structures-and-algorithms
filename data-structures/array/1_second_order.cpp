#include <bits/stdc++.h>
using namespace std; 

void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp; // temporary array
    int left = low;      // starting index of left half of arr
    int right = mid + 1;   // starting index of right half of arr
    //storing elements in the temporary array in a sorted manner//
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }
    // if elements on the left half are still left //
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }
    // if elements on the right half are still left //
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }
    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void mergeSort(vector<int> &arr, int low, int high) {
    if (low >= high) return;
    int mid = (low + high) / 2 ;
    mergeSort(arr, low, mid);  // left half
    mergeSort(arr, mid + 1, high); // right half
    merge(arr, low, mid, high);  // merging sorted halves
}

//# Brute Force
int SecLargestNoBruteForce (vector<int> &arr, int n) {
    //* Sort the Array first
    mergeSort(arr, 0, n - 1); //# NlogN
    int sec_lar_no;
    for(int i = n - 2; i >= 0; i--) { // O(n)
        if (arr[i] != arr[n-1]) {
            sec_lar_no = arr[i];
            break;
        }
    }
    return sec_lar_no;
}

// # Better Solution
int SecLargestNoBetter (vector<int> &arr, int n) {
    int largest_no = arr[0];
    int sec_lar_no = -1;
    for (int i = 0; i < n; i++) {
        if (largest_no < arr[i]) largest_no = arr[i];
    }
    for (int i = 0; i < n; i++) {
        if (sec_lar_no < arr[i] && arr[i] != largest_no) sec_lar_no = arr[i];
    }
    return sec_lar_no;
}


// # Optimal Solution
int SecLargestNoOptimal (vector<int> &arr, int n) {
    int largest_no = arr[0];
    int sec_lar_no = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest_no) {
            sec_lar_no = largest_no;
            largest_no = arr[i];
        } else if (arr[i] < largest_no && arr[i] > sec_lar_no) {
            sec_lar_no=arr[i];
        }
    }
    return sec_lar_no;
}

int main() {
    int n = 7;
    vector<int> arr = {9, 4, 7, 9, 6, 3, 1, 5};
    cout << "\nBrute Force: " << endl;
    cout << SecLargestNoBruteForce(arr, n) << endl;
    cout << "\nBetter Force: " << endl;
    cout << SecLargestNoBetter(arr, n) << endl;
    cout << "\nOptimal Force: " << endl;
    cout << SecLargestNoOptimal(arr, n) << endl;
    return 0 ;
}