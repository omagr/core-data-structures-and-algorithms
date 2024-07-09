#include <iostream>
using namespace std;

void print_arr(int arr[], int size) {
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;
}

void bubble_sort(int arr[], int size) {
    for (int i = size-1; i >= 0; i--) {
        int didSwap = 0;
        for (int j = 0; j < i-1; j++) {
            // swaping
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                didSwap = 1;
            }
        }
        if (didSwap == 0) break;
    }
    // explantion by each step
    /**
     * i = 4
     * 13, 9, 20, 3 -> 3
     * 9. 13, 3, 20 -> 20
     * i = 3
     * 9, 3, 13, 20 -> 13
     * i = 2
     * 3, 9, 13, 20 -> 3
    */
}

int main() {
    int arr[] {13, 9, 20, 24, 46, 3, 6, 76};
    int size = sizeof(arr) / sizeof(arr[0]);
    

    print_arr(arr, size);
    bubble_sort(arr, size);
    print_arr(arr, size);

    return 0;
}