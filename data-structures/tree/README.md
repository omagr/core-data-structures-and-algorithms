### *what is tree?*

A tree consists of a root, and zero or more subtrees T1, T2, … , Tk such that there is an edge from the root of the tree to the root of each subtree.

We can also say that tree data structure has roots, branches, and leaves connected with one another.

* A tree is
  * non-linear
  * dynamic
  * hierarchical data structure
* it consist of a collection of nodes such that each node of the tree stores a value and a list of references to other nodes (the “children”).
* A tree can be empty with no nodes called the null or empty tree or a tree is a structure consisting of one node called the root and one or more sub-trees
![Example Image](/resources/images/t1.png)

**Why is a Tree considered a non-linear data structure?**

The data in a tree is not stored in a sequential manner; that is, it is not stored linearly. Instead, it is arranged on multiple levels, or we can say it is a hierarchical structure. For this reason, the tree is considered to be a non-linear data structure.

### Basic Terminologies in Tree Data Structure

* Parent Node: The node which is a predecessor of a node is called the parent node of that node.
  * {2} is the parent node of {6, 7}.
  * {3} is the parent node of {8, 9, 10}.
  * {4} is not the parent node.
* Child Node: The node which is the immediate successor of a node is called the child node of that node.
  * {6, 7} are the child nodes of {2}.
  * {8, 9, 10} are the child nodes of {3}.
* Root Node: The topmost node of a tree or the node which does not have any parent node is called the root node.
  * {1} is the root node of the tree. A non-empty tree must contain exactly one root node and exactly one path from the root to all other nodes of the tree.
* Leaf Node or External Node: The nodes which do not have any child nodes are called leaf nodes.
  * {6, 14, 8, 9, 15, 16, 4, 11, 12, 17, 18, 19} are the leaf nodes of the tree.
* Ancestor of a Node: Any predecessor nodes on the path from the root to that node are called Ancestors of that node.
  * {1, 2} are the ancestor nodes of the node {7}.
* Descendant: Any successor node on the path from the leaf node to that node.
  * {7, 14} are the descendants of the node {2}.
* Sibling: Children of the same parent node are called siblings.
  * {8, 9, 10} are called siblings.
* Level of a node: The count of edges on the path from the root node to that node. The root node has level 0.
* Internal node: A node with at least one child is called an Internal Node.
* Degree: Number of subtrees of a node (node A has a degree of 3).
* Edge: A connection between one node and another.
* Neighbour of a Node: Parent or child nodes of that node are called neighbors of that node.
* Sub-tree: Any node of the tree along with its descendants.

### Properties of a Tree

* **Number of Edges**: An edge can be defined as the connection between two nodes. If a tree has N nodes, then it will have (N-1) edges. There is only one path from each node to any other node of the tree.
  * Number of nodes: 19
  * Number of edges: 18
* **Depth of a Node**: The depth of a node is defined as the length of the path from the root to that node. Each edge adds 1 unit of length to the path. So, it can also be defined as the number of edges in the path from the root of the tree to the node.
  * The 6th node has a depth of 2 units.
* **Height of a Node**: The height of a node can be defined as the length of the longest path from the node to a leaf node of the tree.
* **Height of the Tree**: The height of a tree is the length of the longest path from the root of the tree to a leaf node of the tree.
* **Degree of a Node**: The total count of sub-trees attached to that node is called the degree of the node. The degree of a leaf node must be 0. The degree of a tree is the maximum degree of a node among all the nodes in the tree.
* Traversing in a tree is done by depth-first search and breadth-first search algorithms.
* It has no loops and no circuits.
* It has no self-loops.
* It has a hierarchical model.

***I learned that depth and height are properties of a node:***

* The depth of a node is the number of edges from the node to the tree's root node.
* A root node will have a depth of 0.
* The height of a node is the number of edges on the longest path from the node to a leaf.
* A leaf node will have a height of 0.

### Additional Properties of a Tree

* The height of a tree would be the height of its root node, or equivalently, the depth of its deepest node.
* The diameter (or width) of a tree is the number of nodes on the longest path between any two leaf nodes. The tree below has a diameter of 6 nodes.

### Basic Operation Of Tree

* Create – create a tree in data structure.
* Insert − Inserts data in a tree.
* Search − Searches specific data in a tree to check it is present or not.
* Pre-order Traversal – perform Traveling a tree in a pre-order manner in data structure .
* In-order Traversal – perform Traveling a tree in an in-order manner.
* Post-order Traversal –perform Traveling a tree in a post-order manner.
![Example Image](/resources/images/s2.png)

