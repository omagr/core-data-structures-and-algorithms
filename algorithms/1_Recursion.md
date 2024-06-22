### *What is Recursion ?*

The process in which a function calls itself directly or indirectly is called recursion, the function that is calling itself is called the recursive function.

Recursion involves a few important steps where the recursive methods play an important role. This is accomplished by breaking the whole problem into smaller problems. They then call individual copies of those smaller problems to solve them, simplifying the overall problem. The recursive call is the process of calling each copy of that smaller problem, one after the other, to solve it.(there may be multiple recursive calls).

But, there must be a terminating condition in recursion, otherwise this calls may go endlessly leading to an infinite loop of recursive calls and call stack overflow.

![Example Image](/resources/images/r1.svg)

### *Why is Important ?*

* Sometimes we are unable to solve a problem iteratively due to it's high complexity. But, if we break the problem into smaller versions of the problem, we may be able to find solutions for those smaller versions of the problem. And then, we may combine those solutions to arrive at our answer for the larger problem.
* Recursive functions break any problem up into smaller sub-problems, the answer to which is either already known or can be found by using another algorithm. Hence, finally combining the results to build up the answer for the entire problem.

**For example**

![Example Image](/resources/images/r2.jpg)

```javascript
function factorial(n)
    return (n<=1)? 1 : (n*factorial(n-1));
```

imagine you are searching for a file on your laptop. You enter the root folder, within that you enter another folder, and so forth as you climb folders on folders until you locate your file. You can think of it as a tree with multiple branches.

So, these kinds of problems are best solved using recursion. For these types of problems, an iterative approach may not be preferable.

### *Format of recursive function*

1. **A base case,** in which the recursion can terminate and return the result immediately.
2. **A recursive case,** in which the function is supposed to call itself, to break the current problem down into smaller problems

Similarly, the input size gets smaller and smaller with each recursive call, and we get the solution to that smaller problem. Later, we combine those results to find the solution to the entire problem.

This is a pattern followed by every recursive function. We can take the very popular example of the factorial function for this

```javascript
function factorial(n) {
 if (n <= 1) return 1; // Base Case
 else return n * factorial(n-1); // Recursive Case
}

         if n<=1 => return 1
               /
factorial(n) =
              \\
               else => return n * factorial(n - 1)

```

1. If n <= 1, then everything is trivial. It is called the base case of recursion, because it immediately returns the result: factorial(1) = 1.
2. Otherwise, we can represent factorial(n) as n factorial(n - 1) This is called a recursive step we transform the task into a simpler action (multiplication by n) and a simpler call of the same task (factorial with lower n). Next steps simplify it further and further until n reaches 1

### *Recursive Tree*

![Example Image](/resources/images/r3.jpg)

***Base Condition,***
the base case is the terminating case in recursion. This is where the recursive calls finally comes to an end, or terminate preventing any endless (infinite) recursive calls.

Some note worthy points for the base condition,

1. While solving a recursive problem, we should always think does the recursive call make the problem smaller and approach the base case?
2. Every recursive function must have one or more base cases depending on which the final answer is evacuated.

### *what are the Advantages & Disadvantages,*

| Advantages                                                                                                  | Disadvantages                                                                                                                                                                                                     |
| ----------------------------------------------------------------------------------------------------------- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Usually code is simpler to write                                                                            | Recursive functions are inefficient in terms of space and time complexity                                                                                                                                         |
| Extremely useful when a task can be simplified into an easy action plus a simpler variant of the same task. | They may require a lot of memory space to hold intermediate results on the system's stacks.                                                                                                                       |
| To solve problems which are naturally recursive for example - the tower of Hanoi.                           | Recursion can sometimes be slower than iteration because in addition to the loop content, it has to deal with the recursive call stack frame. This will result in more code being run, which will make it slower. |
| Recursion reduce the length of code.                                                                        | The computer may run out of memory if the recursive calls are not properly checked (stack overflow), or the base case is not added.                                                                               |
| Useful in solving data structures - tree related problems.                                                  | Sometimes they are hard to analyze or it is difficult to understand the code.                                                                                                                                     |

***Applications,***

