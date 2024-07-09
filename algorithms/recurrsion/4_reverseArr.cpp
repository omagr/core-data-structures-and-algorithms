#include <bits/stdc++.h>
using namespace std;

/**
    Using an extra array 
    Time Complexity
    O(n), Where n is the size of the array, We are iterating through the array once.  

    Space Complexity
    O(n) where n is the size of the array, Since we are creating a new array of size n. 
*/

/**
    Initialize two pointers, start pointing to the first element of the array, and end pointing to the last element of the array.

    Time Complexity
    O(n), Where n is the size of the array, We will do n/2 swap operations in total to reverse the array. 
    
    Space Complexity
    O(1), Since we are not using any extra space, space complexity would be O(1).
*/
vector<int> reverseArray(int n, vector<int> &nums)
{
    // Create a new vector to store the reversed elements.
    vector<int> reversedArray(n);

    // Traverse the original array in reverse order and store the elements in the new array.
    for (int i = n - 1; i >= 0; i--)
    {
        reversedArray[n - i - 1] = nums[i];
    }

    // Returning the reversed array.
    return reversedArray;
}

/**
    Implement a recursive function to reverse the array. Base case: If the start index is greater than or equal to the end index, return. Recursively call the reverse function with start+1 and end-1. Initialize two pointers, start pointing to the first element of the array, and end pointing to the last element of the array.

    Time Complexity
    O(n) where n is the size of the array, We will do n/2 swap operations in total to reverse the array.

    Space Complexity
    O(1), Since we are not using any extra space, space complexity would be O(1).
*/ 
vector<int> reverseArray(int n, vector<int> &nums)
{
    // Initialize two pointers, left and right,
    // pointing to the first and last indices of the array, respectively.
    int left = 0, right = n - 1;

    // Iterate until left crosses right.
    while (left < right)
    {
        // Swap the elements at positions left and right.
        swap(nums[left], nums[right]);

        // Move left one step forward.
        left++;

        // Move right one step backward.
        right--;
    }

    // Returning the reversed array.
    return nums;
}
/**
    Implement a recursive function to reverse the array. Base case: If the start index is greater than or equal to the end index, return. Recursively call the reverse function with start+1 and end-1. Initialize two pointers, start pointing to the first element of the array, and end pointing to the last element of the array.

    Time Complexity
    O(n) where n is the size of the array, We will do n/2 swap operations in total to reverse the array.

    Space Complexity
    O(1), Since we are not using any extra space, space complexity would be O(1).
*/ 
void reverseArray(int start, int end, vector<int> &nums)
{
    // Base case: If 'end' is less than 'start', the array is already reversed.
    if (start > end)
        return;

    // Swapping the elements at 'start' and 'end' indices.
    swap(nums[start], nums[end]);

    // Recursively call the function to reverse the remaining elements.
    return reverseArray(start + 1, end - 1, nums);
}
/**
    Same but with one ponter

    Time Complexity
    O(n) where n is the size of the array, We will do n/2 swap operations in total to reverse the array.

    Space Complexity
    O(1), Since we are not using any extra space, space complexity would be O(1).
*/ 
void reverseArray(int i, int n, vector<int> &nums)
{
    // Base case: If 'end' is less than 'start', the array is already reversed.
    if (i >= n/2) return;

    // Swapping the elements at 'start' and 'end' indices.
    swap(nums[i], nums[n-i-1]);

    // Recursively call the function to reverse the remaining elements.
    return reverseArray(i + 1, n, nums);
}

//@ Runner
vector<int> reverseArray(int n, vector<int> &nums)
{
    // Calling the recursive function to reverse the array.
    reverseArray(0, n - 1, nums);

    // Returning the reversed array.
    return nums;
}
 