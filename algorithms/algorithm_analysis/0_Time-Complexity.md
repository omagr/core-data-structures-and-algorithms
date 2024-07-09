### *Overview*

* the rate remember the rate at which the time taken increases with respect to the input With respect to the input.
* The Time complexity of algorithms is most commonly expressed using the big O notation. It's an asymptotic notation to represent the time complexity. We will study about it in detail in the next tutorial.

### *What is it?*

The time complexity can be defined as the amount of time taken by an algorithm to execute each statement of an algorithm till its completion with respect to the length of its input.

* it judge different codes and also helps to decide which code is better.
* In an interview, an interviewer generally judges a code by its time complexity.
* Time complexity does not refer to the time taken by the machine to execute a particular code.
* The rate at which the time, required to run a code, changes with respect to the input size, is considered the time complexity.
* Basically, the time complexity of a particular code depends on the given input size, not on the machine used to run the code.

> time taken is different in both machines but the relationship is same b/w time and size is same. So its the function which tell us the relationship about how time will grow as the input grows.
>
![Example Image](/resources/images/626c965ccd42854f86fc02bd91783e2c04312c03073ddcb875ddd4e3d3a68e08a46d4379f65bb0a7b06b3ec8345f6651960b5a0c14c0f3c84dbac9c21080691bee947f17df157631a0bbdf.svg)

```mk
for example

* machine A runs → 1 operation / sec
* machine B runs → 100 operation / sec (1 per 1/100 sec)
* ratio → A:B → 1 / (1/100) → 100

So, for the size of 20k operations

* machine A will take simply 20k se
* machine B will take simply 200 sec
* ratio → A:B → 20000 / 200 → 100
```
### Big-O Notation
* n - size of input
* complexities ordered in small to large
  
1. constant time:         O(1)
2. logarithmic time:      O(log(n))
3. linear time:           O(n)
4. linearithmic time:     O(nlog(n))
5. quadric time:          O(n^2)
6. cubic time:            O(n^3)
7. exponential time:      O(b^n), b > 1
8. factorial time:        O(n!)
   
### *Concept / Principles*

general methodology for analyzing running time for algorithms.

* uses a high level description of algorithm instead of testing one of its implementations.
* takes into account of all possible inputs.
* allows one to evaluate the efficiency of any algo in a way that is independent of the hardware and software.
  
![Example Image](/resources/images/tmxl.jpg)
`O(1) < O(log n) < O(n) < O(n log n) < O(n^2) < O(2^n) [exponential complexity] < O(n!)`

<p align="left">
  <img src="/resources/images/tml1.jpg" alt="Image 1 Description" width="40%" style="display: inline-block;"/>
  <img src="/resources/images/tml2.jpg" alt="Image 2 Description" width="50%" style="display: inline-block;"/>
</p>

> *To represent the time complexity, we generally use the Big O notation. The Big O notation looks like the following:*

![Example Image](/resources/images/txl3.jpg)

## *Let’s understand this using the following example,*

<div style="display: flex; justify-content: space-between;">
  <blockquote>
for (int i = 1; i <= 5; i+1)
 console.log('time');
    </blockquote>
  <div style="width: 45%;">
    <blockquote>
The time complexity for this code will be nothing but the number of steps, this code will take to be executed. So, if we write this in terms of Big O notation, it will be like O(no. of steps).
    </blockquote>
  </div>
</div>

**Let’s observe the steps for this code:**

1. First, the assigning step(i = 1) will be done.
2. The second step will be the comparison i.e. i <= 5.
3. The third step will be the print statement (i.e. cout << “Raj”;).
4. The fourth step will be the increment(i.e. i++).
5. In the fifth step, the updated value of i will be again checked i.e. the comparison(i <= 5).
6. In the sixth step, the print statement will be executed and so on.

<div style="display: flex; justify-content: space-between;">
  <div style="width: 45%;">
    <p>This flow will continue until the value of i becomes greater than 5(i.e. 6). In a broader sense, we can observe that the ‘for loop’ will run 5 times and for each time three steps will be surely executed i.e. checking/comparison, printing, and increment. So, the total steps will be 5*3 = 15 + 1 ≈ 15. And the time complexity in terms of Big O notation will be O(15).
    <br/><br/>
    Now, if we write N instead of 5, the number of steps will be then N3 = 3N and the time complexity will be O(3N).
    </p>
  </div>
  <div style="width: 45%;">
    <blockquote>
    But this manual counting process is not feasible for any code. As the ‘for loop’ might run a billion or million times and inside that ‘for loop’, there might be a large no. of operations or some other ‘for loops’ as well. So, we have to find out a better approach to calculate the time complexity of any given code.  
    </blockquote>
  </div>
