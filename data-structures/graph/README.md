A Graph is a non-linear data structure consisting of vertices and edges. The vertices are sometimes also referred to as nodes and the edges are lines or arcs that connect any two nodes in the graph. More formally a Graph is composed of a set of vertices( V ) and a set of edges( E ). The graph is denoted by G(E, V).

* A graph structure G is defined as G = (V, E) where V is a set of vertices, E is a set of edges, and each edge is formed from pair of distinct vertices in V.
* A graph data structure may also relate to each edge with some edge value, such as a symbolic label or a numeric attributes like cost, capacity, length, etc.
* Unlike tree data structure graph does not have any root node like structure. Any node can be connected with any other node in the graph. Nodes do not have any clear parent-child relationship like in the tree. Instead nodes are called as neighbors if they are connected by an edge.

***Components of a Graph***

* Vertices: Vertices are the fundamental units of the graph. Sometimes, vertices are also known as vertex or nodes. Every node/vertex can be labeled or unlabeled.
* Edges: Edges are drawn or used to connect two nodes of the graph. It can be ordered pair of nodes in a directed graph. Edges can connect any two nodes in any possible way. There are no rules. Sometimes, edges are also known as arcs. Every edge can be labeled/unlabeled.

***Basic Terms and Terminologies***

* **Arc**: Directed link between two nodes is known as Arc. For example, the arc (v1,v2) traverse from tail node v1 to head node v2.
* **Edge**: Undirected link between the nodes is known as Edge.
* **Path**: A path is a sequence of consecutive edges in a graph and the length of the path is the number of edges traversed.

***Operations***

The basic operations provided by a graph data structure G usually include:

* **Adjacent (G, v1, v2):** tests whether there is an edge from node v1 to node v2
* **Neighbors (G, v1):** lists all nodes y such that there is an edge from v1 to v2.
* **Add (G, v1, v2)**: adds to G the edge from v1 to v2, if it is not there.
* **Delete (G, v1, v2):** removes the edge from v1 to v2, if it is there.
* **get_node_value (G, v1):** returns the value associated with the node v1.
* **set_node_value (G, v1, a):** sets the value associated with the node v1 to a. Structures that associate values to the edges usually provide also
* **get_edge_value (G, v1, v2):** returns the value associated to the edge (v1, v2). set_edge_value (G, v1, v2, v): sets the value associated to the edge (v1,v2) to v.

### *types of Graph,*

1. **Null Graph**: A graph is known as a null graph if it has no edges.

2. **Trivial Graph**: A graph having only a single vertex, it is also the smallest possible graph.

3. **Undirected Graph**: A graph in which edges do not have any direction. That is, the nodes are unordered pairs in the definition of every edge. Edges in the undirected graph only connect to each other. In an undirected graph, edge (v1,v2) is equivalent to edge (v2,v1) since they are unassigned.

4. **Directed Graph**:  A graph in which each edge has a direction. That is, the nodes are ordered pairs in the definition of every edge. In a directed graph, each edge e is identified with an ordered pair (v1,v2) of nodes in G rather than an unordered pair (v1,v2). Alternatively, we can say that in a directed graph (v1,v2) and (v2,v1) are two edges where the former edge leaves v1 and ends at v2, and the latter edge does the opposite.

5. **Connected Graph**: A graph in which we can visit any other node in the graph from one node is known as a connected graph.

6. **Disconnected Graph**: A graph in which at least one node is not reachable from another node is known as a disconnected graph.

7. **Regular Graph** : A graph in which the degree of every vertex is equal to the degree of every other vertex in the graph. Let the degree of each vertex be K, then the graph is regular.

8. **Complete Graph**: A graph in which there is a direct edge from each node to every other node.

9. **Cycle Graph**: A graph in which the graph forms a cycle itself, and the degree of each vertex is 2.

10. **Cyclic Graph**: A graph containing at least one cycle is known as a cyclic graph.

11. **Directed Acyclic Graph (DAG)**: A Directed Graph that does not contain any cycle.

