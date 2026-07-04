#  Linked List in C++

A complete collection of **Singly Linked List** programs written in **C++**. This repository contains the most common linked list operations that are frequently taught in **Data Structures & Algorithms (DSA)** courses and asked in coding interviews.

Each operation is implemented in a separate file with simple, clean, and easy-to-understand code.

---

#  Table of Contents

- Introduction
- Features
- Repository Structure
- Linked List Operations
- How to Run
- Time Complexity
- Space Complexity
- Learning Objectives
- Prerequisites
- Future Improvements
- Contributing
- Author
- License

---

#  Introduction

A **Linked List** is a linear data structure where each element (called a node) contains:

- Data
- Pointer to the next node

Unlike arrays, linked lists do not require contiguous memory allocation and allow dynamic memory management.

This repository covers the fundamental operations of a Singly Linked List using C++.

---

#  Features

✔ Clean C++ Code

✔ Beginner Friendly

✔ Separate Program for Each Operation

✔ Easy to Understand

✔ Interview Preparation

✔ DSA Practice

✔ Well Organized Repository

---

#  Repository Structure

```
Linked-List/
│
├── 01_create_node.cpp
├── 02_insert_head.cpp
├── 03_insert_end.cpp
├── 04_insert_position.cpp
├── 05_insert_after_value.cpp
├── 06_delete_head.cpp
├── 07_delete_last.cpp
├── 08_delete_position.cpp
├── 09_delete_value.cpp
├── 10_reverse.cpp
├── 11_find_middle.cpp
├── 12_detect_cycle.cpp
└── README.md
```

---

# 🧠 Linked List Operations

## 1️⃣ Create Node

**File**

```
01_create_node.cpp
```

### Description

Creates a new node dynamically using memory allocation.

### Concepts Covered

- Dynamic Memory Allocation
- Node Creation
- Pointer Initialization

---

## 2️⃣ Insert at Head

**File**

```
02_insert_head.cpp
```

### Description

Inserts a new node at the beginning of the linked list.

### Time Complexity

```
O(1)
```

---

## 3️⃣ Insert at End

**File**

```
03_insert_end.cpp
```

### Description

Adds a new node at the end of the linked list.

### Time Complexity

```
O(n)
```

---

## 4️⃣ Insert at Specific Position

**File**

```
04_insert_position.cpp
```

### Description

Inserts a new node at a given position.

### Time Complexity

```
O(n)
```

---

## 5️⃣ Insert After Specific Value

**File**

```
05_insert_after_value.cpp
```

### Description

Searches for a value and inserts a new node immediately after it.

### Time Complexity

```
O(n)
```

---

## 6️⃣ Delete Head Node

**File**

```
06_delete_head.cpp
```

### Description

Removes the first node from the linked list.

### Time Complexity

```
O(1)
```

---

## 7️⃣ Delete Last Node

**File**

```
07_delete_last.cpp
```

### Description

Deletes the last node of the linked list.

### Time Complexity

```
O(n)
```

---

## 8️⃣ Delete Node at Position

**File**

```
08_delete_position.cpp
```

### Description

Deletes a node located at a specific position.

### Time Complexity

```
O(n)
```

---

## 9️⃣ Delete Node by Value

**File**

```
09_delete_value.cpp
```

### Description

Searches for a node with a specific value and deletes it.

### Time Complexity

```
O(n)
```

---

## 🔟 Reverse Linked List

**File**

```
10_reverse.cpp
```

### Description

Reverses the linked list by changing pointer directions.

### Time Complexity

```
O(n)
```

### Space Complexity

```
O(1)
```

---

## 1️⃣1️⃣ Find Middle Node

**File**

```
11_find_middle.cpp
```

### Description

Finds the middle node using the Fast and Slow Pointer technique.

### Time Complexity

```
O(n)
```

### Space Complexity

```
O(1)
```

---

## 1️⃣2️⃣ Detect Cycle

**File**

```
12_detect_cycle.cpp
```

### Description

Detects whether the linked list contains a cycle using Floyd's Cycle Detection Algorithm (Tortoise and Hare Algorithm).

### Time Complexity

```
O(n)
```

### Space Complexity

```
O(1)
```

---

# ⚙️ How to Compile

Using **g++**

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

For Windows

```bash
reverse.exe
```

---

# ⏱ Time Complexity Summary

| Operation | Complexity |
|-----------|------------|
| Create Node | O(1) |
| Insert Head | O(1) |
| Insert End | O(n) |
| Insert Position | O(n) |
| Insert After Value | O(n) |
| Delete Head | O(1) |
| Delete Last | O(n) |
| Delete Position | O(n) |
| Delete Value | O(n) |
| Reverse | O(n) |
| Find Middle | O(n) |
| Detect Cycle | O(n) |

---

# 💾 Space Complexity Summary

| Operation | Space |
|-----------|-------|
| Create Node | O(1) |
| Insert Head | O(1) |
| Insert End | O(1) |
| Insert Position | O(1) |
| Insert After Value | O(1) |
| Delete Head | O(1) |
| Delete Last | O(1) |
| Delete Position | O(1) |
| Delete Value | O(1) |
| Reverse | O(1) |
| Find Middle | O(1) |
| Detect Cycle | O(1) |

---

# 🎯 Learning Objectives

By completing this repository, you will learn:

- Dynamic Memory Allocation
- Pointers
- Node Structure
- Linked List Traversal
- Insertion Operations
- Deletion Operations
- Searching
- Pointer Manipulation
- Fast & Slow Pointer Technique
- Floyd's Cycle Detection Algorithm
- Interview-Level Linked List Problems

---

# 🛠 Prerequisites

- Basic C++
- Functions
- Loops
- Classes & Structures
- Pointers
- Dynamic Memory Allocation

---

# 🚀 Future Improvements

Some additional linked list problems that can be added in the future:

- Doubly Linked List
- Circular Linked List
- Merge Two Sorted Lists
- Merge K Lists
- Remove Duplicates
- Palindrome Linked List
- Rotate Linked List
- Sort Linked List
- Intersection of Two Lists
- Remove Nth Node From End
- Add Two Numbers
- Partition List
- Swap Nodes
- Clone Linked List
- Flatten Linked List

---

# 🤝 Contributing

Contributions are welcome!

If you'd like to improve the code or add more linked list algorithms:

1. Fork the repository.
2. Create a new branch.
3. Commit your changes.
4. Push to your branch.
5. Open a Pull Request.

---

# 👨‍💻 Author

**Muhammad Javed**

Computer Science Student

Passionate about:

- Data Structures & Algorithms
- C++
- Artificial Intelligence
- Machine Learning
- Software Development

GitHub:
> https://github.com/Muhammad-Javed2005

---

# ⭐ Support

If you found this repository helpful:

⭐ Star the repository

🍴 Fork it

📢 Share it with others

---

# 📄 License

This project is licensed under the **MIT License**.

Feel free to use, modify, and distribute it for learning and educational purposes.

---

## Happy Coding! 🚀
