

---

## 2. Basic Tree Traversal & Representation

### Traversal

* DFS
* BFS
* Preorder
* Inorder
* Postorder
* Level-order traversal

### Representation

* Adjacency list
* Pointer-based tree
* Array representation
* Implicit binary tree

### Core implementation concepts

* Recursive DFS
* Iterative DFS
* Queue for BFS
* Stack simulation

---

## 3. Binary Tree

Đây là bước quan trọng nhất trước khi sang BST/AVL/RB Tree.

### Keywords

* Binary Tree
* Full Binary Tree
* Complete Binary Tree
* Perfect Binary Tree
* Balanced Binary Tree
* Degenerate Tree
* Skewed Tree

### Important concepts

* Height complexity
* Recursive decomposition
* Tree diameter
* Lowest Common Ancestor (LCA)
* Tree DP
* Serialization / Deserialization

---

## 4. Binary Search Tree (BST)

Đây là bridge giữa tree cơ bản và balanced tree.

### Core keywords

* Binary Search Tree (BST)
* BST invariant/property
* Ordered tree
* Insert / Delete / Search
* Successor / Predecessor
* Min / Max in BST

### Important ideas

* Inorder traversal sorted
* Average vs worst-case complexity
* Degeneration to linked list

---

## 5. Self-Balancing BST

Đây là phần “advanced classical trees”.

---

# 5.1 AVL Tree

### Keywords

* AVL Tree
* Height-balanced tree
* Balance factor
* LL rotation
* RR rotation
* LR rotation
* RL rotation
* Rebalancing

### Concepts

* Strict balancing
* Rotation mechanics
* Height maintenance

---

# 5.2 Red-Black Tree

### Keywords

* Red-Black Tree
* Coloring
* Black height
* Red node constraint
* Recoloring
* Rotation
* NIL leaf

### Concepts

* Relaxed balancing
* Logarithmic height guarantee
* Insertion fix-up
* Deletion fix-up

### Related

* STL map/set implementation
* Linux kernel scheduler

---

# 5.3 Splay Tree

### Keywords

* Splay Tree
* Self-adjusting tree
* Zig
* Zig-zig
* Zig-zag
* Amortized complexity

---

# 5.4 Treap

### Keywords

* Treap
* Randomized BST
* Heap property
* Priority
* Split / Merge

---

## 6. Heap & Priority Structures

Tree-based nhưng mindset hơi khác BST.

### Keywords

* Heap
* Min-Heap
* Max-Heap
* Binary Heap
* Heapify
* Priority Queue

### Important concepts

* Complete binary tree
* Array implementation
* Heap sort

### Advanced

* Fibonacci Heap
* Binomial Heap
* Pairing Heap

---

## 7. Multi-way Search Trees

Khi BST không đủ cho disk/database systems.

### Keywords

* B-Tree
* B+ Tree
* M-way tree
* Disk indexing
* Database indexing

### Concepts

* External memory
* Node fanout
* Range query efficiency

### Related systems

* File systems
* Database engines

---

## 8. Trie Family

Cho string/prefix problems.

### Keywords

* Trie
* Prefix tree
* Character node
* Prefix matching
* Autocomplete

### Advanced

* Compressed Trie
* Radix Tree
* Patricia Trie
* Suffix Trie

---

## 9. Segment & Interval Trees

Competitive programming / range query.

### Segment Tree

Keywords:

* Segment Tree
* Range query
* Point update
* Lazy propagation

### Fenwick Tree

Keywords:

* Binary Indexed Tree (BIT)
* Prefix sum
* Lowbit

### Interval structures

* Interval Tree
* Range Tree

---

## 10. Graph-related Tree Concepts

Tree trong graph theory.

### Keywords

* Spanning Tree
* Minimum Spanning Tree
* DFS Tree
* Rooted Tree
* Directed Tree

### Algorithms

* Kruskal
* Prim
* Union-Find (DSU)

---

## 11. Advanced Competitive Programming Trees

### Keywords

* Euler Tour Tree
* Heavy-Light Decomposition (HLD)
* Binary Lifting
* Centroid Decomposition
* Link-Cut Tree
* Persistent Segment Tree

---

## 12. Theoretical / Advanced CS Trees

### Keywords

* Order Statistic Tree
* Cartesian Tree
* KD-Tree
* Quad Tree
* Octree
* R-Tree

### AI / ML / Graphics related

* Decision Tree
* Random Forest
* BVH Tree
* Scene Graph

---

# Recommended Learning Order

## Phase 1 — Absolute Foundation

1. Tree basics
2. Traversal
3. Binary Tree
4. Recursive DFS mindset

---

## Phase 2 — Classical Interview Trees

5. BST
6. Heap
7. AVL
8. Red-Black Tree

---

## Phase 3 — Practical Problem Solving

9. Trie
10. Segment Tree
11. Fenwick Tree
12. LCA / Binary Lifting

---

## Phase 4 — Advanced Systems & CP

13. B-Tree / B+ Tree
14. Treap
15. Splay Tree
16. HLD / Link-Cut Tree

---

# Mindset Map (rất quan trọng)

Có thể chia tree thành 5 mindset lớn:

| Category                   | Main Idea                  |
| -------------------------- | -------------------------- |
| Structural Tree            | recursive hierarchy        |
| Search Tree                | ordered searching          |
| Balanced Tree              | maintain `O(log n)`        |
| Range Query Tree           | interval aggregation       |
| Spatial / Specialized Tree | geometry/database/indexing |

---

# Nếu mục tiêu của bạn là AI Engineer + FAANG

Ưu tiên mạnh:

1. Binary Tree fundamentals
2. BST
3. AVL vs Red-Black
4. Heap / Priority Queue
5. Trie
6. Segment Tree
7. Union-Find
8. LCA / Binary Lifting

Vì đây là những thứ xuất hiện nhiều trong:

* coding interview
* systems
* search/indexing
* ML infrastructure
* retrieval systems
* database internals