12. **Bipartite Graph**: A graph in which vertices can be divided into two sets such that vertices in each set do not contain any edges between them.

13. **Weighted Graph**: A graph in which the edges are specified with suitable weights is known as a weighted graph. Weighted graphs can be further classified as directed weighted graphs and undirected weighted graphs.


<p align="left">
  <img src="/resources/images/g1.png" alt="Image 1 Description" width="45%" style="display: inline-block;"/>
  <img src="/resources/images/g2.png" alt="Image 2 Description" width="45%" style="display: inline-block;"/>
</p>
<p align="left">
  <img src="/resources/images/g3.png" alt="Image 1 Description" width="45%" style="display: inline-block;"/>
  <img src="/resources/images/g4.png" alt="Image 2 Description" width="45%" style="display: inline-block;"/>
</p>
<p align="left">
  <img src="/resources/images/g5.png" alt="Image 1 Description" width="45%" style="display: inline-block;"/>
  <img src="/resources/images/g6.png" alt="Image 2 Description" width="45%" style="display: inline-block;"/>
</p>

**Weighted Graphs**
The graph is called a Weighted Graph if information like cost or weight is associated with the traversal of an edge. Both directed and undirected graphs may be weighted. The operations on a weighted graph are the same with the addition of a weight parameter during edge creation. Weighted Graph operation is the extension of Undirected or Directed graph operation.

**Multigraph**
A multigraph is a graph which has more than one edge between the same two vertices. For example, if one were modeling airline flights, there might be multiple flights between two cities, occurring at different times of the day. When we want to distinguish between different nodes and edges, we can associate labels with each node and edge. If a label is associated with each node and edge in a graph, then such a graph is said to be labeled.

**Sparse Graph**
Graphs are said to be sparse if the number of edges is far less than 
> |V|², i.e. |E| << |V|².

**Acyclic Graph**
It is defined as a graph with no path that starts and ends at the same vertex. An acyclic undirected graph is like a tree. Directed Acyclic Graph (DAG) is a directed graph with no path that starts and ends at the same vertex. It is also known as an oriented acyclic graph.

**Graph with Isolated Vertices**
If a vertex is not adjacent to any other vertices in a graph, then such a type of vertex is known as an Isolated Vertex.

**Strongly Connected Graph**
A directed graph G is said to be strongly connected if for each pair (v1, v2) of nodes in G, there is a path from v1 to v2 and there is also a path from v2 to v1. Whereas G is said to be a unilaterally connected graph if for any pair (u, v) of nodes in G, there is a path from u to v or a path from v to u.

**Unilaterally Connected Graph**
A graph is said to be a Unilaterally connected graph if for any pair (v1, v2) of nodes in G, there is a path from v1 to v2 or a path from v2 to v1.

**

**Degree** In an undirected graph, the degree of a vertex v is the number of edges connected to v. In a directed graph, the out-degree of a vertex v is the number of edges leaving v, and its in-degree is the number of edges ending at v.

If an edge e connects vertex v1 and v2, we denote it as e= (v1, v2). And if v1 = v2, e is called a self-loop. In the figure 5.1, number of edge is 6 and e6 is a self-loop. If there is an edge between each pair of vertices in V, an undirected or directed graph can have O (|V |2 ) edges, namely, |E| = O (|V |2 )

**Matrix Representation of Graphs,**

Till now you already have a basic idea of the logical representation of the graphs. Let's take a look at Matrix representation of a graph that is commonly represented in computers. The representation is commonly in two forms. They are Adjacency matrix and Incidence Matrix.

Adjacency matrix It is a two-dimensional Boolean matrix to store the information about the graph nodes.

* Here the rows and columns represent source and destination vertices and,
* entries in the matrix indicate whether an edge exists between the vertices associated with that row and column.
* The values of matrix are either 0 or 1.
* An Adjacency Matrix A[V][V] is a 2D array of size V × V where V is the number of vertices in a undirected graph.
* If there is an edge between Vx to Vy then the value of A[Vx][Vy]=1 and A[Vy][Vx]=1, otherwise the value will be zero.
* For a directed graph, if there is an edge between Vx to Vy, then the value of A[Vx][Vy]=1, otherwise the value will be zero.
  
