#  Basic Array in C++

A beginner-friendly C++ repository containing fundamental Array concepts, algorithms, and problem-solving examples. This repository is designed for students and beginners who want to build a strong foundation in Data Structures and Algorithms (DSA) using Arrays.

---

#  Overview

Arrays are one of the most important data structures in programming. They serve as the foundation for understanding advanced data structures and algorithms. This repository contains multiple C++ programs that demonstrate common array operations, searching techniques, subarray problems, and optimization algorithms.

The goal of this repository is to provide:

- Clear and simple implementations
- Beginner-friendly code
- Well-structured examples
- DSA interview preparation support
- Practical understanding of array operations

---

#  Learning Objectives

After completing this repository, you will be able to:

- Understand Array fundamentals
- Traverse arrays efficiently
- Find minimum and maximum values
- Reverse arrays
- Search elements in arrays
- Calculate sum and product of array elements
- Find intersections of arrays
- Work with subarrays
- Solve Maximum Subarray Sum problems
- Implement Kadane's Algorithm
- Understand pass-by-reference concepts

---

#  Technologies Used

| Technology | Purpose |
|------------|----------|
| C++ | Programming Language |
| STL | Standard Template Library |
| GCC / G++ | Compilation |
| VS Code | Development Environment |

---

#  Repository Structure

```bash
Basic-Array/
│
├── array.cpp
├── loop_on_array.cpp
├── linear_search.cpp
├── reverse_array.cpp
├── min_value_in_array.cpp
├── max_value_in_array.cpp
├── min_and_max.cpp
├── sum_and_product.cpp
├── intersection.cpp
├── Unique_value.cpp
├── Subarray.cpp
├── Maximum_subarray_sum.cpp
├── Kadanes_algorithm.cpp
├── pass_by_reference.cpp
└── README.md
```

---

#  Programs Included

## 1️⃣ Array Creation and Input

### File:
`array.cpp`

### Concepts Covered:
- Array declaration
- Array initialization
- Taking user input
- Displaying array elements

### Time Complexity:
| Operation | Complexity |
|------------|------------|
| Access | O(1) |
| Traversal | O(n) |

---

## 2️⃣ Loop on Array

### File:
`loop_on_array.cpp`

### Concepts Covered:
- Array traversal
- For loops
- Printing elements
- Index-based access

### Time Complexity

```text
O(n)
```

---

## 3️⃣ Linear Search

### File:
`linear_search.cpp`

### Description

Linear Search checks every element one by one until the target element is found.

### Algorithm

1. Start from first index
2. Compare element with target
3. If found, return index
4. Otherwise continue
5. Return not found

### Time Complexity

| Case | Complexity |
|--------|------------|
| Best | O(1) |
| Average | O(n) |
| Worst | O(n) |

### Space Complexity

```text
O(1)
```

---

## 4️⃣ Reverse Array

### File:
`Reverse_array.cpp`

### Description

Reverses the elements of an array using the two-pointer technique.

### Example

Input:

```text
1 2 3 4 5
```

Output:

```text
5 4 3 2 1
```

### Time Complexity

```text
O(n)
```

---

## 5️⃣ Minimum Value in Array

### File:
`min_value_in_array.cpp`

### Concepts Covered

- Finding smallest element
- Iterative comparison
- Traversal

### Time Complexity

```text
O(n)
```

---

## 6️⃣ Maximum Value in Array

### File:
`max_value_in_array.cpp`

### Concepts Covered

- Finding largest element
- Traversing complete array
- Updating maximum value

### Time Complexity

```text
O(n)
```

---

## 7️⃣ Minimum and Maximum Together

### File:
`min_and_max.cpp`

### Description

Find both minimum and maximum values in a single traversal.

### Benefits

- Efficient
- Single loop
- Reduced operations

### Time Complexity

```text
O(n)
```

---

## 8️⃣ Sum and Product of Array

### File:
`sum_and_product.cpp`

### Concepts Covered

- Array aggregation
- Summation
- Multiplication

### Example

Array:

```text
[1,2,3,4]
```

Sum:

```text
10
```

Product:

```text
24
```

### Time Complexity

```text
O(n)
```

---

## 9️⃣ Intersection of Arrays

### File:
`intersection.cpp`

### Description

Find common elements between two arrays.

### Applications

- Data analysis
- Database operations
- Set operations

### Time Complexity

```text
O(n²)
```

*(Depending on implementation)*

