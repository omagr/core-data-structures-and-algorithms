#include <bits/stdc++.h>
using namespace std;


// --------------------

// acc to striver
// 1 - N 
void logic(vector<string>&arr,int n, int i) {
	if (i > n) return;
	arr.push_back("Coding Ninjas");
	logic(arr, n, i+1);
}

// optimized
// 1 - N 
void optimizedlogic(vector<string>&arr,int n, int i) {
	arr.push_back("Coding Ninjas");
	if (i == n) return;
	return optimizedlogic(arr, n, i+1);
}

vector<string> printNTimes(int n) {
	vector<string> arr;
	logic(arr, n, 1);
	return arr;
}

int main() {
    vector<int> arr;
    logic(arr, 9);
    return 0;
}