**Example**: Suppose if a graph G consists of A,B,C,D vertices then the adjacency matrix A = [aij] of the graph G is the n x n matrix and can be defined as: aij =1 if vi is adjacent to vj (i.e if there is an edge between vi and vj) whereas aij =0 if there is no edge between vi and vj
**Adjacency Matrix of a UN-Directed Graph**
![Example Image](/resources/images/g7.jpg)
| Column 1 | A   | B   | C   | D   |
| -------- | --- | --- | --- | --- |
| A        | 0   | 1   | 1   | 0   |
| B        | 1   | 0   | 1   | 0   |
| C        | 1   | 1   | 0   | 1   |
| D        | 0   | 0   | 1   | 0   |


**Adjacency Matrix of a Directed Graph**
Let us consider the following directed graph and construct its adjacency matrix

- The set of vertices from the graph G= {A,B,C,D }
- And the set of edges is E= {(A,C), (A,B), (B,C ), (C,D)}
- Where e1 = (A,C), e2 = (A,B), e3 = (B,C ), e4 =(C,D)
Adjacency matrix of the above directed graph will be,

![Example Image](/resources/images/g8.jpg)
| Column 1 | A   | B   | C   | D   |
| -------- | --- | --- | --- | --- |
| A        | 0   | 1   | 1   | 0   |
| B        | 0   | 0   | 1   | 0   |
| C        | 0   | 0   | 0   | 1   |
| D        | 0   | 0   | 0   | 0   |


**incidence matrix,**
It is a two-dimensional matrix, in which the rows represent the vertices and columns represent the edges.
* The entries in an array indicate if both are related to each other through edges.
* The values of the matrix are given as -1, 0, or 1.
* 1: the edge is start
* 1: the edge id end
* 0: no edge
* if the vertex is having a self-loop, in such case the kth edge is (vi, vi ), then this will be represented in a matrix with 1.

| Column 1 | e1  | e2  | e3  | e4  |
| -------- | --- | --- | --- | --- |
| A        | 1   | 1   | 0   | 0   |
| B        | 0   | -1  | 1   | 0   |
| C        | -1  | 0   | -1  | 1   |
| D        | 0   | 0   | 0   | -1  |


**adjacency list,**
in representation of a graph, every vertex is represented as a node object. The node may either contain data or a reference to a linked list. This linked list provides a list of all nodes that are adjacent to the current node. Consider a graph containing an edge connecting node A and node B. Then, the node A will be available in node B’s linked list. Fig 6 shows a sample graph of 5 nodes and its corresponding adjacency list.
![Example Image](/resources/images/g9.jpg)

Note that the list corresponding to node E is empty while lists corresponding to nodes B and D have 2 entries each.

Similarly, adjacency lists for an undirected graph can also be constructed. next fig, provides an example of an undirected graph along with its adjacency list for better understanding.
![Example Image](/resources/images/g10.jpg)

Adjacency list enables faster search process in comparison to adjacency matrix. However, it is not the best representation of graphs especially when it comes to adding or removing nodes. For example, deleting a node would involve looking through all the adjacency lists to remove a particular node from all lists. Network X library provides a function adjacency_list () to generate the adjacency list of a given graph. The following code demonstrates its use.

**incidence list,**
In Incidence List, each vertex has list of pointers to edges which it is incident to. Advantage of this is that two vertices that are adjacent to this edge share the same instance of edge, so when you want to manipulate with edge data (for example flow or cost), you only change data in one object. You also modify neighbor function to make your graph directed, or mixed.

**

### *graph traversal algorithms,*
Algorithms for Graph Traversal Graph algorithms are generally used in computer science to find and examine a path between the nodes using algorithm like depth-first search and breadth-first search. These algorithms are used generally for the examination of the graph so that further manipulation of data structure becomes easier and more appropriate.

