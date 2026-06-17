# Data Structures & Algorithms in C++

# Queue Data Structure in C++

<div align="center">

#  08 - Queue

![C++](https://img.shields.io/badge/Language-C%2B%2B-blue?style=for-the-badge\&logo=cplusplus)
![DSA](https://img.shields.io/badge/Data%20Structures-Queue-success?style=for-the-badge)
![Level](https://img.shields.io/badge/Level-Beginner%20to%20Intermediate-orange?style=for-the-badge)

A complete collection of Queue Data Structure implementations and problem-solving examples in C++.

</div>

---

#  Overview

This repository contains fundamental and practical implementations of the **Queue Data Structure** using C++. It covers queue creation, STL queue usage, circular queues, sliding window techniques, stream processing, and common interview problems.

The purpose of this repository is to help learners understand:

* What is a Queue?
* How Queue works internally
* Queue Operations
* Queue using Arrays
* Queue using STL
* Circular Queue
* Real-world applications of Queue
* Interview-based Queue Problems

---

#  What is a Queue?

A **Queue** is a linear data structure that follows the **FIFO (First In First Out)** principle.

This means:

> The element inserted first will be removed first.

### Example

```text
Enqueue 10
Enqueue 20
Enqueue 30

Queue:

Front → 10 20 30 ← Rear

Dequeue()

Removed: 10
```

---

#  Applications of Queue

Queues are widely used in:

* CPU Scheduling
* Printer Scheduling
* Process Management
* Task Scheduling
* Network Packet Handling
* Breadth First Search (BFS)
* Call Center Systems
* Ticket Reservation Systems
* Message Queues
* Simulation Systems

---

#  Queue Operations

### Enqueue

Adds an element at the rear.

```cpp
q.push(10);
```

### Dequeue

Removes the front element.

```cpp
q.pop();
```

### Front

Returns the front element.

```cpp
q.front();
```

### Back

Returns the rear element.

```cpp
q.back();
```

### Empty

Checks whether queue is empty.

```cpp
q.empty();
```

### Size

Returns number of elements.

```cpp
q.size();
```

---

#  Repository Structure

```text
08_Queue/
│
├── 01_queue_array.cpp
├── 02_queue_stl.cpp
├── 03_circular_queue.cpp
├── 04_sliding_window_maximum.cpp
├── 05_first_non_repeating.cpp
└── README.md
```

---

#  Implemented Programs

## 1️⃣ Queue Using Array

📄 File:

```text
01_queue_array.cpp
```

### Concepts Covered

* Array Based Queue
* Enqueue Operation
* Dequeue Operation
* Front Element
* Queue Overflow
* Queue Underflow

### Time Complexity

| Operation | Complexity |
| --------- | ---------- |
| Enqueue   | O(1)       |
| Dequeue   | O(1)       |
| Front     | O(1)       |

### Learning Outcome

Understand how Queue works internally without using STL.

---

## 2️⃣ Queue Using STL

📄 File:

```text
02_queue_stl.cpp
```

### Concepts Covered

* STL Queue Container
* Push
* Pop
* Front
* Back
* Empty
* Size

### Example

```cpp
queue<int> q;

q.push(10);
q.push(20);
q.push(30);

cout << q.front();
```

### Time Complexity

| Operation | Complexity |
| --------- | ---------- |
| Push      | O(1)       |
| Pop       | O(1)       |
| Front     | O(1)       |
| Back      | O(1)       |

### Learning Outcome

Learn how to use C++ STL Queue efficiently.

---

## 3️⃣ Circular Queue

📄 File:

```text
03_circular_queue.cpp
```

### Problem Statement

Implement a Circular Queue to efficiently utilize unused spaces in the array.

### Example

```text
Queue Size = 5

Front = 2
Rear = 4

After Wrap Around:

Rear = 0
```

### Advantages

* Better Memory Utilization
* No Data Shifting
* Efficient Operations

### Time Complexity

```text
Enqueue : O(1)
Dequeue : O(1)
```

### Interview Importance

⭐⭐⭐⭐⭐

Frequently asked in DSA and Operating System interviews.

---

## 4️⃣ Sliding Window Maximum

📄 File:

```text
04_sliding_window_maximum.cpp
```

### Problem Statement

Given an array and window size K, find the maximum element in every window.

### Example

```text
Input:
[1,3,-1,-3,5,3,6,7]

K = 3

Output:
[3,3,5,5,6,7]
```

### Approach

* Use Deque
* Maintain useful elements only
* Remove smaller elements from back
* Remove out-of-window elements from front

### Time Complexity

```text
O(n)
```

### Space Complexity

```text
O(k)
```

### Interview Importance

⭐⭐⭐⭐⭐

One of the most famous Queue/Deque interview questions.

---

## 5️⃣ First Non-Repeating Character in Stream

📄 File:

```text
05_first_non_repeating.cpp
```

### Problem Statement

Given a stream of characters, print the first non-repeating character after each insertion.

### Example

```text
Input:
a a b c

Output:
a # b b
```

### Approach

* Use Queue
* Use Frequency Array
* Remove repeating characters from front

### Time Complexity

```text
O(n)
```

### Space Complexity

```text
O(n)
```

### Real World Usage

* Live Chat Systems
* Streaming Data
* Event Processing
* Character Stream Analysis

---

#  Complexity Summary

| Problem                       | Time Complexity | Space Complexity |
| ----------------------------- | --------------- | ---------------- |
| Queue Array                   | O(1)            | O(n)             |
| Queue STL                     | O(1)            | O(n)             |
| Circular Queue                | O(1)            | O(n)             |
| Sliding Window Maximum        | O(n)            | O(k)             |
| First Non-Repeating Character | O(n)            | O(n)             |

---

#  Learning Path

```text
1. Queue Using Array
        ↓
2. Queue Using STL
        ↓
3. Circular Queue
        ↓
4. First Non-Repeating Character
        ↓
5. Sliding Window Maximum
```

---

#  Interview Questions Related to Queue

* Implement Queue using Array
* Implement Queue using Linked List
* Circular Queue
* Queue using Two Stacks
* Stack using Two Queues
* First Non-Repeating Character
* Sliding Window Maximum
* Rotten Oranges
* BFS Traversal
* Generate Binary Numbers using Queue

---

#  Key Takeaways

✅ Queue follows FIFO Principle

✅ Enqueue and Dequeue operations are O(1)

✅ Queue is heavily used in BFS

✅ Circular Queue improves memory utilization

✅ Sliding Window Maximum is a must-know interview problem

✅ Queue is one of the most important linear data structures

---

#  Author

### Muhammad Javed

**Software Engineering Student**
**Data Structures & Algorithms Learner**
**C++ Developer**

GitHub: https://github.com/Muhammad-Javed2005

---

<div align="center">

### ⭐ If you found this repository helpful, don't forget to star it!

Happy Coding 🚀

</div>
