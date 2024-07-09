
<div style="border-radius:4px; padding: 10px; background-color: #b5aeae; color: #000000;">
   This is a Space complexity generally represents the summation of auxiliary space and the input space. Auxiliary space refers to the space that we use additionally to solve a problem. And input space refers to the space that we use to store the inputs.
</div>

<br/>

The term space complexity generally refers to the memory space that a code uses while being executed. Again space complexity is also dependent on the machine and so we are going to represent the space complexity using the Big O notation instead of using the standard units of memory like MB, GB, etc.
![Example Image](/resources/images/s1.jpg)

The variables a and b are used to store the inputs but c refers to the space we are using to solve the problem and c is the auxiliary space. Here the space complexity will be O(3).

Similarly, if we use an array of size n, the space complexity will be O(N).

### *Question*

* ? If a question of adding two numbers like a and b is asked, one of the possible methods will be

b = a+b. In this case, the space complexity is definitely reduced as we are not using any extra variable but this is not a good practice to manipulate the given inputs or data. In an interview, we must be careful that we will not manipulate the given data even if the space complexity becomes 2N instead of N. If the interviewer specifically instructs us to manipulate, then only we should attempt this method.

it may use the same data for different purposes. That is why we should not attempt to manipulate the given data for reducing the space complexity. So, we will never manipulate the given data i.e. the inputs until the interviewer specifically says so.

In competitive programming or in the platforms like Leetcode and GeeksforGeeks, we generally run our codes on online servers. Most of these servers execute roughly 108 operations in approximately 1 second i.e. 1s. We must be careful that if the time limit is given as 2s the operations in our code must be roughly 2108, not 1016. Similarly, 5s refers to 5108. Simply, if we want our code to be run in 1s, the space complexity of our code must be around O(108) avoiding the constants and the lower values.
