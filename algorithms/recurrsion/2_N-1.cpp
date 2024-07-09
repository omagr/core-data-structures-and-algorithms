//# Initial (acc to striver)
void logic (vector<int> &arr, int n) { // (5, 1)
    if (n < 1) return;  // 0
    arr.push_back(n);   // 5 4 3 2 1
    logic(arr, n-1);    // 4 3 2 1 
}

//# Backtracking
// TC -> O(n), We will call the recursive function ‘n’ times.
// SC -> O(n), ‘n’ recursive functions will be called.
void logicBacktracking (vector<int> &arr, int x) {
    if (x < 1) return;  // 0
    logic(arr, x-1);    // 4 3 2 1
    arr.push_back(x);   // 1 2 3 4 5 
}

vector<int> printNos(int x) {
    vector<int> arr;
    logic(arr, x);
    return arr;
}
