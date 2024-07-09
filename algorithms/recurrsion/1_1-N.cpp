//# Initial (acc to striver)
void logic (vector<int> &arr, int n, int x) { // (5, 1)
    if(x > n)  return;  // (5, 6)
    arr.push_back(x);   // 1 2 3 4 5 
    logic(arr, n, x+1); // (5, 2) (5, 3) (5, 4) (5, 5) (5, 6) 
}

//# Backtracking
// TC -> O(n), We will call the recursive function ‘n’ times.
// SC -> O(n), ‘n’ recursive functions will be called.
void logicBacktracking (vector<int> &arr, int x) {
    if (x < 1) return;  // 0
    logic(arr, x-1);    // 4 3 2 1
    arr.push_back(x);   // 1 2 3 4 5 
}

//# Optimized
// TC -> O(n), We will call the recursive function ‘n’ times.
// SC -> O(1), Even though ‘n’ recursive functions will be called, only 1 will be present in the call stack at a time.
void optimizerdLogic(int x, vector<int>& ans, int n) {
    // Insert element in the array
    ans.push_back(x);
    if(x == n)  return;
    // Call recursive function
    return recursiveFunction(x + 1, ans, n);
}