* **Tree and Graph Traversals**: Recursion is used to traverse and search trees and graphs, exploring nodes or vertices systematically.
* **Sorting Algorithms**: Recursive algorithms like quicksort and merge sort divide data into smaller subarrays, sort them, and merge them back together.
* **Divide-and-Conquer Algorithms**: Many algorithms, such as binary search, use recursion to break problems into smaller subproblems.
* **Fractal Generation**: Recursive algorithms create fractal shapes and patterns, like the Mandelbrot set, by repeatedly applying formulas.
* **Backtracking Algorithms**: These algorithms solve problems with sequential decisions, exploring all possible paths and backtracking when needed.
* **Memoization**: It involves caching results of function calls to avoid redundant computations, which recursive functions can handle effectively.

### *Example,*

**(1) The classic example of recursion is calculating the factorial of any number. The factorial of any number is computed as the number multiplied by all the numbers below it till 1. Example: factorial of 4 (4!) = 4 *3* 2 * 1 So, it is something like,**

```plaintext
factorial(n) = n * (n-1) * (n-2) * (n-3) * ... * 1
```

Or, **factorial of any number n may be called as the number multiplied by the factorial of the number immediately below it**

```plaintext
factorial(n) = n * factorial(n-1)
```

This forms our recursive case, since here, a function factorial will be calling itself passing a smaller version of problem as the parameter. So, you may assume this will be our code,

```plaintext
function factorial(n) {
    return n * factorial(n-1)
}
```

But this code will simply crash, do you know why? Yes, obviously, we have not provided the base case! How would it ever know when to terminate? It will go on endlessly exhausting the entire memory, resulting in the call stack overflow. Base case is unavoidable. But, what should be the base case? Well, we already know the factorial of 0 or 1 is 1 0! = 1! = 1 and there is no factorial for negative numbers! So, we can simply have a check if the number is less than or equal to 1 then return 1. Then, our code becomes

```plaintext
function factorial(n){
    if(n<=1)//Base case
        return 1;
    else
        return n * factorial(n-1);//Recursive case
}
```

Suppose we want to calculate factorial(4) . It will be computed through the following steps --

1. Firstly, it will call factorial(4) which checks the base condition if (n===0 or n===1), here n=4, which is neither 0 nor 1. So the condition fails and it goes to the else statement. There it will make a call to n *factorial(n-1) factorial(4) = 4* factorial(3) //recursive case factorial(3) = 3 *factorial(2) factorial(2) = 2* factorial(1) factorial(1) = 1 * factorial(0)
2. Finally when factorial(0) will be called, it will reach the base case and return 1. The function will return, and while returning, it will calculate the value of all the smaller problems it broke into when it was calculating factorial.

The order of recursive calls can be depicted by a recursion tree shown below for factorial(4).
A recursion tree is a diagram of the function calls connected by pointed(up or down) arrows to depict the order in which the calls were made.

**(2) Multiple Recusion calls: Let us take one more example, calculating the fibonacci number using recursion. The Fibonacci numbers are the numbers in the following integer sequence 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144,.. Here, each number is the sum of it's previous and the 2nd previous number. In mathematical terms, the sequence Fn of Fibonacci numbers is defined by the recursive relation.**

```plaintext
Fn = Fn-1 + Fn-2
```

Here, Fibonacci(0) = 0 Fibonacci(1) = 1 These can be considered as our base case, since based upon these two, any n^th^ Fibonacci number can be calculated. So, the code may be

```plaintext
function fibonacci(n){
if (n<=1)//Base case
    return n
else
    return fibonacci(n-1)+fibonacci(n-2)//Recursive function
}
```

The order of recursive calls can be depicted by a recursion tree shown below for Fibonacci(5).

```plaintext
                           fib(5)
                       /             \\
                     /                \\
               fib(4)                fib(3)
             /        \\              /       \\
         fib(3)      fib(2)         fib(2)   fib(1)
        /    \\       /    \\        /      \\
  fib(2)   fib(1)  fib(1) fib(0) fib(1) fib(0)
  /     \\
fib(1) fib(0)
```

> **Note;** Calculating Fibonacci numbers using recursion is not a good approach though, since it takes exponential time to compute (beyond the scope of this article). However, this example is taken just for the sake of explanation.

***Time complexity: exponential O(n^2)***
![Example Image](/resources/images/r3.svg)
