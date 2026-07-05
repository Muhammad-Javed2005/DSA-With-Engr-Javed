
# Data Structures & Algorithms in C++

# Doubly Linked List

A complete collection of **Doubly Linked List** programs written in **C++**. This repository contains fundamental and interview-oriented operations implemented separately for easy learning.

---

# Table of Contents

- Introduction
- Features
- Repository Structure
- What is a Doubly Linked List?
- Advantages
- Disadvantages
- Operations
- How to Compile
- Time Complexity
- Space Complexity
- Applications
- Learning Objectives
- Prerequisites
- Future Improvements
- Contributing
- Author
- License

---

# Introduction

A **Doubly Linked List (DLL)** is a linear data structure where each node contains three parts:

- Previous Pointer (`prev`)
- Data
- Next Pointer (`next`)

Unlike a Singly Linked List, a DLL allows traversal in both forward and backward directions.

---

# Features

- Clean C++ implementations
- Beginner friendly
- Separate file for every operation
- Interview preparation
- Well organized
- Easy to understand

---

# Repository Structure

```text
Doubly Linked List/
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
└── 12_detect_cycle.cpp
```

# Advantages
- Bidirectional traversal
- Easy insertion/deletion
- Better navigation

# Disadvantages
- Extra memory for prev pointer
- More pointer updates

# Operations

## 1. Create Node
File: `01_create_node.cpp`

Creates a new node and initializes `prev` and `next`.

### Concepts
- Dynamic Memory Allocation
- Node Initialization

---

## 2. Insert at Head
File: `02_insert_head.cpp`

Time Complexity: **O(1)**

---

## 3. Insert at End
File: `03_insert_end.cpp`

Time Complexity: **O(n)**

---

## 4. Insert at Position
File: `04_insert_position.cpp`

Time Complexity: **O(n)**

---

## 5. Insert After Value
File: `05_insert_after_value.cpp`

Time Complexity: **O(n)**

---

## 6. Delete Head

Time Complexity: **O(1)**

---

## 7. Delete End

Time Complexity: **O(n)**

---

## 8. Delete Position

Time Complexity: **O(n)**

---

## 9. Delete by Value

Time Complexity: **O(n)**

---

## 10. Reverse DLL

Time Complexity: **O(n)**

---

## 11. Find Middle

Uses Slow & Fast pointers.

Time Complexity: **O(n)**

---

## 12. Detect Cycle

Uses Floyd's Algorithm.

Time Complexity: **O(n)**

# How to Compile

```bash
g++ filename.cpp -o output
./output
```

Windows

```bash
output.exe
```

# Time Complexity

|Operation|Time|
|---|---|
|Create|O(1)|
|Insert Head|O(1)|
|Insert End|O(n)|
|Insert Position|O(n)|
|Insert After Value|O(n)|
|Delete Head|O(1)|
|Delete End|O(n)|
|Delete Position|O(n)|
|Delete Value|O(n)|
|Reverse|O(n)|
|Find Middle|O(n)|
|Detect Cycle|O(n)|

# Space Complexity

All operations use **O(1)** auxiliary space.

# Applications

- Browser history
- Undo/Redo
- Music playlist
- Navigation systems
- LRU Cache

# Learning Objectives

- Pointer manipulation
- Bidirectional traversal
- CRUD operations
- Memory management
- Interview preparation

# Prerequisites

- C++
- Pointers
- Structures
- Dynamic Memory

# Future Improvements

- Circular Doubly Linked List
- Merge Lists
- Sort DLL
- Remove Duplicates
- Rotate DLL

# Contributing

Fork, improve, and submit a Pull Request.

# Author

**Muhammad Javed**

GitHub: https://github.com/Muhammad-Javed2005

# License

MIT License.

---

## Happy Coding 🚀
