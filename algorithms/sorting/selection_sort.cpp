#include <iostream>
using namespace std;

void print_arr(int arr[], int size) {
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;
}

void selection_sort(int arr[], int size) {
    for (int i = 0; i <= size - 2; i++) {
        int min = i;
        for (int j = i; j <= size - 1 ; j++) {
            // swaping
            if (arr[j] < arr[min]) {
                int temp = arr[j];
                arr[j] = arr[min];
                arr[min] = temp;
            }
        }
    }
    // explantion by each step
    /**
     * i = 0
     * 13, 9, 20, 3 -> 13 (min)
     * [13, 9, 20, 3] -> 9
     * [9, 13, 20, 3] -> 9
     * i = 1
     * 9, 13, 20, 3 -> 13 (min)
     * 9, [13, 20, 3] -> 3
     * 9, [3, 20, 13] -> 3
     * i = 2
     * 9, 3, 20, 13 -> 20 (min)
     * 9, 3, [20, 13] -> 13
     * 9, 3, [13, 20] -> 13
    */
}

int main() {
    int arr[] {13, 9, 20, 24, 46, 3, 6, 76};
    int size = sizeof(arr) / sizeof(arr[0]);
    

    print_arr(arr, size);
    selection_sort(arr, size);
    print_arr(arr, size);

    return 0;
}