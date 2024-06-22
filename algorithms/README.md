*`An Algorithm is essentially, describing the actions that one should take on the input instance to get the output as desired, as is specified.`*

### *What is a good algorithm ?*
  * efficiency
    * running time
    * space used
  * efficiency as a function of input size
    * the number of bits is an input number
    * number of data elements (numbers, points)

### *How do we analysis a algo ?*

* count the number of primitive operations executed by an algo. 

### *Analogy*

![Example Image](/resources/images/1__NOe6jL9veyR4yAyf85dzA.png)

` input - a[1..n], array of ints
output - a permutation of a such that a[1] < a[2] < … a[n]`

```for j ← 0 to n do
 key ← a[j]
 i ← j-1
 while i>0 and a[i] > key
  do a[i+j] ← a[i]
  i—
 a[i+1] ← key
```
-  Pseudocode: a mixture of natural language and high level programming concepts to describe the main idea behind the code.
``` 
input - an array a storing n ints
output - max int in a

crrMax <- a[0]
for i <- 1 to n-1 do
 if crrMax < a[i] then crrMax <- a[i]
return crrMax
```

* Primitive Operations: low-level operations independent of programming language, eg.
  * Data movements
  * controls (branch, sub-route line call, return)
  * Arithmetic or logical operations