#  Data Structures & Algorithms in C++


#  Stack Data Structure in C++

<div align="center">

#  07 - Stack

![C++](https://img.shields.io/badge/Language-C%2B%2B-blue?style=for-the-badge&logo=cplusplus)
![DSA](https://img.shields.io/badge/Data%20Structures-Stack-success?style=for-the-badge)
![Level](https://img.shields.io/badge/Level-Beginner%20to%20Intermediate-orange?style=for-the-badge)

A complete collection of Stack Data Structure implementations and problem-solving examples in C++.

</div>

---

#  Overview

This repository contains fundamental and practical implementations of the **Stack Data Structure** using C++. It covers stack creation, STL stack usage, expression handling, string manipulation, and common interview problems.

The purpose of this repository is to help learners understand:

- What is a Stack?
- How Stack works internally
- Stack Operations
- Stack using Arrays
- Stack using STL
- Real-world applications of Stack
- Interview-based Stack Problems

---

#  What is a Stack?

A **Stack** is a linear data structure that follows the **LIFO (Last In First Out)** principle.

This means:

> The element inserted last will be removed first.

### Example

```text
Push 10
Push 20
Push 30

Stack:

| 30 | ← Top
| 20 |
| 10 |

Pop()

Removed: 30
```

---

#  Applications of Stack

Stacks are widely used in:

- Function Calls
- Recursion
- Expression Evaluation
- Syntax Parsing
- Browser History
- Undo/Redo Operations
- Backtracking Algorithms
- Parentheses Matching
- String Reversal
- Compiler Design

---

#  Stack Operations

### Push

Adds an element to the top.

```cpp
stack.push(10);
```

---

### Pop

Removes the top element.

```cpp
stack.pop();
```

---

### Top

Returns the top element.

```cpp
stack.top();
```

---

### Empty

Checks whether stack is empty.

```cpp
stack.empty();
```

---

### Size

Returns number of elements.

```cpp
stack.size();
```

---

#  Repository Structure

```text
07_Stack/
│
├── 01_stack_array.cpp
├── 02_stack_stl.cpp
├── 03_valid_parentheses.cpp
├── 04_reverse_string.cpp
├── 05_next_greater_element.cpp
├── 06_infix_to_postfix.cpp
└── README.md
```

---

#  Implemented Programs

---

## 1️⃣ Stack Using Array

📄 File:

```text
01_stack_array.cpp
```

### Concepts Covered

- Array-based Stack
- Push Operation
- Pop Operation
- Peek Operation
- Overflow Handling
- Underflow Handling

### Time Complexity

| Operation | Complexity |
|------------|------------|
| Push | O(1) |
| Pop | O(1) |
| Peek | O(1) |

### Learning Outcome

Understand how Stack works internally without STL.

---

## 2️⃣ Stack Using STL

📄 File:

```text
02_stack_stl.cpp
```

### Concepts Covered

- STL Stack Container
- Push
- Pop
- Top
- Empty
- Size

### Example

```cpp
stack<int> st;

st.push(10);
st.push(20);
st.push(30);

cout << st.top();
```

### Time Complexity

| Operation | Complexity |
|------------|------------|
| Push | O(1) |
| Pop | O(1) |
| Top | O(1) |

### Learning Outcome

Learn how to use the built-in C++ Stack library efficiently.

---

## 3️⃣ Valid Parentheses

📄 File:

```text
03_valid_parentheses.cpp
```

### Problem Statement

Check whether a string containing:

```text
()
{}
[]
```

is balanced or not.

### Example

```text
Input:
({[]})

Output:
Valid
```

### Approach

- Push opening brackets into stack.
- Compare closing brackets with stack top.
- Return valid if all brackets match.

### Time Complexity

```text
O(n)
```

### Space Complexity

```text
O(n)
```

### Interview Importance

⭐⭐⭐⭐⭐

One of the most common stack interview questions.

---

## 4️⃣ Reverse String Using Stack

📄 File:

```text
04_reverse_string.cpp
```

### Problem Statement

Reverse a string using Stack.

### Example

```text
Input:
HELLO

Output:
OLLEH
```

### Approach

- Push every character into stack.
- Pop all characters.
- Build reversed string.

### Time Complexity

```text
O(n)
```

### Space Complexity

```text
O(n)
```

### Learning Outcome

Understanding LIFO behavior through string manipulation.

---

## 5️⃣ Next Greater Element

📄 File:

```text
05_next_greater_element.cpp
```

### Problem Statement

For every element in an array, find the first greater element on its right side.

### Example

```text
Input:
[4,5,2,10]

Output:
[5,10,10,-1]
```

### Approach

Use a Monotonic Stack.

### Time Complexity

```text
O(n)
```

### Space Complexity

```text
O(n)
```

### Interview Importance

⭐⭐⭐⭐⭐

Frequently asked in:

- Amazon
- Google
- Microsoft
- Meta

---

## 6️⃣ Infix to Postfix Conversion

📄 File:

```text
06_infix_to_postfix.cpp
```

### Problem Statement

Convert an Infix Expression into Postfix Expression.

### Example

```text
Infix:
A+B*C

Postfix:
ABC*+
```

### Operator Precedence

| Operator | Priority |
|-----------|-----------|
| ^ | 3 |
| * / | 2 |
| + - | 1 |

### Approach

- Scan expression from left to right.
- Use stack to store operators.
- Follow precedence rules.
- Generate postfix expression.

### Time Complexity

```text
O(n)
```

### Space Complexity

```text
O(n)
```

### Real World Usage

- Compiler Design
- Expression Evaluation
- Calculators
- Parsing Engines

---

# 📊 Complexity Summary

| Problem | Time Complexity | Space Complexity |
|----------|----------------|------------------|
| Stack Array | O(1) | O(n) |
| Stack STL | O(1) | O(n) |
| Valid Parentheses | O(n) | O(n) |
| Reverse String | O(n) | O(n) |
| Next Greater Element | O(n) | O(n) |
| Infix to Postfix | O(n) | O(n) |

---

# 🚀 How to Run

### Clone Repository

```bash
git clone https://github.com/Muhammad-Javed2005/DSA-With-Engr-Javed.git
```

### Navigate to Stack Folder

```bash
cd DSA-With-Engr-Javed/07_Stack
```

### Compile

```bash
g++ filename.cpp -o output
```

Example:

```bash
g++ 03_valid_parentheses.cpp -o output
```

### Run

```bash
./output
```

---

# 🎓 Learning Path

Recommended Order:

```text
1. Stack Using Array
        ↓
2. Stack Using STL
        ↓
3. Reverse String
        ↓
4. Valid Parentheses
        ↓
5. Next Greater Element
        ↓
6. Infix to Postfix
```

This sequence helps build concepts gradually from basic to advanced.

---

# 🔥 Interview Questions Related to Stack

- Implement Stack using Array
- Implement Stack using Linked List
- Valid Parentheses
- Next Greater Element
- Previous Greater Element
- Stock Span Problem
- Largest Rectangle in Histogram
- Min Stack
- Evaluate Postfix Expression
- Infix to Postfix Conversion
- Infix to Prefix Conversion

---

# 📖 Key Takeaways

✅ Stack follows LIFO Principle

✅ Push and Pop operations are O(1)

✅ Useful for expression parsing and recursion

✅ Helps solve many coding interview problems

✅ Foundation for advanced algorithms

✅ One of the most important linear data structures

---

# 👨‍💻 Author

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
