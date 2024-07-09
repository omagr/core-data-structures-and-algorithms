### *What is Data?*
Data is a collection of discrete or continuous values that convey information, describing the quantity, quality, fact, statistics, other basic units of meaning, or simply sequences of symbols that may be further interpreted formally.

### *What is Data Types?*
In computer science and computer programming, a data type is a the type of value a variable has and what type of mathematical, relational or logical operations can be applied without causing an error.

![Example Image](/resources/images/variable-and-data-type.-1-e1536132649973.jpg)

### *What is Abstract Data Types*

Abstract Data type (ADT) is an anstract of a data structure which provides only the interface to which a data structure must adhere to.

The definition of ADT only mentions what operations are to be performed but not how these operations will be implemented.

there might be a situation when we need operations for our user-defined data type which have to be defined. These operations can be defined only as and when we require them.
So, in order to simplify the process of solving problems, we can create data structures along with their operations, and such data structures that are not in-built are known as Abstract Data Type (ADT).

| ADT   | DT                                                                 |
| ----- | ------------------------------------------------------------------ |
| list  | dynamic array, linked list                                         |
| queue | array based queue, linked list based queue, stack list based queue |
| map   | tree map, hash map / hash table                                    |


So a user only needs to know what a ADT can do, but not how it will be implemented. Think of ADT as a black box which hides the inner structure and design of the data type.
![Example Image](/resources/images/abt.jpg)

### *What is Data Structures?*

In computer science, a data structure is a collection of data values, the relationships among them, and the functions or operations that can be applied to the data.

A data structure is the implementation for an ADT. In an object-oriented language, an ADT and its implementation together make up a class. Each operation associated with the ADT is implemented by a member function or method. The variables that define the space required by a data item are referred to as data members. An object is an instance of a class, that is, something that is created and takes up storage during the execution of a computer program.

A data structure is a way of storing data in a main memory (always referred to ram) to be used efficiently and quickly available to the processor for required calculations and allow the most efficient algorithm to be used. The choice of the data structure begins with the choice of an abstract data type (ADT).

A well-designed data structure allows various critical operations to be performed, using as few resources, both execution time and memory space, as possible.

as data structure is a scheme for data organization so the functional definition of a data structure should be independent of its implementation, the way in which the data is organized affects the performance of a program for different tasks. computer programmers decide which data structures to use based on the nature of the data and the processes that need to be performed on that data.

| Feature          | Data Type                                                                                                                                                                                                                                                                                                                                                                                                                                                | Data Structure                                                                                                                                                                                                                                                                                               |
| ---------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ |
| Definition       | * A data type is the most basic and the most common classification of data. It is this through which the compiler gets to know the form or the type of information that will be used throughout the code. So basically data type is a type of information transmitted between the programmer and the compiler where the programmer informs the compiler about what type of data is to be stored and also tells how much space it requires in the memory. | * A data structure is a collection of different forms and different types of data that has a set of specific operations that can be performed. It is a collection of data types. It is a way of organizing the items in terms of memory, and also the way of accessing each item through some defined logic. |
| Implementation   | * Implementation through Data Types is a form of abstract implementation                                                                                                                                                                                                                                                                                                                                                                                 | * Implementation through Data Structures is called concrete implementation                                                                                                                                                                                                                                   |
| Data Handling    | * Can hold values and not data, so it is data-less                                                                                                                                                                                                                                                                                                                                                                                                       | * Can hold different kinds and types of data within one single object                                                                                                                                                                                                                                        |
| Value Assignment | * Values can directly be assigned to the data type variables                                                                                                                                                                                                                                                                                                                                                                                             | * The data is assigned to the data structure object using some set of algorithms and operations like push, pop, and so on.                                                                                                                                                                                   |
| Time Complexity  | * No problem of time complexity                                                                                                                                                                                                                                                                                                                                                                                                                          | * Time complexity comes into play when working with data structures                                                                                                                                                                                                                                          |
- **The primitive data structure**
  - Also known as built-in data types, can store the data of only one type. You know the integers, floating points, characters, pointers, stuff like that.
  - Simple data structures can be constructed with the help of primitive data structures. A primitive data structure is used to represent the standard data types of any one of the computer languages. Variables, arrays, pointers, structures, unions, etc., are examples of primitive data structures.
