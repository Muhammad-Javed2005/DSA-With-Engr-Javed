#  Data Structures & Algorithms in C++


#  Recursion in C++

A comprehensive collection of recursion-based problems implemented in **C++**. This repository is designed to help students and programmers understand the fundamentals of recursion through practical examples and coding exercises.

---

##  About the Repository

Recursion is a programming technique where a function calls itself to solve smaller instances of the same problem. It is one of the most important concepts in Data Structures and Algorithms and is widely used in problem-solving, backtracking, divide-and-conquer algorithms, and tree traversals.

This repository contains beginner to intermediate-level recursive problems implemented in C++. Each program demonstrates a different application of recursion and helps build a strong foundation for coding interviews and competitive programming.

---

##  Learning Objectives

By exploring this repository, you will learn:

- Understanding recursive functions
- Base cases and recursive cases
- Breaking complex problems into smaller subproblems
- Recursive searching techniques
- Recursive array operations
- Backtracking concepts
- Problem-solving using recursion
- Algorithm optimization fundamentals

---

##  Technologies Used

| Technology | Purpose |
|------------|----------|
| C++ | Programming Language |
| Recursion | Problem Solving Technique |
| STL | Standard Template Library |
| GCC / G++ | Compilation |

---

##  Repository Structure

```text
Recursion/
│
├── 01_factorial.cpp
├── 02_fibonacci.cpp
├── 03_power.cpp
├── 04_reverse_array.cpp
├── 05_sum_of_digits.cpp
├── 06_binary_search_recursive.cpp
├── 07_tower_of_hanoi.cpp
├── 08_subsets.cpp
├── 09_permutations.cpp
│
└── README.md
```

---

# 📖 Problems Included

---

## 1️⃣ Factorial Using Recursion

**File:** `01_factorial.cpp`

### Description

Calculates the factorial of a number recursively.

### Formula

```text
n! = n × (n-1)!
```

### Example

```text
Input: 5
Output: 120
```

### Concepts Covered

- Recursive calls
- Base condition
- Mathematical recursion

---

## 2️⃣ Fibonacci Series Using Recursion

**File:** `02_fibonacci.cpp`

### Description

Generates Fibonacci numbers using recursion.

### Formula

```text
F(n) = F(n-1) + F(n-2)
```

### Example

```text
Input: 6
Output: 8
```

### Concepts Covered

- Multiple recursive calls
- Recursive tree
- Time complexity understanding

---

## 3️⃣ Power Function Using Recursion

**File:** `03_power.cpp`

### Description

Computes power of a number recursively.

### Example

```text
Input:
Base = 2
Exponent = 5

Output:
32
```

### Concepts Covered

- Mathematical recursion
- Recursive multiplication
- Exponentiation logic

---

## 4️⃣ Reverse Array Using Recursion

**File:** `04_reverse_array.cpp`

### Description

Reverses an array without using loops.

### Example

```text
Input:
1 2 3 4 5

Output:
5 4 3 2 1
```

### Concepts Covered

- Array manipulation
- Recursive swapping
- Two-pointer technique

---

## 5️⃣ Sum of Digits Using Recursion

**File:** `05_sum_of_digits.cpp`

### Description

Finds the sum of digits of a given number recursively.

### Example

```text
Input: 1234

Output: 10
```

### Concepts Covered

- Number decomposition
- Modulus operation
- Recursive digit processing

---

## 6️⃣ Recursive Binary Search

**File:** `06_binary_search_recursive.cpp`

### Description

Searches an element in a sorted array using recursion.

### Example

```text
Input:
Array = [1,2,3,4,5]
Target = 4

Output:
Element Found
```

### Concepts Covered

- Divide and Conquer
- Recursive searching
- Efficient searching algorithms

### Time Complexity

```text
O(log n)
```

---

## 7️⃣ Tower of Hanoi

**File:** `07_tower_of_hanoi.cpp`

### Description

Classic recursive problem involving moving disks between rods while following specific rules.

### Rules

- Only one disk can be moved at a time.
- A larger disk cannot be placed on a smaller disk.
- Use an auxiliary rod for movement.

### Example

```text
Input: 3 Disks

Output:
Move Disk 1 from A to C
Move Disk 2 from A to B
Move Disk 1 from C to B
...
```

### Concepts Covered

- Recursive decomposition
- Problem breakdown
- Mathematical recurrence

---

## 8️⃣ Generate All Subsets

**File:** `08_subsets.cpp`

### Description

Generates all possible subsets of a given set using recursion.

### Example

```text
Input:
[1,2]

Output:
{}
{1}
{2}
{1,2}
```

### Concepts Covered

- Backtracking
- Include/Exclude pattern
- Power set generation

### Time Complexity

```text
O(2^n)
```

---

## 9️⃣ Generate All Permutations

**File:** `09_permutations.cpp`

### Description

Generates all possible permutations of a string or array recursively.

### Example

```text
Input:
ABC

Output:
ABC
ACB
BAC
BCA
CAB
CBA
```

### Concepts Covered

- Backtracking
- Swapping technique
- Recursive state generation

### Time Complexity

```text
O(n!)
```

---

# 🧠 Recursion Workflow

```text
Problem
   │
   ▼
Base Case
   │
   ▼
Recursive Call
   │
   ▼
Smaller Subproblem
   │
   ▼
Solution
```

---

# ⚡ Time Complexity Summary

| Problem | Complexity |
|----------|------------|
| Factorial | O(n) |
| Fibonacci | O(2^n) |
| Power | O(n) |
| Reverse Array | O(n) |
| Sum of Digits | O(log n) |
| Binary Search | O(log n) |
| Tower of Hanoi | O(2^n) |
| Subsets | O(2^n) |
| Permutations | O(n!) |

---

# 🚀 How to Run

### Compile

```bash
g++ filename.cpp -o output
```

### Execute

```bash
./output
```

### Example

```bash
g++ 01_factorial.cpp -o factorial
./factorial
```

---

# 🎓 Who Can Use This Repository?

- Computer Science Students
- DSA Learners
- Competitive Programmers
- Coding Interview Preparation
- Beginners Learning Recursion
- University Assignments

---

# 🌟 Benefits of Practicing These Problems

✅ Strong recursion fundamentals

✅ Better problem-solving skills

✅ Preparation for coding interviews

✅ Understanding of backtracking

✅ Foundation for advanced algorithms

✅ Improved logical thinking

---

# 🔮 Future Enhancements

Planned additions:

- N-Queens Problem
- Rat in a Maze
- Sudoku Solver
- Recursive Linked List Problems
- Recursive Tree Traversals
- Merge Sort
- Quick Sort
- Advanced Backtracking Problems

---

## 🤝 Contributing

Contributions are welcome.

1. Fork the repository
2. Create a new branch
3. Add improvements
4. Commit changes
5. Submit a Pull Request

---

## ⭐ Support

If this repository helped you learn recursion, consider giving it a ⭐ on GitHub.

---

## 👨‍💻 Author

**Muhammad Javed**

Passionate about Data Structures, Algorithms, Software Development, Artificial Intelligence, and Continuous Learning.

---

### Happy Coding! 🚀
### Master Recursion One Problem at a Time 🔁
