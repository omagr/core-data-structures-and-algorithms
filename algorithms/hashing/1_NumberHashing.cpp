#include <iostream>
using namespace std;

/**
 *? What: In order to optimize this approach, we need to use hashing. If we say the definition of hashing in a naive way, it is nothing but the combination of the steps, pre-storing, and fetching.
 ** How:
 ** Step 1 – Pre-storing
 ** Step 2 – Fetching
 **
*/

int main() {
    int max {13}, n {0};
    int arr[] {1,2,4,1,2,3,4,1,5,6,1,7,9,2};
    int size = sizeof(arr) / sizeof(arr[0]);

    //* Pre-Compute
    int Hash[max] = {0};
    for (size_t i = 0; i < size; i++) Hash[arr[i]] += 1;
    // Suppose
    // i -> 1
    // arr[1] -> 2
    // Hash[2] -> 1
    // i -> 6
    // arr[6] -> 2
    // Hash[2] -> 2
    
    cout << Hash[2] << endl;
    cout << Hash[1] << endl;
    cout << Hash[2] << endl;
    cout << Hash[9] << endl;
    cout << Hash[12] << endl;
    cout << Hash[3] << endl;
    cout << Hash[11] << endl;
    cout << Hash[8] << endl;
    cout << Hash[7] << endl;

    // time omplexity -> O(n + m)
    // !Now, if the length of the query becomes large like 10^5 and the array size also becomes large like 10^5, the time complexity will be O(10^5 + 10^5).
    return 0;
}

// ! int based arr inside main formost limit -> 10^6
// ! int based arr inside global formost limit -> 10^7 