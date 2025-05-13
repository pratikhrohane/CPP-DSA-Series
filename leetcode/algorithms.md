# ⚡ **Kadane's Algorithm**

---

### 🔍 **Problem**

Find the **maximum sum of a contiguous subarray** within a one-dimensional array of numbers (which may include negative numbers).

---

### ✅ **Use Case**

* Stock price analysis
* Signal processing
* Optimization problems
* Competitive coding (e.g., Max Subarray Sum)

---

### 🧠 **Idea**

* Scan the array while keeping track of:

  * `current_sum`: Max subarray sum ending at current index
  * `max_sum`: Overall max subarray sum seen so far
* If `current_sum` drops below the current element, reset it

---

### 🔣 **Algorithm (Pseudocode)**

```text
Initialize:
    max_sum = arr[0]
    current_sum = arr[0]

Loop from i = 1 to n-1:
    current_sum = max(arr[i], current_sum + arr[i])
    max_sum = max(max_sum, current_sum)

Return max_sum
```

---

### 🧑‍💻 **C++ Code**

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int kadane(const vector<int>& arr) {
    int max_sum = arr[0];
    int current_sum = arr[0];

    for (size_t i = 1; i < arr.size(); ++i) {
        current_sum = max(arr[i], current_sum + arr[i]);
        max_sum = max(max_sum, current_sum);
    }

    return max_sum;
}

int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Maximum subarray sum is " << kadane(arr) << endl;
    return 0;
}
```

---

### 🧪 **Example Output**

```cpp
Maximum subarray sum is 6
```

**Explanation**: The maximum subarray is `[4, -1, 2, 1]`.

---

### 💡 **Bonus Tips**

* To track the subarray itself, store start and end indices when updating `max_sum`.
* **Time Complexity:** `O(n)`
* **Space Complexity:** `O(1)` (not counting input array)

---


Here’s a complete beginner-friendly **cheat sheet** on the **Two Pointer Approach**, covering all essential concepts, use cases, patterns, and tips.

---

# 🧭 **Two Pointer Approach**

---

### 📌 What is the Two Pointer Approach?

The **Two Pointer Technique** involves using **two variables** (or indices) that **move through a data structure** (typically an array or string) to solve problems efficiently — often in **O(n)** time.

---

### 🔧 When to Use

* The array or string is **sorted** (but not always required)
* You want to **find a condition** involving **pairs, windows, or segments**
* Optimize brute force nested loops (**O(n²)** → **O(n)** or **O(n log n)**)

---

### 🧠 **Pointer Behaviors**

| Type                  | Left Pointer (i)                   | Right Pointer (j)       |
| --------------------- | ---------------------------------- | ----------------------- |
| Fixed window (size k) | Advances after j grows             | Moves one step per loop |
| Shrinking window      | Grows/shrinks to satisfy condition | Grows until limit       |
| Classic pair search   | Starts from left                   | Starts from right       |

---

## 📚 **Common Patterns & Use Cases**

---

### 1. ✅ **Finding a Pair with a Given Sum (Sorted Array)**

```cpp
// Sorted input
int left = 0, right = n - 1;
while (left < right) {
    int sum = arr[left] + arr[right];
    if (sum == target) return true;
    else if (sum < target) left++;
    else right--;
}
```

---

### 2. 📏 **Fixed-Size Sliding Window (e.g., Max Sum of Subarray of Size K)**

```cpp
int left = 0, sum = 0, maxSum = INT_MIN;
for (int right = 0; right < n; right++) {
    sum += arr[right];
    if (right - left + 1 == k) {
        maxSum = max(maxSum, sum);
        sum -= arr[left++];
    }
}
```

---

### 3. 🧼 **Variable-Size Window (e.g., Longest Substring Without Repeating Characters)**

```cpp
unordered_set<char> seen;
int left = 0, maxLen = 0;

