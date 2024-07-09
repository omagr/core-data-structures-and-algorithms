#include <iostream>
using namespace std;

void print_arr(int arr[], int size) {
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;
}

void insertion_sort(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int j = i;
        while (j > 0 && (arr[j] < arr[j-1]))
        {
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
    // explantion by each step
    /**
     * 4,3,2,1
     * * i = 0
     * 4, j = 0
     * * i = 1
     * 3, j = 1 -> 3 4 2 1
     * * i = 2
     * 2, j = 2 -> 3 2 4 1 -> 2 3 4 1
     * * i = 3
     * 1, j = 3 -> 2 3 1 4 -> 2 1 3 4 -> 1 2 3 4
    */
}

int main() {
    int arr[] {13, 9, 20, 24, 46, 3, 6, 76};
    int size = sizeof(arr) / sizeof(arr[0]);

    print_arr(arr, size);
    insertion_sort(arr, size);
    print_arr(arr, size);

    return 0;
}