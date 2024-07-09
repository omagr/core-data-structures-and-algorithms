- what is array
- when and where is array used
- complexity
- static array usages
- dynamic array details
- implementations

# What is a static Array?
A static array is a fixed length container containing n elements indexable from the range [0, n−1].

Q: What is meant by being ‘indexable'?
A: This means that each slot/index in the array can be referenced with a number.

# When and where is a static Array used?
1) Storing and accessing sequential data
2) Temporarily storing objects
3) Used by 10 routines as buffers
4) Lookup tables and inverse lookup tables
5) Can be used to return multiple values from a function
6) Used in dynamic programming to cache answers to subproblems eg, knapsack problem.

# Complexity
|           | Static Array | Dynamic Array |
| --------- | ------------ | ------------- |
| Access    | 0(1)         | 0(1)          |
| Search    | 0(n)         | 0(n)          |
| Insertion | N/A          | 0(n)          |
| Appending | N/A          | 0(1)          |
| Deletion  | N/A          | 0(n)          |


