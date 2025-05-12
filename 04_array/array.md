---

# 📦 Arrays in C++

## 🧱 Block Structure (Visual)

```
marks[5] = {97, 85, 76, 90, 88}

+---------+---------+---------+---------+---------+
| marks[0]| marks[1]| marks[2]| marks[3]| marks[4]|
|   97    |   85    |   76    |   90    |   88    |
+---------+---------+---------+---------+---------+
  Addr: 100   104     108     112     116  → Contiguous
```

> Each `int` takes **4 bytes**, stored in **contiguous memory blocks**.

---

## 📌 Key Properties

* Stores **same type of data**
* **Fixed size** (set at compile-time)
* **Contiguous memory**
* **Linear data structure**
* Accessed via **index**: `0 to size-1`

---

## 🧾 Syntax

```cpp
int marks[5];           // Declaration
int marks[5] = {97, 85, 76, 90, 88};  // Initialization
```

---

## 📍 Access Elements

```cpp
std::cout << marks[3];  // Access 4th element → 90
```

* Index starts at `0`
* Last element: `marks[4]`

---

## 📏 Size of Array

```cpp
int size = sizeof(marks) / sizeof(int);  // 20 / 4 = 5
```

---

## 🔄 Pass by Reference in Functions

In C++, **arrays are passed by reference** by default.

```cpp
void modify(int arr[]) {
    arr[0] = 100;  // Modifies original array
}
```

📌 `arr` is actually a pointer — so no copy is made.

---

## 🔍 Find Minimum Element

```cpp
int minElement(int arr[], int n) {
    int minVal = arr[0];
    for (int i = 1; i < n; ++i)
        if (arr[i] < minVal)
            minVal = arr[i];
    return minVal;
}
```

---

## 🔍 Find Maximum Element

```cpp
int maxElement(int arr[], int n) {
    int maxVal = arr[0];
    for (int i = 1; i < n; ++i)
        if (arr[i] > maxVal)
            maxVal = arr[i];
    return maxVal;
}
```

---

## 🔎 Linear Search (Algorithm)

### Problem: Find `target` in `arr[]`

```cpp
bool linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; ++i)
        if (arr[i] == target)
            return true;
    return false;
}
```

📌 Time Complexity: O(n)

---

## 🔁 2-Pointer Approach — Reverse Array

```cpp
void reverse(int arr[], int n) {
    int left = 0, right = n - 1;
    while (left < right) {
        std::swap(arr[left], arr[right]);
        left++;
        right--;
    }
}
```

📌 Reverses the array **in-place** using two pointers.

---

## 🧠 Summary Table

| Operation        | Syntax / Concept                       |
| ---------------- | -------------------------------------- |
| Declaration      | `int arr[5];`                          |
| Access by Index  | `arr[2]`                               |
| Find Size        | `sizeof(arr) / sizeof(arr[0])`         |
| Pass to Function | `void func(int arr[])` → passed by ref |
| Min Element      | Loop and track `min`                   |
| Max Element      | Loop and track `max`                   |
| Linear Search    | Loop and compare with target           |
| Reverse Array    | Two-pointer method with `swap()`       |

---