</div>

## *Here come the three rules, that we are going to follow while calculating the time complexity*

1. We will always calculate the time complexity for the worst-case scenario.
2. We will avoid including the constant terms.
3. We will also avoid the lower values.

### (1) Calculate the time complexity for the worst-case scenario

Before discussing the point we need to understand the three terms i.e. Best Case, Worst Case, and Average

```plaintext
BEGIN
    if (a < 25) console.log("D");
    else if (a < 55) console.log("C");
    else if (a < 65) console.log("B");
    else console.log("A");
END
```

1. **Best Case:** This term refers to the case where the code takes the least amount of time to get executed. For example, if the mark is 10(i.e. < 25), only the first line will be executed and the rest of the lines will be skipped. So, the least amount of steps i.e. only 2 steps are required in this case.
2. **Worst Case:** This term refers to the case where the code takes the maximum amount of time to get executed. For example, if the mark is 70(i.e. > 65), the last line will be executed after checking all the above conditions. So, the maximum amount of steps i.e. 4 steps are required in this case.
3. **Average Case:** This term is pretty self-explanatory. This is basically the case between the best and the worst.

Now, as we always want that our system serves the maximum number of clients, we need to calculate the time complexity for the worst-case scenario. With this, we can actually judge the robustness of any code or any system.

### (2) Avoid including the constant terms

![Example Image](/resources/images/txl4.svg)

<div style="display: flex; justify-content: space-between;">
  <div style="width: 45%;">
    In this case we don’t care for 2x, 3x, 3x+5 we just care about the large which is x.
    <br/> <br/>
    so time complexity → O(x)
    </p>
  </div>
  <div style="width: 45%;">
    <div style=" border-radius:4px; padding: 10px; background-color: #f8d7da; color: #721c24;">
  <strong>Warning:</strong> This is a warning message. Please pay attention to this important information.
</div>
  </div>
</div>

***For example:***

for n = 5 the constant search O(1) take lot time but, when the size of array will increase the time complexity will also increase at significant rate

If we want to think of this case in terms of code, we can consider the following code:

```plaintext
x = 2;
for (i = 1; i <= x; i++) 
 console.log("time");
```

let’s suppose the time complexity: O(4N^3 + 3N^2 + 8) Now, if we consider the value of N as 105 the time complexity will be like this:  O(41015 + 31010 + 8).

In this case, the constant term 8 is very less significant in terms of changing the time complexity with different values of N. That is why we should avoid the constant terms while calculating the time complexity for ease of math.

Here, the first step (i.e. x = 2) will be executed in unit time i.e. constant time (1). The precise time complexity is O(3N + 1) but in this case, the constant 1 is very less significant. So we will write the time complexity as O(3N) avoiding the constant term.

### (3) Avoid the lower or less dominant values

Now, in the previous example, the given time complexity is O(4N3 + 3N2 + 8) and we have reduced it to O(4N3 + 3N2). Here,

* we can clearly observe if the value of N is a large number, the second term i.e. 3N^2 will also be a less significant term. For example, if the value of N is 10^5 then the term 310^10 becomes less significant with respect to 410^15. So, we can also avoid the lower values and the final time complexity will be O(4N^3)
* A point to remember is that we can actually ignore the constant coefficients as well. For example, considering the time complexity O(4N^3) as O(N^3) is also correct.



### *Key terms and Terminology*

* Pseudocode: a mixture of natural language and high level programming concepts to describe the main idea behind the code.
* Primitive Operations: low-level operations independent of programming language, eg.
  * Data movements
  * controls (branch, sub-route line call, return)
  * Arithmetic or logical operations </aside>

```
input - an array a storing n ints
output - max int in a

crrMax <- a[0]
for i <- 1 to n-1 do
 if crrMax < a[i] then crrMax <- a[i]
return crrMax
```

**Insertion Sort**
> input - a[1..n], array of ints
> output - a permutation of a such that a[1] < a[2] < … a[n]

```
for j ← 0 to n do
 key ← a[j]
 i ← j-1
 while i>0 and a[i] > key
  do a[i+j] ← a[i]
  i—
 a[i+1] ← key
```

![Example Image](/resources/images/1__NOe6jL9veyR4yAyf85dzA.png)