for (int right = 0; right < s.length(); ++right) {
    while (seen.count(s[right])) {
        seen.erase(s[left++]);
    }
    seen.insert(s[right]);
    maxLen = max(maxLen, right - left + 1);
}
```

---

### 4. 🔁 **Remove Duplicates from Sorted Array**

```cpp
int i = 0;
for (int j = 1; j < n; j++) {
    if (arr[i] != arr[j]) {
        i++;
        arr[i] = arr[j];
    }
}
// New size = i + 1
```

---

### 5. 🔍 **Find Triplet with Given Sum (Sorted Array)**

```cpp
for (int i = 0; i < n - 2; i++) {
    int left = i + 1, right = n - 1;
    while (left < right) {
        int sum = arr[i] + arr[left] + arr[right];
        if (sum == target) return true;
        else if (sum < target) left++;
        else right--;
    }
}
```

---

### 6. 📊 **Container With Most Water**

```cpp
int left = 0, right = n - 1, maxArea = 0;
while (left < right) {
    int height = min(heights[left], heights[right]);
    maxArea = max(maxArea, height * (right - left));
    if (heights[left] < heights[right]) left++;
    else right--;
}
```

---

### 🧠 Key Tips

* **Sorted array?** Two pointers are usually more efficient than brute force.
* **Sliding Window** helps with variable-length problems (min/max substring, longest, shortest).
* Use `unordered_map` or `set` with two pointers when tracking frequency or uniqueness.
* Carefully define **when to move each pointer** (on condition satisfaction or failure).
* **Edge Cases**:

  * Empty array?
  * All negative/positive values?
  * Duplicates?

---

### 📌 Summary Table

| Use Case                         | Sorted | Window | Example Problem              |
| -------------------------------- | ------ | ------ | ---------------------------- |
| Find pair with sum               | ✅      | ❌      | 2Sum (sorted array)          |
| Max subarray sum (fixed size)    | ❌      | ✅      | Max sum of subarray size `k` |
| Longest substring without repeat | ❌      | ✅      | Strings & hash sets          |
| Remove duplicates                | ✅      | ❌      | In-place unique elements     |
| Triplet sum                      | ✅      | ❌      | 3Sum (sorted)                |
| Container With Most Water        | ✅      | ❌      | Maximum area between 2 lines |

---

# 🗳️ **Moore’s Voting Algorithm**

Moore's Voting Algorithm is an efficient technique used to **find the majority element** in an array — an element that appears **more than ⌊n/2⌋ times**.

---

## 🔍 Problem Statement

Given an array of size `n`, find the **majority element**, if it exists.
A majority element is the one that **appears more than n/2 times**.

---

## 🧠 Key Idea (Voting Concept)

* You "vote" for elements.
* The majority element will **survive cancellations** from other elements.

---

### 👣 **Algorithm Steps**

1. Initialize:

   * `count = 0`
   * `candidate = None` (or any value)

2. Loop through the array:

   * If `count == 0`, set `candidate = current element`
   * If `current element == candidate`, increment `count`
   * Else, decrement `count`

3. (Optional but important) **Verify** that the candidate is actually the majority by counting its occurrences again.

---

### 🧑‍💻 **C++ Code**

```cpp
#include <iostream>
#include <vector>
using namespace std;

