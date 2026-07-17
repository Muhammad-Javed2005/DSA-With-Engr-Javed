#  Data Structures & Algorithms in C++

# Binary Tree

A complete collection of **Binary Tree** programs written in **C++**.

This repository contains the most important Binary Tree operations that are commonly taught in **Data Structures & Algorithms (DSA)** courses and frequently asked in coding interviews, university practical exams, coding competitions, and software engineering interviews.

Each concept is implemented in a **separate C++ file** with clean, simple, and beginner-friendly code to make learning easier.

---

#  Table of Contents

- Project Overview
- Features
- Binary Tree Topics Covered
- Repository Structure
- Program Descriptions
- Time Complexity
- Space Complexity
- Technologies Used
- Learning Outcomes
- How to Run
- Future Improvements
- Author
- License

---

#  Project Overview

A **Binary Tree** is a hierarchical data structure where each node has at most **two children**, known as the **left child** and **right child**.

Binary Trees are one of the most fundamental data structures in Computer Science and are widely used in:

- Data Structures
- Algorithms
- Databases
- Artificial Intelligence
- Operating Systems
- Compilers
- Networking
- File Systems
- Expression Trees
- Search Algorithms

This repository demonstrates the implementation of the most common Binary Tree algorithms using C++.

Every program is separated into an individual file so beginners can understand each concept independently.

---

#  Features

✔ Clean and Easy-to-Understand Code

✔ Beginner Friendly

✔ Separate Program for Every Operation

✔ Well Structured Repository

✔ Standard C++ Implementation

✔ Interview Preparation

✔ University Practical Preparation

✔ DSA Learning Resource

✔ Easy to Modify and Extend

---

#  Binary Tree Topics Covered

This repository currently contains implementations of:

- Create Binary Tree
- Insert Node
- Inorder Traversal
- Preorder Traversal
- Postorder Traversal
- Level Order Traversal
- Height of Tree
- Count Total Nodes
- Count Leaf Nodes
- Diameter of Binary Tree
- Check Balanced Tree
- Lowest Common Ancestor (LCA)
- Mirror Binary Tree

---

#  Repository Structure

```
Binary Tree/
│
├── 01_create_node.cpp
├── 02_insert.cpp
├── 03_inorder.cpp
├── 04_preorder.cpp
├── 05_postorder.cpp
├── 06_level_order.cpp
├── 07_height.cpp
├── 08_count_nodes.cpp
├── 09_count_leaf_nodes.cpp
├── 10_diameter.cpp
├── 11_is_balanced.cpp
├── 12_lca.cpp
├── 13_mirror.cpp
│
└── README.md
```

---

#  Program Descriptions

## 01. Create Node

Creates a Binary Tree node containing:

- Data
- Left Pointer
- Right Pointer

Topics Covered:

- Dynamic Memory Allocation
- Node Structure
- Constructor

---

## 02. Insert Node

Implements insertion into a Binary Tree.

Topics Covered:

- Recursive Insertion
- Tree Construction

---

## 03. Inorder Traversal

Traverses the tree in:

Left → Root → Right

Example:

```
4 2 5 1 6 3 7
```

---

## 04. Preorder Traversal

Traverses the tree in:

Root → Left → Right

Example:

```
1 2 4 5 3 6 7
```

---

## 05. Postorder Traversal

Traverses the tree in:

Left → Right → Root

Example:

```
4 5 2 6 7 3 1
```

---

## 06. Level Order Traversal

Traverses nodes level by level using a Queue.

Topics Covered:

- Queue
- Breadth First Search (BFS)

---

## 07. Height of Tree

Calculates the maximum height (depth) of the Binary Tree.

Topics Covered:

- Recursion
- Divide and Conquer

---

## 08. Count Total Nodes

Counts every node present in the Binary Tree.

Example:

```
Total Nodes = 7
```

---

## 09. Count Leaf Nodes

Counts nodes having no children.

Example:

```
Leaf Nodes = 4
```

---

## 10. Diameter of Binary Tree

Calculates the longest path between any two nodes.

Topics Covered:

- Height Calculation
- Recursive Algorithm