> There are other useful ways to draw a tree. One useful way is as a list. The information in the root node comes first followed by a list of the sub-trees of that node.
> **(A(B(E,F(J),G),(C),D(H(K),I)))**

**types**

1. General tree: A general tree data structure has no restriction on the number of nodes. It means that a parent node can have any number of child nodes.
2. Binary tree: A node of a binary tree can have a maximum of two child nodes. In the given tree diagram, node B, D, and F are left children, while E, C, and G are the right children.
3. Balanced tree: If the height of the left sub-tree and the right sub-tree is equal or differs at most by 1, the tree is known as a balanced tree.

### *Binary Trees*

Binary Tree is defined as a Tree data structure with at most 2 children. Since each element in a binary tree can have only 2 children, we typically name them the left and right child.
![Example Image](/resources/images/t3.png)


* A binary tree is an important type of tree structure which occurs very often. It is characterized by the fact that any node can have at most two branches, i.e., there is no node with degree greater than two.
* For binary trees we distinguish between the sub-tree on the left and on the right, whereas for trees the order of the sub-trees was irrelevant.
* Also a binary tree may have zero nodes. Thus a binary tree is really a different object than a tree
* Definition: A binary tree is a special case of tree where no node of a tree can have a degree of more than two. Therefore, a binary tree is a set of zero or more nodes T such that:
  * there is a specially designated node called the root of the tree
  * the remaining nodes are partitioned into two disjointed sets, T1 and T2, each of which is a binary tree. T1 is called the left subtree and T2 is called right subtree. A binary tree is shown in figure 4.3, here you can find for the root A, B is the left sub tree and C is the right sub tree.
* So,
  * The maximum number of nodes at level i will be 2^(i−1)
  * If k is the depth of the tree then the maximum number of nodes that the tree can have is 2^k − 1 = 2^(k−1) + 2^(k−2) + … + 2^0.

***types of bt:***

**Skewed binary tree:** A binary tree which has only left sub-tree is called left skewed tree and has only right sub-tree is called right skewed tree.
![Example Image](/resources/images/skewed-trees-1024x421.png)
**full binary tree:** A full binary tree is a tree in which every node has either 0 or 2 children. Another way of defining a full binary tree is a recursive definition. A full binary tree is either:

* Each non leaf node has exactly two child nodes
* All leaf nodes are at the same level.
  
![Example Image](/resources/images/t4.png)

**complete binary tree:** is a binary tree in which every level, except possibly the last, is completely filled, and all nodes in the last level are as far left as possible. A perfect tree is therefore always complete but a complete tree is not necessarily perfect.

![Example Image](/resources/images/t5.png)

**Depth-first Search**

DFS (Depth-first search) is a technique used for traversing a tree or graph. Here, backtracking is used for traversal. In this traversal, first, the deepest node is visited and then backtracks to its parent node if no sibling of that node exists.

**Breadth-first Search**

Breadth-first search is an algorithm for searching a tree data structure for a node that satisfies a given property. It starts at the tree root and explores all nodes at the present depth before moving on to the nodes at the next depth level.

### **Tree Traversing**

When traversing a binary tree, we want to treat each node and its subtrees in the same fashion. If we let L, D, R stand for moving left, printing the data, and moving right at a node, then there are six possible combinations of traversal: LDR, LRD, DLR, DRL, RDL, and RLD. If we adopt the convention that we traverse left before right, then only three traversals remain: LDR, LRD, and DLR. To these, we assign the names in-order, post-order, and pre-order because there is a natural correspondence between these traversals and producing the infix, postfix, and prefix forms of an expression.

**(1) In-order Traversal (Left-Root-Right)**

In this traversal method, the left subtree is visited first, then the root, and later the right subtree. We should always remember that every node may represent a subtree itself.

If a binary tree is traversed in-order, the output will produce sorted key values in ascending order.
![Example Image](/resources/images/t6.png)

- Step 1: Start from the root node.
- Step 2: Now go to the leftmost node from the root node in the left subtree.
- Step 3: When the leftmost node is reached. Print it down.
- Step 4: Now visit/ go the leftmost node’s parent node. Print it down.
- Step 5: Now visit/ go to the first node of the right subtree.
- Step 6: Proceed in the same way as in Step 2 - 5 till ‘printing’ of all thenodes is finished

**(2) Pre-order Traversal (root-left-right)**

In this traversal method, the root node is visited first, then the left subtree and finally the right subtree.

