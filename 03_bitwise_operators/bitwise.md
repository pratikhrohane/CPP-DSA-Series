## 🧠 What Are Bitwise Operators?

Bitwise operators perform operations **bit by bit** on integers — using the binary (0s and 1s) representation of numbers.

---

## 🔧 1. Bitwise AND `&`

**Sets each bit to 1 if both bits are 1**

```cpp
#include <iostream>

int main() {
    int a = 5;   // 0101
    int b = 3;   // 0011
    int result = a & b;  // 0001 = 1
    std::cout << "a & b = " << result << std::endl;
    return 0;
}
```

🟢 **Explanation**:

```
   0101  (5)
 & 0011  (3)
 = 0001  (1)
```

---

## 🔧 2. Bitwise OR `|`

**Sets each bit to 1 if at least one bit is 1**

```cpp
int result = a | b;  // 0111 = 7
```

🟢 **Explanation**:

```
   0101  (5)
 | 0011  (3)
 = 0111  (7)
```

---

## 🔧 3. Bitwise XOR `^`

**Sets each bit to 1 if only one of the bits is 1 (exclusive OR)**

```cpp
int result = a ^ b;  // 0110 = 6
```

🟢 **Explanation**:

```
   0101  (5)
 ^ 0011  (3)
 = 0110  (6)
```

---

## 🔧 4. Bitwise Left Shift `<<`

**Shifts bits to the left (multiplies by 2ⁿ)**

```cpp
int result = a << 1;  // 1010 = 10
```

🟢 **Explanation**:

```
   0101 (5)
 << 1
 = 1010 (10)
```

Left shift by 1 → multiply by 2
Left shift by 2 → multiply by 4, etc.

---

## 🔧 5. Bitwise Right Shift `>>`

**Shifts bits to the right (divides by 2ⁿ)**

```cpp
int result = a >> 1;  // 0010 = 2
```

🟢 **Explanation**:

```
   0101 (5)
 >> 1
 = 0010 (2)
```

Right shift by 1 → divide by 2

---

## ✅ Full Example

```cpp
#include <iostream>

int main() {
    int a = 5;  // 0101
    int b = 3;  // 0011

    std::cout << "a & b = " << (a & b) << std::endl; // 1
    std::cout << "a | b = " << (a | b) << std::endl; // 7
    std::cout << "a ^ b = " << (a ^ b) << std::endl; // 6
    std::cout << "a << 1 = " << (a << 1) << std::endl; // 10
    std::cout << "a >> 1 = " << (a >> 1) << std::endl; // 2

    return 0;
}
```

---

## 🦾 Robotics Use Case

Bitwise operations are **very common in embedded robotics** for:

* Flag settings (`status |= 0x01;`)
* Sensor state manipulation (`if (input & 0x08)`)
* Efficient memory use

---

## 🔁 Shift Operator Shortcut

### ✅ Multiply by power of 2

```cpp
a * (2^b)  ⟶  a << b
```

✅ Example:

```cpp
int a = 3;
int result = a << 2; // 3 * 2^2 = 12
```

---

### ✅ Divide by power of 2

```cpp
a / (2^b)  ⟶  a >> b
```

✅ Example:

```cpp
int a = 16;
int result = a >> 3; // 16 / 2^3 = 2
```

> ⚠️ These only work with **integers**, not floating-point numbers.
> Also, for **signed integers**, right shift (`>>`) may behave differently on negative numbers (implementation-defined).

---
---
---

# ⚡ Bitwise XOR (`^`) in C++

## 📘 XOR Truth Table

| A | B | A ^ B |
| - | - | ----- |
| 0 | 0 | 0     |
| 0 | 1 | 1     |
| 1 | 0 | 1     |
| 1 | 1 | 0     |

---

## 🧠 Key Properties

* `n ^ 0 = n` → XOR with zero keeps the number unchanged
* `n ^ n = 0` → XOR of a number with itself is zero
* XOR is **commutative**: `a ^ b == b ^ a`
* XOR is **associative**: `(a ^ b) ^ c == a ^ (b ^ c)`

---

## 🧪 Example in C++

```cpp
#include <iostream>
int main() {
    int a = 5, b = 3;
    
    std::cout << (a ^ b) << std::endl;  // 5 ^ 3 = 6
    std::cout << (a ^ a) << std::endl;  // 5 ^ 5 = 0
    std::cout << (b ^ 0) << std::endl;  // 3 ^ 0 = 3
    return 0;
}
```

---

## 🔁 XOR Swap Trick (Without Temp Variable)

```cpp
int a = 10, b = 20;

a = a ^ b;
b = a ^ b;
a = a ^ b;

// Now: a = 20, b = 10
```

📌 XOR lets you **swap values without using extra space**.

---

## 🔍 Use Case: Find Unique Element

If every element appears twice **except one**, you can use XOR:

```cpp
int findUnique(int arr[], int n) {
    int res = 0;
    for (int i = 0; i < n; ++i)
        res ^= arr[i];
    return res;
}
```

### Example:

```cpp
int arr[] = {1, 2, 3, 2, 1};
findUnique(arr, 5);  // Output: 3
```

> All duplicates cancel out using XOR.

---

## 🎯 Summary Table

| Expression                   | Result        |
| ---------------------------- | ------------- |
| `n ^ 0`                      | `n`           |
| `n ^ n`                      | `0`           |
| `a ^ b == b ^ a`             | ✅ Commutative |
| `a ^ (b ^ c) == (a ^ b) ^ c` | ✅ Associative |

---
