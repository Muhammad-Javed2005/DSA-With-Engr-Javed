#  Data Structures & Algorithms in C++

#  Singly Linked List

A complete collection of **Singly Linked List** programs written in **C++**. This repository contains the most commonly used linked list operations that are taught in **Data Structures & Algorithms (DSA)** courses and frequently asked in coding interviews.

Each operation is implemented in a separate C++ source file with clean, beginner-friendly, and well-structured code for easy understanding.

---

#  Table of Contents

- Introduction
- Features
- Folder Structure
- Operations Included
- Algorithms Covered
- Time Complexity
- Space Complexity
- Prerequisites
- How to Run
- Learning Outcomes
- Applications
- Future Improvements
- Author

---

#  Introduction

A **Singly Linked List** is a dynamic linear data structure where each node contains two parts:

- Data
- Pointer to the next node

Unlike arrays, linked lists do not require contiguous memory allocation, making insertion and deletion operations much more efficient.

This repository is designed for:

-  University students
- 💼 Coding interview preparation
- 📚 DSA practice
- 🚀 Beginners learning Linked Lists

---

# ✨ Features

- Beginner Friendly
- Clean C++ Code
- Separate file for every operation
- Easy to understand implementation
- Well-organized project structure
- Interview-oriented programs
- Covers almost all basic linked list operations

---

# 📂 Folder Structure

```
Singly Linked List/
│
├── 01_create_node.cpp
├── 02_insert_head.cpp
├── 03_insert_end.cpp
├── 04_insert_position.cpp
├── 05_insert_after_value.cpp
├── 06_delete_head.cpp
├── 07_delete_end.cpp
├── 08_delete_position.cpp
├── 09_delete_value.cpp
├── 10_reverse.cpp
├── 11_find_middle.cpp
├── 12_detect_cycle.cpp
│
└── README.md
```

---

# 📚 Operations Included

## 1️⃣ Create Node

**File**

```
01_create_node.cpp
```

Creates a new linked list node dynamically using memory allocation.

---

## 2️⃣ Insert at Head

**File**

```
02_insert_head.cpp
```

Inserts a new node at the beginning of the linked list.

Example

Before

```
20 → 30 → 40
```

After inserting 10

```
10 → 20 → 30 → 40
```

---

## 3️⃣ Insert at End

**File**

```
03_insert_end.cpp
```

Adds a new node at the end of the linked list.

Example

Before

```
10 → 20 → 30
```

After

```
10 → 20 → 30 → 40
```

---

## 4️⃣ Insert at Specific Position

**File**

```
04_insert_position.cpp
```

Inserts a node at any valid index inside the linked list.

---

## 5️⃣ Insert After a Given Value

**File**

```
05_insert_after_value.cpp
```

Searches for a specified value and inserts a new node immediately after it.

---

## 6️⃣ Delete Head Node

**File**

```
06_delete_head.cpp
```

Removes the first node of the linked list.

---

## 7️⃣ Delete End Node

**File**

```
07_delete_end.cpp
```

Deletes the last node from the linked list.

---

## 8️⃣ Delete Node at Position

**File**

```
08_delete_position.cpp
```

Deletes the node located at a specified position.

---

## 9️⃣ Delete Node by Value

**File**

```
09_delete_value.cpp
```

Searches for a node with a specific value and removes it.

---

## 🔟 Reverse Linked List

**File**

```
10_reverse.cpp
```

Reverses the entire linked list.

Example

Before

```
1 → 2 → 3 → 4
```

After

```
4 → 3 → 2 → 1
```

---

## 1️⃣1️⃣ Find Middle Node

**File**

```
11_find_middle.cpp
```

Finds the middle node using the Fast and Slow Pointer Technique.

Time Complexity

```
O(n)
```

Space Complexity

```
O(1)
```

---

## 1️⃣2️⃣ Detect Cycle

**File**

```
12_detect_cycle.cpp
```

Detects whether a linked list contains a cycle using Floyd's Cycle Detection Algorithm (Tortoise and Hare Algorithm).

---

# 🧠 Algorithms Covered

- Dynamic Memory Allocation
- Pointer Manipulation
- Node Traversal
- Fast and Slow Pointer Technique
- Floyd Cycle Detection Algorithm
- Linked List Reversal
- Searching
- Insertion
- Deletion

---

# ⏱ Time Complexity

| Operation | Time Complexity |
|-----------|----------------|
| Create Node | O(1) |
| Insert Head | O(1) |
| Insert End | O(n) |
| Insert Position | O(n) |
| Insert After Value | O(n) |
| Delete Head | O(1) |
| Delete End | O(n) |
| Delete Position | O(n) |
| Delete By Value | O(n) |
| Reverse | O(n) |
| Find Middle | O(n) |
| Detect Cycle | O(n) |

---

# 💾 Space Complexity

| Operation | Space |
|-----------|-------|
| Create Node | O(1) |
| Insert | O(1) |
| Delete | O(1) |
| Reverse | O(1) |
| Find Middle | O(1) |
| Detect Cycle | O(1) |

---

# ⚙️ Prerequisites

- Basic C++
- Functions
- Structures
- Pointers
- Dynamic Memory Allocation

---

# ▶️ How to Run

## Compile

```bash
g++ filename.cpp -o output
```

Example

```bash
g++ 10_reverse.cpp -o reverse
```

Run

```bash
./reverse
```

Windows

```bash
reverse.exe
```

---

# 🎯 Learning Outcomes

After completing this repository, you will be able to:

- Understand Linked List fundamentals
- Create linked list nodes
- Traverse linked lists
- Insert nodes in different positions
- Delete nodes safely
- Reverse a linked list
- Detect loops using Floyd Algorithm
- Find the middle node efficiently
- Improve pointer manipulation skills
- Solve interview-level Linked List questions

---

# 🌍 Real World Applications

Linked Lists are used in:

- Operating Systems
- Memory Management
- Undo/Redo Systems
- Music Players
- Browser History
- Hash Tables
- Graph Representation
- Dynamic Memory Allocation
- File Systems
- Scheduling Algorithms

---

# 🚀 Future Improvements

The following operations can be added in future:

- Merge Two Linked Lists
- Merge Sorted Lists
- Remove Duplicates
- Rotate Linked List
- Palindrome Linked List
- Sort Linked List
- Circular Linked List
- Doubly Linked List
- Polynomial Representation
- LRU Cache Implementation

---

# 🤝 Contributions

Contributions, suggestions, and improvements are always welcome.

If you'd like to improve this repository:

1. Fork the repository
2. Create a new branch
3. Make your changes
4. Commit your changes
5. Open a Pull Request

---

# ⭐ Support

If this repository helped you learn Linked Lists, consider giving it a **⭐ Star** on GitHub.

---

# 👨‍💻 Author

**Engr. Muhammad Javed**

### Connect with me

- GitHub: https://github.com/Muhammad-Javed2005
- LinkedIn: https://www.linkedin.com/in/muhammad-javed-24b262369/

---

## 📜 License

This project is created for educational and learning purposes.

Feel free to use, modify, and share it with proper credit.

---

# ❤️ Happy Coding!
