#  Data Structures & Algorithms in C++


#  2D Array in C++

A comprehensive collection of **2D Array (Matrix) programs in C++** covering fundamental operations, searching, matrix transformation, rotation, and traversal techniques. This repository is designed for students, beginners, and coding interview preparation.

---

##  Overview

This repository demonstrates the implementation of commonly used **2D Array algorithms** in C++. Each program focuses on a specific matrix operation and helps strengthen understanding of multidimensional arrays and matrix manipulation techniques.

The project includes:

- Matrix Input and Output
- Element Searching
- Matrix Transpose
- 90° Matrix Rotation
- Spiral Traversal
- Practical Matrix Manipulation Techniques

---

##  Learning Objectives

After completing these programs, you will understand:

- How 2D arrays are stored in memory
- Matrix traversal techniques
- Searching elements in matrices
- Matrix transformation operations
- Transpose concepts
- Matrix rotation algorithms
- Spiral order traversal
- Time and Space Complexity analysis

---

#  Repository Structure

```text
2D-array/
│
├── 01_insert_print.cpp
├── 02_search.cpp
├── 03_transpose.cpp
├── 04_rotate_90.cpp
├── 05_spiral_print.cpp
│
└── README.md
```

---

#  Technologies Used

- Language: C++
- Compiler: GCC / G++
- IDE: VS Code / CodeBlocks / Dev C++
- Standard: C++11 or Higher

---

#  Program Details

---

## 1️⃣ Insert and Print Elements

### File

```cpp
01_insert_print.cpp
```

### Description

This program demonstrates how to:

- Create a 2D array
- Take user input
- Store matrix values
- Display matrix elements

### Example

Input:

```text
1 2 3
4 5 6
7 8 9
```

Output:

```text
1 2 3
4 5 6
7 8 9
```

### Concepts Covered

- Nested Loops
- Matrix Input
- Matrix Output
- Row and Column Traversal

### Time Complexity

```text
O(rows × columns)
```

### Space Complexity

```text
O(rows × columns)
```

---

## 2️⃣ Search Element in Matrix

### File

```cpp
02_search.cpp
```

### Description

This program searches for a specific element inside a matrix and displays whether the element exists.

### Example

Matrix:

```text
1 2 3
4 5 6
7 8 9
```

Search:

```text
5
```

Output:

```text
Element Found
```

### Concepts Covered

- Linear Search
- Matrix Traversal
- Conditional Statements

### Algorithm

1. Traverse every row.
2. Traverse every column.
3. Compare current element with target.
4. If matched, return found.
5. Otherwise continue searching.

### Time Complexity

```text
O(rows × columns)
```

### Space Complexity

```text
O(1)
```

---

## 3️⃣ Matrix Transpose

### File

```cpp
03_transpose.cpp
```

### Description

This program calculates the transpose of a matrix.

Transpose means converting rows into columns and columns into rows.

### Example

Original Matrix:

```text
1 2 3
4 5 6
```

Transpose:

```text
1 4
2 5
3 6
```

### Mathematical Representation

```text
A[i][j] → A[j][i]
```

### Concepts Covered

- Matrix Transformation
- Nested Loops
- Matrix Manipulation

### Applications

- Computer Graphics
- Data Processing
- Linear Algebra
- Machine Learning

### Time Complexity

```text
O(rows × columns)
```

### Space Complexity

```text
O(rows × columns)
```

---

## 4️⃣ Rotate Matrix by 90 Degrees

### File

```cpp
04_rotate_90.cpp
```

### Description

This program rotates a square matrix by **90 degrees clockwise**.

### Example

Original Matrix

```text
1 2 3
4 5 6
7 8 9
```

Rotated Matrix

```text
7 4 1
8 5 2
9 6 3
```

### Rotation Process

#### Step 1

Take transpose of matrix.

```text
1 4 7
2 5 8
3 6 9
```

#### Step 2

Reverse every row.

```text
7 4 1
8 5 2
9 6 3
```

### Concepts Covered

- Matrix Rotation
- Transpose
- Reversal Technique

### Applications

- Image Processing
- Computer Vision
- Game Development
- Graphics Programming

### Time Complexity

```text
O(N²)
```

### Space Complexity

```text
O(1)
```

---

## 5️⃣ Spiral Print Matrix

### File

```cpp
05_spiral_print.cpp
```

### Description

This program prints matrix elements in spiral order.

### Example

Matrix

```text
1  2  3  4
5  6  7  8
9 10 11 12
13 14 15 16
```

Output

```text
1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
```

### Spiral Traversal Pattern

```text
→ → → ↓
↑       ↓
↑       ↓
← ← ← ←
```

### Concepts Covered

- Boundary Traversal
- Matrix Navigation
- Direction Control
- Nested Loops

### Applications

- Matrix Problems
- Competitive Programming
- Interview Questions

### Time Complexity

```text
O(rows × columns)
```

### Space Complexity

```text
O(1)
```

---

#  Key Concepts Covered

This repository covers:

- 2D Arrays
- Matrix Traversal
- Matrix Search
- Matrix Transformation
- Matrix Rotation
- Spiral Traversal
- Nested Loops
- Array Manipulation
- Coordinate-Based Access
- Interview Preparation

---

#  How to Run

### Clone Repository

```bash
git clone https://github.com/your-username/2D-array.git
```

### Move Into Directory

```bash
cd 2D-array
```

### Compile Program

```bash
g++ filename.cpp -o output
```

Example:

```bash
g++ 04_rotate_90.cpp -o rotate
```

### Run Program

```bash
./rotate
```

---

#  Prerequisites

Before using this repository, you should know:

- C++ Basics
- Variables
- Loops
- Functions
- Arrays
- Nested Loops

---

#  Educational Value

This repository is ideal for:

- Beginners Learning C++
- DSA Students
- University Assignments
- Coding Practice
- Interview Preparation
- Competitive Programming Beginners

---

# 🔥 Future Improvements

Possible future additions:

- Matrix Multiplication
- Matrix Addition
- Matrix Subtraction
- Diagonal Traversal
- Zig-Zag Traversal
- Wave Traversal
- Boundary Traversal
- Sparse Matrix Operations
- Determinant Calculation

---

# 🤝 Contributing

Contributions are welcome.

1. Fork the repository
2. Create a new branch
3. Make improvements
4. Commit changes
5. Submit a Pull Request

---

# ⭐ Support

If you found this repository useful:

- Star the repository
- Fork the project
- Share it with others

---

# 👨‍💻 Author

**Muhammad Javed**

GitHub: https://github.com/Muhammad-Javed2005

---

## 📜 License

This project is open-source and available under the MIT License.

Happy Coding! 🚀