![Example Image](/resources/images/t7.png)

We start from A, and following pre-order traversal, we first visit A itself and then move to its left subtree B. B is also traversed pre-order. The process goes on until all the nodes are visited. The output of pre-order traversal of this tree will be −

**A → B → D → E → C → F → G**

- Step 1: Start from the root node. print it down.
- Step 2: Now go to the leftmost node from the root node in the left sub tree.On it’s way to the left most node, print all the nodes as it comes.
- Step 3: When the leftmost node is reached. print it down.
- Step 4: Now visit the right sub tree of the leftmost node’s parent node.
- Step 5: Write down the first node of the right subtree.
- Step 6: Now proceed in the same way as in Step 2 - 5 till ‘printing’ of all thenodes is finished.

**(3) Post-order Traversal (left-right-root)**

In this traversal method, the root node is visited last, hence the name. First we traverse the left subtree, then the right subtree and finally the root node.

![Example Image](/resources/images/t8.png)

We start from A, and following Post-order traversal, we first visit the left subtree B. B is also traversed post-order. The process goes on until all the nodes are visited. The output of post-order traversal of this tree will be −

**D → E → B → F → G → C → A**

- Step 1: Start from the root node.
- Step 2: Now go to the leftmost node from the root node in the left subtree.
- Step 3: When the leftmost node is reached. print it down.
- Step 4: Now visit/ go the leftmost node’s parent node.
- Step 5: Now visit/ go to the first node of the right subtree.
- Step 6: Proceed in the same way as in Step 2 - 5 till ‘printing’ of all thenodes is finished.

The above discussed three traversal is called as depth first traversal because all these patterns takes the visiting pattern from top to bottom that is deep towards its left subtree and travelling across.

### *Breadth first traversal Trees*

Breadth first traversal Trees can also be traversed in level-order, where we visit every node on a level before going to a lower level. This is also called breadth first traversal.

Level order traversal will be using queue to print the traversal pattern. Initially queue will be empty and then the root node will be inserted and look for the subtrees. Then root will be removed from the queue and printed and the left and right nodes will be inserted into the queue this process proceeds until the tree reaches Null.

- Step 1: Initialize queue with front and rear as 0.
- Step 2: Add root to queue.
- Step 3: Get node from the queue and print data, then add the left and rightchild to queue.
- Step 4: Go to step 3 until node is NULL.
- Step 5: If child node is NULL, skip and not to add to queue

***Representation of Binary Tree***

* **Array Representation of Binary Tree**
* **Linked Storage Representation of Binary Tree**
* **Sequential Representation of Complete Binary Tree**
* **Sequential Representation of Incomplete Binary Tree**
* **Preorder Sequential Representation of Binary Tree**
* **Postorder Sequential Representation of Binary Tree**

***Convert a Generic Tree(N-array Tree) to Binary Tree***

<p align="left">
  <img src="/resources/images/t9.png" alt="Image 1 Description" width="45%" style="display: inline-block;"/>
  <img src="/resources/images/t10.png" alt="Image 2 Description" width="50%" style="display: inline-block;"/>
</p>

* The root of the Binary Tree is the Root of the Generic Tree.
* The left child of a node in the Generic Tree is the Left child of that node in the Binary Tree.
* The right sibling of any node in the Generic Tree is the Right child of that node in the Binary Tree.
* If the parent node has only the right child in the general tree then it becomes the rightmost child node of the last node following the parent node in the binary tree.

*Below are the steps for the conversion of Generic Tree to Binary Tree:*

1. As per the rules mentioned above, the root node of general tree A is the root node of the binary tree.
2. Now the leftmost child node of the root node in the general tree is B and it is the leftmost child node of the binary tree.
3. Now as B has E as its leftmost child node, so it is its leftmost child node in the binary tree whereas it has C as its rightmost sibling node so it is its right child node in the binary tree.
4. Now C has F as its leftmost child node and D as its rightmost sibling node, so they are its left and right child node in the binary tree respectively.
5. Now D has I as its leftmost child node which is its left child node in the binary tree but doesn’t have any rightmost sibling node, so doesn’t have any right child in the binary tree.
6. Now for I, J is its rightmost sibling node and so it is its right child node in the binary tree.
7. Similarly, for J, K is its leftmost child node and thus it is its left child node in the binary tree.
8. Now for C, F is its leftmost child node, which has G as its rightmost sibling node, which has H as its just right sibling node and thus they form their left, right, and right child node respectively.