# 🕒 Time & 💾 Space Complexity in Algorithms

---

## 📌 Time Complexity

**Definition:**
Time complexity measures the **amount of time** an algorithm takes as a function of the **input size (n)**.

> Helps us analyze **efficiency** and **compare algorithms**.

---

### 📊 Big-O Notation

* Represents the **worst-case (upper bound)**.
* Describes how runtime grows with input size.

```cpp
f(n) = 4n^2 + 3n + 5
```

**Steps:**

1. ❌ Ignore constants → `n^2 + n + 1`
2. ✅ Keep largest term → `n^2`
3. ✅ Final → `O(n^2)`

---

### 🎯 Common Time Complexities

| Complexity   | Description   | Example                       |
| ------------ | ------------- | ----------------------------- |
| `O(1)`       | Constant time | Access array index            |
| `O(log n)`   | Logarithmic   | Binary Search                 |
| `O(n)`       | Linear        | Linear Search, Kadane’s Algo  |
| `O(n log n)` | Log-linear    | Merge Sort, Quick Sort        |
| `O(n^2)`     | Quadratic     | Bubble Sort, Selection Sort   |
| `O(n^3)`     | Cubic         | 3 nested loops                |
| `O(2^n)`     | Exponential   | Recursion without memoization |
| `O(n!)`      | Factorial     | Backtracking, permutations    |

---

### ⚠️ Notations Comparison

| Notation    | Meaning                    |
| ----------- | -------------------------- |
| `O`         | Upper Bound (Worst Case)   |
| `Θ` (Theta) | Tight Bound (Average Case) |
| `Ω` (Omega) | Lower Bound (Best Case)    |

---

### 📈 Time Complexity Graph (Growth Rate)

```
O(1) < O(log n) < O(n) < O(n log n) < O(n^2) < O(2^n) < O(n!)
```

---

## 💾 Space Complexity

**Definition:**
Space complexity is the amount of **auxiliary space (extra memory)** required by an algorithm as a function of input size `n`.

✅ We consider only **extra space**, not the input data itself.

---

## 🔍 Time Complexity Examples

### ✅ O(1)

```cpp
int sumToN(int n) {
    return n * (n + 1) / 2;
}
```

### ✅ O(n)

```cpp
int maxInArray(int arr[], int n) {
    int max = arr[0];
    for(int i = 1; i < n; i++)
        if(arr[i] > max)
            max = arr[i];
    return max;
}
```

---

## 🔁 Recursive Complexity

### 📌 Recurrence Relation

**Formula:**

```text
Time = total number of recursive calls × work in each call
```

### 📌 Space Complexity

* Based on **call stack depth**.
* Recursive calls take **stack space**:

  ```
  SC = height of call tree × space per frame
  ```

---

### 🧮 Example: Factorial

```cpp
int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}
```

* **Time Complexity:** `O(n)`
* **Space Complexity:** `O(n)` (due to recursion stack)

---

### 🧮 Example: Fibonacci (Naive Recursion)

```cpp
int fib(int n) {
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}
```

* **Time Complexity:** `O(2^n)` ❌ Inefficient!
* **Space Complexity:** `O(n)` due to call stack

---

### 🧮 Merge Sort

```cpp
// TC: O(n log n), SC: O(n) for temporary arrays
```

---

## ⚙️ Practical Time Limits in Coding

| Input Size (n) | Use Algorithms With…         |
| -------------- | ---------------------------- |
| > 10^8         | `O(log n)`, `O(1)`           |
| ≤ 10^8         | `O(n)`                       |
| ≤ 10^6         | `O(n log n)` (e.g., sorting) |
| ≤ 10^4         | `O(n^2)`                     |
| ≤ 500          | `O(n^3)`                     |
| ≤ 25           | `O(2^n)`                     |
| ≤ 12           | `O(n!)`                      |

---

## 🧠 Summary

| Term             | Meaning                            |
| ---------------- | ---------------------------------- |
| Time Complexity  | Time taken w\.r.t. input size      |
| Space Complexity | Extra memory used during execution |
| Big-O            | Worst-case performance             |
| Theta            | Average-case (tight bound)         |
| Omega            | Best-case performance              |

---