- **Non-primitive data structures**
  - On the other hand, can store data of more than one type. For example, array, linked list, stack, queue, tree, graph, and so on. These are often referred to as derived data types.
  - Compound data structures can be constructed with the help of any one of the primitive data structures and have specific functionality. They can be designed by the user.
    - Linear data structures
      - As the name suggests, its data have to be structured in a linear order. That means there is no hierarchy, and elements are held together sequentially either by pointers or contiguous memory locations. In layman’s terms, each element appears to be connected with one another in a linear fashion.
    - Non-linear data structures
      - Non-linear data structures are not arranged sequentially in that each element of such data structures can have multiple paths to connect to other elements or form a hierarchy.
      - 
### *Abstract Data Types or structure Vs Concrete Data Types or structure?*
The ADT defines the logical form of the data type. The data structure implements the physical form of the data type.
| Abstract Data Types or Structures (ADT)                                                                                                | Concrete Data Types or Structures (CDT)                                                  |
| -------------------------------------------------------------------------------------------------------------------------------------- | ---------------------------------------------------------------------------------------- |
| Abstract Data Types or structures describe the data and the operations to manipulate and change it.                                    | Concrete data types or structures provide how these operations are actually implemented. |
| Most of the program becomes independent of the abstract data types representation, so it can be improved without breaking the program. | Which is not possible in Concrete Data Types or Structures (CDT).                        |
| It’s easier for each part of a program to use an implementation of its data types and that will be more efficient.                     | It is not so efficient compared to ADT.                                                  |
| Implementation of a high level concept                                                                                                 | Implementation of a simple concept                                                       |
| It is usable beyond its original use.                                                                                                  | It is rarely reusable beyond its original use.                                           |
| It hides the internal details.                                                                                                         | It doesn’t hide anything.                                                                |
| It uses class.                                                                                                                         | It uses structure.                                                                       |
| Examples - lists, sets, stacks.                                                                                                        | Examples - Arrays, linked lists, trees, graphs.                                          |


### *How to choose a Data structure?*

* what needs to be store?
  * tree could be great for hierarchical structured data.
* cost of operations
  * les say we have list, then
    * if we want to perform search more often then array could be best.
    * if we want to add and pop more then stack could be best.
* memory usage
  * if cost of operation is same then memory become crucial
* ease of implementation
  * ofc, if its simple then why not?

### *Need of Data Structures*

* Processor speed — To handle very large amount of data, high speed processing is required, but as the data is growing day by day to the billions of files per entity, processor may fail to deal with that much amount of data.
* Data Search — Consider an inventory size of 106 items in a store, If our application needs to search for a particular item, it needs to traverse 106 items every time, results in slowing down the search process.
* Multiple requests — If thousands of users are searching the data simultaneously on a web server, then there are the chances that a very large server can be failed during that process

in order to solve the above problems, data structures are used. Data is organized to form a data structure in such a way that all items are not required to be searched and required data can be searched instantly.

### *Selecting a Data Structure*

It should go without saying that people write programs to solve problems. However, sometimes programmers forget this. So it is crucial to keep this truism in mind when selecting a data structure to solve a particular problem. Only by first analyzing the problem to determine the performance goals that must be achieved can there be any hope of selecting the right data structure for the job. Poor program designers ignore this analysis step and apply a data structure that they are familiar with but which is inappropriate to the problem. The result is typically a slow program. Conversely, there is no sense in adopting a complex representation to “improve” a program that can meet its performance goals when implemented using a simpler design.

### *When selecting a data structure to solve a problem, you should follow these steps.*

1. Analyze your problem to determine the basic operations that must be supported. Examples of basic operations include inserting a data item into the data structure, deleting a data item from the data structure, and finding a specified data item.
2. Quantify the resource constraints for each operation.

