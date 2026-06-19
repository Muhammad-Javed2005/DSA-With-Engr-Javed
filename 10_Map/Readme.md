# Map Data Structure in C++ (STL)

This folder contains practical implementations and real-world applications of the **Map Data Structure** using the C++ Standard Template Library (STL). The examples cover ordered maps, multimaps, unordered maps, frequency counting techniques, and popular interview problems solved using maps.

Maps are one of the most important associative containers in C++ and are widely used for storing key-value pairs efficiently.

---

# 📚 Learning Objectives

After completing these examples, you will be able to:

- Understand key-value pair storage
- Use Ordered Maps in C++
- Work with Multiple Values using Multimap
- Use Hash-Based Unordered Maps
- Count frequencies of elements efficiently
- Solve common coding interview problems using maps
- Implement optimized searching techniques
- Analyze time complexity of map operations

---

# 📁 Files Included

## 1️⃣ 01_map_functions.cpp

### Topic: Basic Map Functions

This program demonstrates the basic operations of a Map.

### Concepts Covered

- Creating a Map
- Inserting Key-Value Pairs
- Updating Values
- Searching Keys
- Deleting Elements
- Traversing Maps
- Accessing Values

### Functions Used

```cpp
insert()
erase()
find()
count()
size()
empty()
```

### Example

```text
Key    Value
1      Ali
2      Ahmed
3      Sara
```

### Time Complexity

| Operation | Complexity |
|------------|------------|
| Insert | O(log n) |
| Search | O(log n) |
| Delete | O(log n) |

---

## 2️⃣ 02_multimap.cpp

### Topic: Multimap

A Multimap allows multiple values to be stored against the same key.

### Concepts Covered

- Duplicate Keys
- Multiple Entries
- Searching by Key
- Traversing Duplicate Records

### Example

```text
Student ID   Subject
1            Math
1            Physics
1            Chemistry
```

Unlike a normal map, duplicate keys are allowed.

### Applications

- Student Course Registration
- Product Categories
- Event Scheduling
- Database Relationships

### Time Complexity

| Operation | Complexity |
|------------|------------|
| Insert | O(log n) |
| Search | O(log n) |
| Delete | O(log n) |

---

## 3️⃣ 03_unordered_map.cpp

### Topic: Unordered Map

This program demonstrates the use of Hash Tables through Unordered Maps.

### Features

- Fast Searching
- Fast Insertion
- Fast Deletion
- No Sorted Order

### Concepts Covered

- Hashing
- Buckets
- Key Lookup
- Collision Handling

### Example

```text
101 → Ali
102 → Ahmed
103 → Sara
```

Elements may appear in random order.

### Time Complexity

| Operation | Average Complexity |
|------------|-------------------|
| Insert | O(1) |
| Search | O(1) |
| Delete | O(1) |

---

## 4️⃣ 04_frequency_counter.cpp

### Topic: Frequency Counter

This program counts the frequency of each element in a collection using Maps.

### Example

Input

```text
1 2 2 3 3 3 4 4 4 4
```

Output

```text
1 → 1
2 → 2
3 → 3
4 → 4
```

### Approach

1. Read each element.
2. Use element as key.
3. Increment its count.
4. Display final frequencies.

### Applications

- Data Analysis
- Character Counting
- Word Frequency
- Survey Statistics
- Log Processing

### Time Complexity

```text
O(n log n)
```

For unordered_map:

```text
O(n)
```

Average Case

---

## 5️⃣ 05_two_sum.cpp

### Topic: Two Sum Problem

This program solves the famous LeetCode and Interview problem using Maps.

### Problem Statement

Given an array and a target value, find two numbers whose sum equals the target.

### Example

Input

```text
Array = [2,7,11,15]
Target = 9
```

Output

```text
2 + 7 = 9
```

### Approach

1. Traverse the array.
2. Calculate required complement.
3. Check if complement already exists in map.
4. If found, return solution.
5. Otherwise store current element.

### Complexity

| Operation | Complexity |
|------------|------------|
| Solution | O(n) |

### Applications

- Coding Interviews
- Competitive Programming
- Data Searching Problems

---

## 6️⃣ 06_top_k_frequent.cpp

### Topic: Top K Frequent Elements

This program finds the K most frequently occurring elements in an array.

### Example

Input

```text
Array = [1,1,1,2,2,3]
K = 2
```

Output

```text
1 2
```

Because:

```text
1 occurs 3 times
2 occurs 2 times
```

### Approach

1. Count frequencies using Map.
2. Sort according to frequency.
3. Extract top K elements.

### Concepts Covered

- Frequency Counting
- Sorting
- Maps
- Priority Logic

### Applications

- Search Engines
- Recommendation Systems
- Trending Topics
- Data Analytics

### Time Complexity

```text
O(n log n)
```

---

# 🔍 Comparison of Map Types

| Feature | map | multimap | unordered_map |
|----------|------|-----------|---------------|
| Key-Value Storage | ✅ | ✅ | ✅ |
| Duplicate Keys | ❌ | ✅ | ❌ |
| Sorted Order | ✅ | ✅ | ❌ |
| Hash Based | ❌ | ❌ | ✅ |
| Search Complexity | O(log n) | O(log n) | O(1) Average |
| Insert Complexity | O(log n) | O(log n) | O(1) Average |

---

# ⚡ Ordered Map vs Unordered Map

## Ordered Map

### Advantages

- Keys remain sorted
- Supports range queries
- Predictable ordering

### Disadvantages

- Slower operations

---

## Unordered Map

### Advantages

- Faster average performance
- Best for searching and counting

### Disadvantages

- No ordering guarantee
- Worst case can become O(n)

---

# 🚀 How to Compile and Run

## Compile

```bash
g++ filename.cpp -o output
```

Example:

```bash
g++ 01_map_functions.cpp -o map_functions
```

## Run

```bash
./map_functions
```

For Windows:

```bash
map_functions.exe
```

---

# 🎯 Real-World Applications of Maps

Maps are widely used in:

- Database Indexing
- Search Engines
- Caching Systems
- Dictionaries
- Phone Books
- Inventory Systems
- User Authentication
- Data Analytics
- Frequency Counting
- Recommendation Systems
- Competitive Programming

---

# 📖 STL Containers Related to Maps

- `map`
- `multimap`
- `unordered_map`
- `unordered_multimap`

Understanding these containers helps developers choose the most efficient data structure based on application requirements.

---

# 🏆 Key Takeaways

✔ Maps store data in key-value pairs.

✔ Ordered Maps keep keys sorted automatically.

✔ Multimaps allow duplicate keys.

✔ Unordered Maps provide faster average performance using hashing.

✔ Frequency counting becomes simple using Maps.

✔ Many coding interview questions rely heavily on Maps.

✔ Maps are among the most powerful and frequently used STL containers.

✔ Choosing the correct map type can significantly improve program efficiency.

---

## 📂 Folder Information

**Folder Name:** 10_Map

**Language:** C++

**Category:** STL Associative Containers

**Concepts Covered:**

- Map
- Multimap
- Unordered Map
- Frequency Counter
- Two Sum Problem
- Top K Frequent Elements

---

### Course: Data Structures & Algorithms (DSA)

**Repository:** DSA-With-Engr-Javed

**Topic:** Map Data Structure (STL)

---

Happy Coding 🚀
