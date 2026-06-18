#  Data Structures & Algorithms in C++


# Set 

This folder contains practical implementations and examples of the **Set Data Structure** using the C++ Standard Template Library (STL). The programs demonstrate how sets work, how duplicate values are handled, and how common mathematical set operations such as union and intersection can be performed efficiently.

## 📚 Learning Objectives

After completing these examples, you will be able to:

- Understand the concept of Sets in C++ STL
- Store unique elements automatically
- Use ordered and unordered sets
- Handle duplicate values using Multisets
- Perform insertion, deletion, and searching operations
- Remove duplicate elements from collections
- Implement Union and Intersection of sets
- Analyze the time complexity of set operations

---

## 📁 Files Included

### 1️⃣ 01_set_functions.cpp
**Topic:** Basic Set Functions

This program demonstrates the fundamental operations of a Set:

- Creating a set
- Inserting elements
- Deleting elements
- Searching elements
- Iterating through a set
- Finding size of a set

#### Concepts Covered
- `insert()`
- `erase()`
- `find()`
- `size()`
- `empty()`
- Iterators

#### Time Complexity

| Operation | Complexity |
|------------|------------|
| Insert | O(log n) |
| Delete | O(log n) |
| Search | O(log n) |

---

### 2️⃣ 02_multiset.cpp
**Topic:** Multiset

This program demonstrates the use of a Multiset where duplicate values are allowed.

#### Features

- Store repeated elements
- Automatic sorting
- Count occurrences of elements
- Remove specific values

#### Concepts Covered

- `multiset`
- `count()`
- `erase()`
- Iteration through duplicate elements

#### Example

Input Elements:

```text
10 20 20 30 30 30
```

Stored Output:

```text
10 20 20 30 30 30
```

Unlike a normal set, duplicate values are preserved.

---

### 3️⃣ 03_unordered_set.cpp
**Topic:** Unordered Set

This example demonstrates hashing-based sets.

#### Features

- Faster average insertion
- Faster average searching
- No sorted ordering

#### Concepts Covered

- `unordered_set`
- Hash Table implementation
- Fast lookup operations

#### Time Complexity

| Operation | Average Complexity |
|------------|-------------------|
| Insert | O(1) |
| Search | O(1) |
| Delete | O(1) |

#### Note

Elements are stored in arbitrary order.

---

### 4️⃣ 04_remove_duplicates.cpp
**Topic:** Remove Duplicate Elements

This program demonstrates how a Set can be used to remove duplicate values from an array or list.

#### Example

Input:

```text
1 2 2 3 4 4 5 5
```

Output:

```text
1 2 3 4 5
```

#### Approach

1. Insert all elements into a Set
2. Sets automatically remove duplicates
3. Display unique elements

#### Time Complexity

| Operation | Complexity |
|------------|------------|
| Duplicate Removal | O(n log n) |

---

### 5️⃣ 05_union_intersection.cpp
**Topic:** Union and Intersection of Sets

This program demonstrates common mathematical set operations.

#### Union

Returns all unique elements from both sets.

Example:

```text
A = {1,2,3}
B = {3,4,5}
```

Union:

```text
{1,2,3,4,5}
```

#### Intersection

Returns common elements from both sets.

Example:

```text
A = {1,2,3}
B = {3,4,5}
```

Intersection:

```text
{3}
```

#### Concepts Covered

- Set Traversal
- Set Comparison
- Union Operation
- Intersection Operation

---

## 🔍 Comparison of Set Types

| Feature | set | multiset | unordered_set |
|----------|------|-----------|----------------|
| Unique Elements | ✅ | ❌ | ✅ |
| Duplicate Values | ❌ | ✅ | ❌ |
| Sorted Order | ✅ | ✅ | ❌ |
| Hash Based | ❌ | ❌ | ✅ |
| Search Complexity | O(log n) | O(log n) | O(1) Average |

---

## 🚀 How to Compile and Run

### Compile

```bash
g++ filename.cpp -o output
```

Example:

```bash
g++ 01_set_functions.cpp -o set_functions
```

### Run

```bash
./set_functions
```

For Windows:

```bash
set_functions.exe
```

---

## 🎯 Applications of Sets

Sets are widely used in:

- Database indexing
- Search engines
- Duplicate removal systems
- Mathematical computations
- Competitive Programming
- Data Analysis
- Membership testing
- Graph algorithms
- Hashing applications

---

## 📖 STL Containers Related to Sets

- `set`
- `multiset`
- `unordered_set`
- `unordered_multiset`

Understanding these containers helps in choosing the right data structure according to performance requirements.

---

## 🏆 Key Takeaways

✔ Sets store unique elements automatically.

✔ Multisets allow duplicate values.

✔ Unordered Sets provide faster average performance using hashing.

✔ Sets are useful for removing duplicates efficiently.

✔ Union and Intersection are common operations performed using sets.

✔ Choosing the right type of set improves program performance and memory efficiency.

---

### Course: Data Structures & Algorithms (DSA)

**Folder:** 09_Set  
**Language:** C++  
**Concept:** Set Data Structure (STL)

---
Happy Coding 🚀