This 2-step approach to selecting a data structure operationalizes a data-centered view of the design process. The first concern is for the data and the operations to be performed on them, the next concern is the representation for those data, and the final concern is the implementation of that representation.

Resource constraints on certain key operations, such as search, inserting data records, and deleting data records, normally drive the data structure selection process. Many issues relating to the relative importance of these operations are addressed by the following three questions, which you should ask yourself whenever you must choose a data structure.

* Are all data items inserted into the data structure at the beginning, or are insertions interspersed with other operations? Static applications (where the data are loaded at the beginning and never change) typically get by with simpler data structures to get an efficient implementation, while dynamic applications often require something more complicated.
* Can data items be deleted? If so, this will probably make the implementation more complicated.
* Are all data items processed in some well-defined order, or is search for specific data items allowed? “Random access” search generally requires more complex data structures.

Each data structure has associated costs and benefits. In practice, it is hardly ever true that one data structure is better than another for use in all situations. If one data structure or algorithm is superior to another in all respects, the inferior one will usually have long been forgotten. For nearly every data structure and algorithm presented in this book, you will see examples of where it is the best choice. Some of the examples might surprise you.

A data structure requires a certain amount of space for each data item it stores, a certain amount of time to perform a single basic operation, and a certain amount of programming effort. Each problem has constraints on available space and time. Each solution to a problem makes use of the basic operations in some relative proportion, and the data structure selection process must account for this. Only after a careful analysis of your problem’s characteristics can you determine the best data structure for the task.

### *Advantages of Data Structures*

* Efficiency — All these various data structures exist for a reason and that is to facilitate efficient storage and retrieval of data for various use-cases.  Efficiency of a program depends upon the choice of data structures. For example: suppose, we have some data and we need to perform the search for a particular record. In that case, if we organize our data in an array, we will have to search sequentially element by element. hence, using array may not be very efficient here. There are better data structures which can make the search process efficient like ordered array, binary search tree or hash tables.
* A tree is more likely to be efficient to model any file system but not efficient for representing relations in social media applications.
* Abstractions — Data structure is specified by the ADT which provides a level of abstraction. The client program uses the data structure through interface only, without getting into the implementation details. Every data structure provides clean interfaces in the form of operations exclusive to their respective abstract data types, which makes their internal implementation hidden from developers.
* You don't need to know how STL's unordered map works under the hood to write an application using it in C++, you just need to know what operations it supports and how you can use that to your advantage?
* Composition — Fundamental data structures can be combined to build more niche and complex data structures.
* In a database management system, indexing is usually implemented using a B+ tree which is based on top of the B tree - a special kind of n-ary self-balancing tree data structure.
* Reusability  — Data structures are reusable, i.e. once we have implemented a particular data structure, we can use it at any other place. Implementation of data structures can be compiled into libraries which can be used by different clients.

### *what is Pseudocode?*

Pseudocode literally means ‘fake code’. It is an informal and contrived way of writing programs in which you represent the sequence of actions and instructions (aka algorithms) in a form that humans can easily understand.

Pseudocode is an artificial and informal language that helps programmers develop algorithms. Pseudocode is a "text-based" detail (algorithmic) design tool.

The rules of Pseudocode are reasonably straightforward. All statements showing "dependency" are to be indented. These include while, do, for, if, switch. Examples below will illustrate this notion.
```
start;
read a,b,c
if a+b>c?
 if b+c>a?
  if a+c>b?
     print response
        "this is valid triangle"
else
   print response
        "this is valid not triangle"
end;

```
*Problem: factorial till n*
```
Step 1: Declare N and F as integer variable.

Step 2: Initialize F=1.

Step 2: Enter the value of N.

Step 3: Check whether N>0, if not then F=1.

Step 4: If yes then, F=F*N

Step 5: Decrease the value of N by 1 .

Step 6: Repeat step 4 and 5 until N=0.

Step 7: Now print the value of F.
```

### *How to study A Data Structure?*

1. Mathematical & Logical View
2. Operations
3. Cost of operations (time & space)
4. Implementation