**(1) Depth First Search (DFS)**
The depth first search algorithm is used to visit all of the nodes in the graph for its examination and not always necessary to find the shortest path. Depth first search is done by taking a node, checking its neighbors, expanding the first node it finds among the neighbors, checking if that

Depth First Search (DFS) algorithm traverses a graph in a deathward motion and uses a stack to remember to get the next vertex to start a search, when a dead end occurs in any iteration.

![Example Image](/resources/images/g11.jpg)

As in the example given above, DFS algorithm traverses from S to A to D to G to E to B first, then to F and lastly to C. It employs the following rules.

* Rule 1 − Visit the adjacent unvisited vertex. Mark it as visited. Display it. Push it in a stack.
* Rule 2 − If no adjacent vertex is found, pop up a vertex from the stack. (It will pop up all the vertices from the stack, which do not have adjacent vertices.)
* Rule 3 − Repeat Rule 1 and Rule 2 until the stack is empty.

In Depth First search it should be noted that same node is not visited more than once, otherwise possibility of infinite recursion may occur. Algorithms for Depth first search is similar to the one that is mentioned in the previous unit. The concept of algorithm is same either it be in trees or in graph

**(2) Breadth first search**

Breadth first search This algorithm uses a queue data structure to perform the search. The effect of this is to process all nodes adjacent to the start node before we process the nodes adjacent to those nodes. If all of the edges in a graph are unweighted (or the same weight) then the first time a node is visited is the shortest path to that node from the source node. Algorithms for Breadth first search is also similar to the one that is mentioned in the previous unit. The concept of algorithm is same either it be in trees or in graph.


BFS is a traversing algorithm where you should start traversing from a selected node (source or starting node) and traverse the graph layerwise thus exploring the neighbour nodes (nodes which are directly connected to source node). You must then move towards the next-level neighbour nodes.

As the name BFS suggests, you are required to traverse the graph breadthwise as follows:

1. First move horizontally and visit all the nodes of the current layer
2. Move to the next layer

Consider the following diagram.
![Example Image](/resources/images/fdec3c2.jpg)

The distance between the nodes in layer 1 is comparatively lesser than the distance between the nodes in layer 2. Therefore, in BFS, you must traverse all the nodes in layer 1 before you move to the nodes in layer 2.

***Traversing child nodes***
A graph can contain cycles, which may bring you to the same node again while traversing the graph. To avoid processing of same node again, use a Boolean array which marks the node after it is processed. While visiting the nodes in the layer of a graph, store them in a manner such that you can traverse the corresponding child nodes in a similar order.

In the earlier diagram, start traversing from 0 and visit its child nodes 1, 2, and 3. Store them in the order in which they are visited. This will allow you to visit the child nodes of 1 first (i.e. 4 and 5), then of 2 (i.e. 6 and 7), and then of 3 (i.e. 7) etc.

To make this process easy, use a queue to store the node and mark it as 'visited' until all its neighbors (vertices that are directly connected to it) are marked. The queue follows the First In First Out (FIFO) queuing method, and therefore, the neighbors of the node will be visited in the order in which they were inserted in the node i.e. the node that was inserted first will be visited first, and so on.

### spanning tree
A spanning tree is a subset of Graph G, which has all the vertices covered with minimum possible number of edges. Hence, a spanning tree does not have cycles and it cannot be disconnected..

By this definition, we can draw a conclusion that every connected and undirected Graph G has at least one spanning tree. A disconnected graph does not have any spanning tree, as it cannot be spanned to all its vertices.
![Example Image](/resources/images/spanning_trees.jpg)


**pending topics,**
- Directed Graph
- isomorphic Graph
- Eulerian Path
- topological sort
- Algorithm for Topological Sorting:
- Dijastra alogo
- What is a Spanning Tree?
- What is a Minimum Spanning Tree?
- Prim’s algorithm is also a Greedy algorithm
- Introduction to NP-Completeness
- Definition of NP
- Optimization versus
- decision problems
- Classes P and NP NP-complete problems
- NP-hardness and
- NP-completeness