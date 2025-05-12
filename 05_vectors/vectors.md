---

# 📦 C++ Vectors – STL (Standard Template Library)

Vectors are **dynamic arrays** in C++ that can grow or shrink at runtime.

---

## ⚙️ Array vs Vector

| Feature     | Array                 | Vector                        |
| ----------- | --------------------- | ----------------------------- |
| Size        | Fixed at compile time | Dynamic (can grow/shrink)     |
| Memory      | Static                | Dynamic                       |
| Declaration | `int arr[5];`         | `vector<int> vec;`            |
| Resizing    | ❌ Not allowed         | ✅ Allowed (`push_back`, etc.) |
| STL Support | ❌ No                  | ✅ Fully supported             |

---

## 🛠️ Include Vector

```cpp
#include <vector>
using namespace std;
```

---

## 🧾 Syntax

### 1️⃣ Basic Declaration

```cpp
vector<int> vec;  // empty vector
```

### 2️⃣ Initialize with Values

```cpp
vector<int> vec = {1, 2, 3};
```

📦 Memory Layout:

```
+----+----+----+
| 1  | 2  | 3  |
+----+----+----+
  0    1    2  (indices)
```

### 3️⃣ Create with Same Value

```cpp
vector<int> vec(5, 2);  // {2, 2, 2, 2, 2}
```

📦 Visual:

```
+----+----+----+----+----+
| 2  | 2  | 2  | 2  | 2  |
+----+----+----+----+----+
```

---

## 🔁 Range-Based For Loop (For-each)

```cpp
for (int val : vec) {
    cout << val << " ";
}
```

> `val` is the **actual element**, not index.

---

## 🧩 Common Vector Functions

| Function           | Description                      |
| ------------------ | -------------------------------- |
| `vec.size()`       | Returns number of elements       |
| `vec.push_back(x)` | Adds `x` to end                  |
| `vec.pop_back()`   | Removes last element             |
| `vec.front()`      | Returns first element            |
| `vec.back()`       | Returns last element             |
| `vec.at(i)`        | Safe access with bounds checking |

---

## ⚠️ Segmentation Fault

Trying to access invalid index:

```cpp
vec.at(10);  // Throws out_of_range exception
vec[10];     // Might crash (undefined behavior)
```

---

## ⚖️ Static vs Dynamic Memory Allocation

| Aspect       | Static         | Dynamic             |
| ------------ | -------------- | ------------------- |
| Time         | Compile time   | Runtime             |
| Example      | `int arr[10];` | `vector<int> vec;`  |
| Flexibility  | ❌ Fixed size   | ✅ Can grow/shrink   |
| Memory Usage | Pre-allocated  | Allocated as needed |

---

## 📐 Size vs Capacity

```cpp
vector<int> v;
v.push_back(1);
v.push_back(2);
```

| Property       | Meaning                                |
| -------------- | -------------------------------------- |
| `v.size()`     | Number of elements (e.g., 2)           |
| `v.capacity()` | Internal array size allocated (≥ size) |

📌 Vectors allocate **extra space** to minimize reallocation.

---

## 🧠 How Vectors Grow Dynamically

### 🧪 Start with an Empty Vector

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    cout << "Initial size: " << v.size() << ", capacity: " << v.capacity() << endl;

    v.push_back(10);
    cout << "After 1st push: " << v.size() << ", capacity: " << v.capacity() << endl;

    v.push_back(20);
    cout << "After 2nd push: " << v.size() << ", capacity: " << v.capacity() << endl;

    v.push_back(30);
    cout << "After 3rd push: " << v.size() << ", capacity: " << v.capacity() << endl;

    v.push_back(40);
    cout << "After 4th push: " << v.size() << ", capacity: " << v.capacity() << endl;

    v.push_back(50);
    cout << "After 5th push: " << v.size() << ", capacity: " << v.capacity() << endl;
}
```

---

### 📈 Typical Output

```bash
Initial size: 0, capacity: 0
After 1st push: 1, capacity: 1
After 2nd push: 2, capacity: 2
After 3rd push: 3, capacity: 4
After 4th push: 4, capacity: 4
After 5th push: 5, capacity: 8
```

---

### 🔍 What’s Happening Internally?

| Step | Operation       | Size | Capacity | Action                         |
| ---- | --------------- | ---- | -------- | ------------------------------ |
| 0    | Init empty      | 0    | 0        | No memory yet                  |
| 1    | `push_back(10)` | 1    | 1        | Allocated space for 1 element  |
| 2    | `push_back(20)` | 2    | 2        | Doubled capacity               |
| 3    | `push_back(30)` | 3    | 4        | Space exists → no reallocation |
| 4    | `push_back(40)` | 4    | 4        | Fills current capacity         |
| 5    | `push_back(50)` | 5    | 8        | Doubled again                  |

> ✅ C++ uses *doubling strategy* to reduce reallocation overhead.

---

## 🔗 Passing Vectors to Functions

### 🔴 Pass by Value (copy)

```cpp
void func(vector<int> v);  // costly copy
```

### ✅ Pass by Reference (no copy)

```cpp
void func(vector<int>& v);  // efficient
```

> Always prefer **pass-by-reference** for large containers.

---

## 🧠 Summary

| Topic             | Key Point                             |
| ----------------- | ------------------------------------- |
| Vector Type       | Dynamic array (resize at runtime)     |
| Header            | `#include <vector>`                   |
| Declaration       | `vector<int> v;`                      |
| Access            | `v[i]` or `v.at(i)`                   |
| Size vs Capacity  | Actual elements vs allocated space    |
| For-each Loop     | `for (int x : v)`                     |
| Memory Allocation | Dynamic (heap)                        |
| Function Passing  | Use `vector<int>& v` to avoid copying |

---
