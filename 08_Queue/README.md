#  Data Structures & Algorithms in C++


# Queue Data Structure

This folder contains the implementation and practice problems related to the Queue Data Structure in C++.

---

#  Topics Covered

- Introduction to Queue
- Queue using Array
- Queue using STL
- Circular Queue
- Sliding Window Maximum
- First Non-Repeating Character in Stream

---

#  Files Included

| File Name | Description |
|------------|-------------|
| `01_queue_array.cpp` | Queue implementation using Array |
| `02_queue_stl.cpp` | Queue implementation using STL Queue |
| `03_circular_queue.cpp` | Circular Queue implementation |
| `04_sliding_window_maximum.cpp` | Sliding Window Maximum Problem |
| `05_first_non_repeating.cpp` | First Non-Repeating Character in Stream |
| `README.md` | Documentation |

---

# 1️⃣ Queue Using Array

## Description

A Queue follows the FIFO (First In First Out) principle.

### Operations

- Enqueue
- Dequeue
- Front
- Empty
- Size

### Time Complexity

| Operation | Complexity |
|------------|------------|
| Enqueue | O(1) |
| Dequeue | O(1) |
| Front | O(1) |

---

# 2️⃣ Queue Using STL

```cpp
#include <queue>
```

Common Functions:

```cpp
q.push(x);
q.pop();
q.front();
q.back();
q.empty();
q.size();
```

---

# 3️⃣ Circular Queue

A Circular Queue reuses empty spaces efficiently using modulo arithmetic.

---

# 4️⃣ Sliding Window Maximum

Input:

```text
Array = [1,3,-1,-3,5,3,6,7]
k = 3
```

Output:

```text
[3,3,5,5,6,7]
```

Complexity:

- Time: O(n)
- Space: O(k)

---

# 5️⃣ First Non-Repeating Character in Stream

Uses Queue + Frequency Array/HashMap.

Complexity:

- Time: O(n)
- Space: O(n)

---

# Queue Applications

- CPU Scheduling
- Process Management
- BFS Traversal
- Printer Scheduling
- Task Scheduling
- Network Packet Handling

---

# Repository Structure

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

## Author

Muhammad Javed

DSA With Engr-Javed