int majorityElement(const vector<int>& nums) {
    int count = 0, candidate = 0;

    for (int num : nums) {
        if (count == 0) {
            candidate = num;
        }
        count += (num == candidate) ? 1 : -1;
    }

    // Optional verification step
    count = 0;
    for (int num : nums) {
        if (num == candidate) count++;
    }

    return (count > nums.size() / 2) ? candidate : -1;
}
```

---

### 🧪 **Example**

```cpp
vector<int> nums = {2, 2, 1, 1, 2, 2, 2};
int result = majorityElement(nums); // Output: 2
```

---

### 🧮 Time and Space Complexity

| Property    | Value                            |
| ----------- | -------------------------------- |
| Time        | O(n)                             |
| Space       | O(1)                             |
| Extra Pass? | Only for verification (optional) |

---

### 📌 Real-World Use Cases

* Detecting dominant trends or choices (e.g., polls, votes)
* Optimizing solutions in high-frequency data streams

---

### ⚠️ Important Notes

* The algorithm **only works** if a majority element **exists**.
* If it’s **not guaranteed**, always **verify** the candidate after.

---

### 🧠 **Can Moore's Voting Algorithm handle multiple unique elements?**

✅ **Yes, it works even if there are many unique elements**,
BUT...

---

## ⚠️ Moore’s Voting Algorithm only finds **one majority element**

> That is, the element that appears **more than ⌊n/2⌋ times**.

### ✔️ It **still works** if the array has:

* 3, 5, 10, or more different elements
* As long as **one of them appears more than half the time**

### ❌ It **does NOT** find:

* All elements that appear more than `n/3` or `n/k` times
* Multiple frequent elements (it only finds **1 candidate**)

---

### 🔍 Example – Works fine:

```cpp
nums = {1, 2, 3, 2, 2, 2, 2}
majorityElement(nums) ➜ 2 ✅
```

### 🔍 Example – Fails when no majority exists:

```cpp
nums = {1, 2, 3, 4, 5, 6}  
// No element appears more than n/2 = 3
// The algorithm may return any element, but it's not valid ❌
```

You must **verify** the result in this case (second pass).

---

---

# ⚡ Binary Exponentiation (a.k.a. Fast Exponentiation)

---

## 🔸 Problem:

Efficiently compute $x^n$, where:

* `x` is a floating-point or integer number
* `n` is an integer (positive, negative, or zero)

---

## 🔸 Key Idea:

Instead of multiplying `x` `n` times (O(n)), we use this formula to **cut the exponent in half each time** (O(log n)):

$$
x^n = \begin{cases}
(x^2)^{n/2} & \text{if } n \text{ is even} \\
x \cdot (x^2)^{n/2} & \text{if } n \text{ is odd}
\end{cases}
$$

---

## ✅ Iterative C++ Implementation

```cpp
double binaryExponentiation(double x, int n) {
    long long power = n;     // To handle INT_MIN safely
    double result = 1.0;

    if (power < 0) {
        x = 1 / x;
        power = -power;
    }

    while (power > 0) {
        if (power % 2 == 1) {
            result *= x;
        }
        x *= x;
        power /= 2;
    }

    return result;
}
```

---

## 🧪 Real Example: `x = 2`, `n = 5`

We want to calculate $2^5$

### Step-by-step:

| Step | `power` | `x`           | Odd? | Action                 | `result` |
| ---- | ------- | ------------- | ---- | ---------------------- | -------- |
| 1    | 5       | 2             | ✅    | result \*= x = 1 \* 2  | 2        |
|      |         | x \*= x = 4   |      | power /= 2 = 2         |          |
| 2    | 2       | 4             | ❌    | No multiply            | 2        |
|      |         | x \*= x = 16  |      | power /= 2 = 1         |          |
| 3    | 1       | 16            | ✅    | result \*= x = 2 \* 16 | 32       |
|      |         | x \*= x = 256 |      | power /= 2 = 0 (done)  |          |

✔️ Final answer: `2^5 = 32`

---

## 📌 Edge Case: Negative Exponent

```cpp
x = 2.0, n = -3
→ 2^(-3) = 1 / (2^3) = 1 / 8 = 0.125
```

The code handles this by:

* Inverting `x`: `x = 1 / x`
* Making exponent positive: `n = -n`

---

## ⏱️ Time & Space Complexity

| Type  | Value                                    |
| ----- | ---------------------------------------- |
| Time  | O(log n)                                 |
| Space | O(1) (iterative) or O(log n) (recursive) |

---

## 💡 When to Use Binary Exponentiation

| Scenario                     | Why?                                               |
| ---------------------------- | -------------------------------------------------- |
| ✅ Large powers (e.g., 2^1e9) | Too slow with normal loops                         |
| ✅ Modular exponentiation     | `x^n % mod` is common in coding contests           |
| ✅ Cryptography               | RSA, Diffie-Hellman, etc. use `a^b mod m`          |
| ✅ Matrix exponentiation      | Fast Fibonacci, dynamic programming                |
| ✅ Modular inverse            | When `mod` is prime: $a^{-1} = a^{mod-2} \mod mod$ |
| ✅ Game physics & animation   | Precise power calculations                         |
| ✅ Scientific simulations     | Float powers with negative exponents               |

---