---

## 🔟 Unique Value in Array

### File:
`Unique_value.cpp`

### Description

Find the element that appears only once while all others appear multiple times.

### Concepts Covered

- XOR operation
- Bit Manipulation
- Frequency logic

### Example

Input:

```text
1 2 3 2 1
```

Output:

```text
3
```

### Time Complexity

```text
O(n)
```

---

## 1️⃣1️⃣ Subarray Generation

### File:
`Subarray.cpp`

### Description

Generate and display all possible subarrays.

### Formula

Total Number of Subarrays:

```math
n(n+1)/2
```

### Example

Array:

```text
[1,2,3]
```

Subarrays:

```text
[1]
[1,2]
[1,2,3]
[2]
[2,3]
[3]
```

### Time Complexity

```text
O(n³)
```

---

## 1️⃣2️⃣ Maximum Subarray Sum

### File:
`Maximum_subarray_sum.cpp`

### Description

Find the maximum sum among all possible subarrays.

### Approaches

- Brute Force
- Prefix Sum
- Optimized Solutions

### Applications

- Financial Analysis
- Profit Optimization
- Data Analytics

### Time Complexity

```text
O(n³)
```

or

```text
O(n²)
```

depending upon implementation.

---

## 1️⃣3️⃣ Kadane's Algorithm

### File:
`Kadanes_algorithm.cpp`

### Description

An optimized algorithm for finding Maximum Subarray Sum.

### Key Idea

If current sum becomes negative:

```cpp
currentSum = 0;
```

Because a negative sum can never help maximize future results.

### Algorithm Steps

1. Initialize currentSum = 0
2. Initialize maxSum = INT_MIN
3. Traverse array
4. Add current element
5. Update maximum
6. Reset currentSum if negative

### Time Complexity

```text
O(n)
```

### Space Complexity

```text
O(1)
```

---

## 1️⃣4️⃣ Pass By Reference

### File:
`pass_by_reference.cpp`

### Description

Demonstrates how variables can be passed by reference to functions.

### Benefits

- Avoids unnecessary copying
- Faster execution
- Direct modification of original variables

### Example

```cpp
void update(int &x)
{
    x = x + 10;
}
```

---

#  Complexity Summary

| Program | Time Complexity |
|----------|----------------|
| Array | O(1) |
| Loop on Array | O(n) |
| Linear Search | O(n) |
| Reverse Array | O(n) |
| Min Value | O(n) |
| Max Value | O(n) |
| Min & Max | O(n) |
| Sum & Product | O(n) |
| Intersection | O(n²) |
| Unique Value | O(n) |
| Subarray | O(n³) |
| Maximum Subarray Sum | O(n²) - O(n³) |
| Kadane's Algorithm | O(n) |
| Pass by Reference | O(1) |

---

# 🧠 Important DSA Concepts Covered

- Arrays
- Traversal
- Searching
- Two Pointer Technique
- XOR Operations
- Subarrays
- Prefix Sum
- Kadane's Algorithm
- Time Complexity Analysis
- Space Complexity Analysis
- Function Parameters
- Pass By Reference

---

#  How to Run

## Clone Repository

```bash
git clone https://github.com/your-username/Basic-Array.git
```

## Navigate to Project

```bash
cd Basic-Array
```

## Compile

```bash
g++ filename.cpp -o output
```

Example:

```bash
g++ linear_search.cpp -o search
```

## Run

```bash
./search
```

---

#  Who Is This Repository For?

✅ DSA Beginners

✅ University Students

✅ Coding Interview Preparation

✅ Competitive Programming Beginners

✅ C++ Learners

✅ First-Year Computer Science Students

---

#  Future Improvements

- Binary Search
- Prefix Sum Problems
- Sliding Window Techniques
- Array Rotations
- Sorting Algorithms
- STL Vector Implementations
- LeetCode Array Problems
- Interview Questions Collection

---

# 🤝 Contributing

Contributions are welcome.

If you would like to improve the repository:

1. Fork the repository
2. Create a new branch
3. Commit changes
4. Push your branch
5. Open a Pull Request

---

# 📜 License

This project is open-source and available under the MIT License.

---

# 👨‍💻 Author

**Muhammad Javed**

Passionate about:

- Data Structures & Algorithms
- Competitive Programming
- C++
- Problem Solving
- Open Source Development

---

⭐ If you found this repository useful, don't forget to Star the repository.
