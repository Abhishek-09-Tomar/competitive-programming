# LeetCode #1975 — Maximum Matrix Sum

<!-- ===================== TABLE OF CONTENTS ===================== -->

## 📚 Table of Contents

* [🧩 Problem Overview](#-problem-overview)
* [🧠 Key Intuition](#-key-intuition--logic)
* [🎬 Visual Explanation](#-visual-explanation)
* [⚙️ Complexity Analysis](#️-complexity-analysis)
* [💻 Implementations](#-implementations)
* [🌟 Pro Tips](#-pro-tips)
* [📊 Developer Stats & Activity](#-developer-stats--activity)
* [🤝 Open Source Contribution](#-open-source-contribution)

---

<div align="center">

![LeetCode](https://img.shields.io/badge/LeetCode-1975-orange?style=for-the-badge\&logo=leetcode)
![Language](https://img.shields.io/badge/Language-C%2B%2B%20%7C%20Java-blue?style=for-the-badge)
![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow?style=for-the-badge)
![Status](https://img.shields.io/badge/Status-Accepted-brightgreen?style=for-the-badge)
![Open Source](https://img.shields.io/badge/Open%20Source-Contribution-purple?style=for-the-badge)

</div>

<div align="center">

<img src="https://readme-typing-svg.demolab.com?font=JetBrains+Mono&size=32&pause=1000&color=F59E0B&center=true&vCenter=true&width=900&lines=Optimized;Math-Driven;Interview-Ready;Open-Source-Friendly" />

</div>



---

## 🧩 Problem Overview

> You are given an **n × n integer matrix**.
>
> You may repeatedly choose **any two adjacent elements** and multiply both by **-1**.
>
> Return the **maximum possible sum** of all elements after any number of operations.

### 🔍 Example

```
Input:
[
  [1, -1],
  [-1, 1]
]
Output: 4
```

---

## 🧠 Key Intuition & Logic

This problem is entirely driven by **sign parity and absolute values**.

### 🔑 Core Observations

1. **Sign Movement**: Using adjacent flips, a negative sign can be moved anywhere.
2. **Sign Cancellation**: Two negatives can always be converted to positives.
3. **Parity Rule**:

   * Even number of negatives → all values can be made positive.
   * Odd number of negatives → exactly **one negative must remain**.

### 🎯 Optimal Strategy

* Always maximize the **sum of absolute values**.
* If one negative must remain, assign it to the **smallest absolute value**.

---

## 🎬 Visual Explanation (ASCII)

```
Matrix values:
[  5  -2 ]
[ -3   4 ]

Absolute values:
[ 5  2 ]
[ 3  4 ]  → Sum = 14

Negatives = 2 (even)
✔ All values can become positive

Final Answer = 14
```

Odd case:

```
Negatives = 3 (odd)
Smallest |value| = 2
Final Sum = totalAbsSum - 2 × 2
```

---

## ⚙️ Complexity Analysis

| Metric   | Value     |
| -------- | --------- |
| Time   | **O(n²)** |
| Space | **O(1)**  |

---

## 💻 Implementations

### C++ Implementation

```cpp
class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long totalSum = 0;
        int minAbsValue = INT_MAX;
        int negativeCount = 0;

        for (const auto& row : matrix) {
            for (int val : row) {
                totalSum += abs(val);
                minAbsValue = min(minAbsValue, abs(val));
                if (val < 0) negativeCount++;
            }
        }

        if (negativeCount % 2 != 0) {
            return totalSum - 2LL * minAbsValue;
        }
        return totalSum;
    }
};
```

### ☕ Java Implementation

```java
class Solution {
    public long maxMatrixSum(int[][] matrix) {
        long totalSum = 0;
        int minAbsValue = Integer.MAX_VALUE;
        int negativeCount = 0;

        for (int[] row : matrix) {
            for (int val : row) {
                totalSum += Math.abs(val);
                minAbsValue = Math.min(minAbsValue, Math.abs(val));
                if (val < 0) negativeCount++;
            }
        }

        if (negativeCount % 2 != 0) {
            return totalSum - 2L * minAbsValue;
        }
        return totalSum;
    }
}
```

---

## 🌟 Pro Tips

* Think in **absolute values first**, signs later
* Parity-based problems often reduce to **one forced exception**
* Always check smallest magnitude in greedy math problems

---

## 📊 Developer Stats & Activity

<div align="center">

### 🟣 GitHub Activity

![GitHub Streak](https://github-readme-streak-stats.herokuapp.com/?user=Abhishek-09-Tomar)

![GitHub Activity Graph](https://github-readme-activity-graph.vercel.app/graph?username=Abhishek-09-Tomar)

### 🟠 LeetCode Stats

![LeetCode Stats](https://leetcard.jacoblin.cool/Abhishek_Tomar_99?theme=light\&font=Karma)

### 🔵 Codeforces Stats

![Codeforces](https://codeforces-readme-stats.vercel.app/api/card?username=Abhishek_Tomar)

</div>

---

## 🤝 Open Source Contribution

<div align="center">

### 👨‍💻 **Contributor Spotlight**

## **Abhishek Tomar**

💡 *DSA • C++ • Java • System Design*
🌍 *Open Source Enthusiast*
📈 *Building in public, one problem at a time*

🔗 **Profiles**

* GitHub: [https://github.com/Abhishek-09-Tomar](https://github.com/Abhishek-09-Tomar)
* LeetCode: [https://leetcode.com/u/Abhishek_Tomar_99/](https://leetcode.com/u/Abhishek_Tomar_99/)
* Codeforces: [https://codeforces.com/profile/Abhishek_Tomar](https://codeforces.com/profile/Abhishek_Tomar)

</div>

If this helped you:

* ⭐ Star the repo
* 🍴 Fork & improve
* 💬 Share with peers

---

<div align="center">

🚀 *Happy Coding & Keep Scaling!* 🚀

</div>
