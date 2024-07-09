#include <bits/stdc++.h>
using namespace std; 

int conqueror(vector<int> &arr, int low, int high) {
    int pivot = arr[low];
    int left = low; int right = high;

    while (left < right)
    {
        while (arr[left] <= pivot && left <= high - 1) low++;
        while (arr[right] > pivot && right >= low + 1) right--;
        if (left < right) swap(arr[left], arr[right]);
    }
    swap(arr[low], arr[right]);
    return right;
}

void quick_sort(vector<int> &arr, int low, int high) {
    if (low >= high) return; // base condition 
    int partition_index = conqueror(arr, low, high);
    quick_sort (arr, low, partition_index - 1); // for left smaller half
    quick_sort (arr, partition_index + 1, high); // for right greater half
}

int main() {
    vector<int> arr = {9, 4, 7, 6, 3, 1, 5}  ;
    int n = 7;
    cout << "Before Sorting Array: " << endl;
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    quick_sort(arr, 0, n - 1);

    cout << "After Sorting Array: " << endl;
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    return 0 ;
}