---

## 11. Check Balanced Tree

Determines whether the Binary Tree is height-balanced.

Balanced Tree:

```
Height Difference ≤ 1
```

---

## 12. Lowest Common Ancestor (LCA)

Finds the nearest common ancestor of two nodes.

Applications:

- Network Routing
- File Systems
- Tree Queries

---

## 13. Mirror Binary Tree

Converts the tree into its mirror image.

Example:

Original:

```
      1
     / \
    2   3
```

Mirror:

```
      1
     / \
    3   2
```

---

#  Time Complexity

| Operation | Time Complexity |
|------------|----------------|
| Create Node | O(1) |
| Insert Node | O(n) |
| Inorder Traversal | O(n) |
| Preorder Traversal | O(n) |
| Postorder Traversal | O(n) |
| Level Order Traversal | O(n) |
| Height | O(n) |
| Count Nodes | O(n) |
| Count Leaf Nodes | O(n) |
| Diameter | O(n) (Optimized) |
| Balanced Tree | O(n) |
| LCA | O(n) |
| Mirror Tree | O(n) |

---

#  Space Complexity

| Operation | Space Complexity |
|------------|-----------------|
| Traversals | O(h) |
| Height | O(h) |
| Count Nodes | O(h) |
| Diameter | O(h) |
| Balanced Tree | O(h) |
| Mirror Tree | O(h) |

Where:

```
h = Height of Binary Tree
```

Worst Case:

```
O(n)
```

Balanced Tree:

```
O(log n)
```

---

#  Technologies Used

- C++
- Object-Oriented Programming
- Recursion
- Queue (STL)
- Standard Template Library (STL)
- Dynamic Memory Allocation

---

#  Learning Outcomes

After completing this repository, you will understand:

- Binary Tree Fundamentals
- Node Creation
- Tree Construction
- Recursive Algorithms
- Tree Traversals
- Breadth First Search (BFS)
- Tree Height
- Counting Nodes
- Leaf Nodes
- Diameter Calculation
- Balanced Tree Checking
- Lowest Common Ancestor (LCA)
- Mirror Trees
- Tree Problem Solving

---

# ▶ How to Run

### Clone Repository

```bash
git clone https://github.com/your-username/Binary-Tree.git
```

---

### Move into Repository

```bash
cd Binary-Tree
```

---

### Compile

```bash
g++ 01_create_node.cpp -o output
```

---

### Run

```bash
./output
```

Windows

```bash
output.exe
```

Repeat for any source file.

---

#  Who Can Use This Repository?

This repository is useful for:

- Computer Science Students
- Software Engineering Students
- Beginners Learning DSA
- Coding Interview Preparation
- University Practical Exams
- Competitive Programming

---

#  Future Improvements

Some additional Binary Tree algorithms that can be added in the future:

- Binary Search Tree (BST)
- AVL Tree
- Red Black Tree
- Morris Traversal
- Boundary Traversal
- Zig-Zag Traversal
- Vertical Order Traversal
- Top View
- Bottom View
- Left View
- Right View
- Serialize Binary Tree
- Deserialize Binary Tree
- Maximum Width
- Sum Tree
- Build Tree from Traversals
- Binary Tree to Doubly Linked List

---

#  Contributions

Contributions, improvements, and suggestions are always welcome.

If you would like to improve this repository:

1. Fork the repository
2. Create a new branch
3. Commit your changes
4. Submit a Pull Request

---

#  Author

**Engr. Muhammad Javed**

Software Engineering Student

Passionate about:

- Data Structures & Algorithms
- Artificial Intelligence
- Machine Learning
- Deep Learning
- Computer Vision
- Python Development
- C++ Programming

GitHub:
https://github.com/Muhammad-Javed2005

---

# ⭐ Support

If this repository helps you learn Binary Trees, consider giving it a ⭐ on GitHub.

Your support motivates me to create more high-quality educational repositories.

---

#  License

This project is released under the **MIT License**.

You are free to use, modify, and distribute this project for educational and personal purposes.

---

# 📚 Happy Coding!

> **"The best way to master Data Structures is to implement every concept from scratch."**
