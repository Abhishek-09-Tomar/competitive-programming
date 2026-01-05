# LeetCode #1390 — Four Divisors

<!-- ===================== TABLE OF CONTENTS ===================== -->

## 📚 Table of Contents

- [🧩 Problem Overview](#-problem-overview)
- [💡 Key Observations & Logic](#-key-observations--logic)
- [🧠 Algorithm Strategy](#-algorithm-strategy)
- [🚀 Complexity Analysis](#-complexity-analysis)
- [💻 C++ Implementation](#-c-implementation)
- [💻 Java Implementation](#-java-implementation)
- [📊 Coding Activity & Streaks](#-coding-activity--streaks)
- [🤝 Open Source Contribution & Profiles](#-open-source-contribution--profiles)

---

<div align="center">

![LeetCode](https://img.shields.io/badge/LeetCode-1390-orange?style=for-the-badge&logo=leetcode)
![Language](https://img.shields.io/badge/Language-C%2B%2B%20%7C%20Java-blue?style=for-the-badge)
![Difficulty](https://img.shields.io/badge/Difficulty-Easy-success?style=for-the-badge)
![Status](https://img.shields.io/badge/Status-Accepted-brightgreen?style=for-the-badge)
![Open Source](https://img.shields.io/badge/Open%20Source-Contribution-purple?style=for-the-badge)

<div align="center">

<img src="https://readme-typing-svg.demolab.com?font=JetBrains+Mono&size=32&pause=1000&color=F59E0B&center=true&vCenter=true&width=900&lines=⚡+Optimized;🧮+Math-Driven;🎯+Interview-Ready;🌍+Open-Source+Friendly" />

</div>


</div>

---

## 🧩 Problem Overview

> **Task**: Given an integer array `nums`, return the **sum of divisors** of numbers that have **exactly four divisors**.
>
> If no such number exists, return `0`.

### 🔍 Example

```
Input:  nums = [21, 4, 7]
Output: 32
```

**Explanation**:

- `21` → divisors = `1, 3, 7, 21` → ✔ (sum = 32)
- `4` → divisors = `1, 2, 4` → ✘
- `7` → divisors = `1, 7` → ✘

---

## 💡 Key Observations & Logic

1. Divisors always come in **pairs** `(d, n/d)`.
2. We only iterate up to **√n** for efficiency.
3. Exactly **four divisors** occur when:

   - `n = p × q` (two distinct primes), or
   - `n = p³` (cube of a prime).

4. **Early exit** if divisor count exceeds four.

---

## 🧠 Algorithm Strategy

```
for each number n in nums:
    count = 0, sum = 0
    for i = 1 to √n:
        if i divides n:
            count++, add i
            if i != n/i:
                count++, add n/i
        if count > 4:
            break
    if count == 4:
        add sum to answer
```

---

## 🚀 Complexity Analysis

| Metric | Value                         |
| ------ | ----------------------------- |
| Time   | **O(N × √M)** where `M ≤ 10⁵` |
| Space  | **O(1)** auxiliary            |

---

## 💀 C++ Implementation

```cpp
class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int totalSum = 0;

        for (int n : nums) {
            vector<int> divisors;
            for (int i = 1; i * i <= n; i++) {
                if (n % i == 0) {
                    divisors.push_back(i);
                    if (i != n / i)
                        divisors.push_back(n / i);
                }
                if (divisors.size() > 4) break;
            }
            if (divisors.size() == 4) {
                for (int d : divisors)
                    totalSum += d;
            }
        }
        return totalSum;
    }
};
```

---

### ☕ Java Implementation

---

```java
class Solution {
    public int sumFourDivisors(int[] nums) {
        int totalSum = 0;

        for (int n : nums) {
            int count = 0;
            int currentSum = 0;

            for (int i = 1; i * i <= n; i++) {
                if (n % i == 0) {
                    count++;
                    currentSum += i;

                    if (i != n / i) {
                        count++;
                        currentSum += n / i;
                    }
                }

                if (count > 4) break;
            }

            if (count == 4) {
                totalSum += currentSum;
            }
        }
        return totalSum;
    }
}
```

---

## 📊 Coding Activity & Streaks

<div align="center">

### 🔥 GitHub Contribution Streak

![GitHub Streak](https://github-readme-streak-stats.herokuapp.com?user=Abhishek-09-Tomar&theme=default&hide_border=true)

### 📈 GitHub Activity Graph

![GitHub Activity Graph](https://github-readme-activity-graph.vercel.app/graph?username=Abhishek-09-Tomar&theme=minimal)

### 🧮 LeetCode Stats

![LeetCode Stats](https://leetcard.jacoblin.cool/Abhishek_Tomar_99?theme=light&font=Karma&ext=contest)

### 🏁 Codeforces Rating

![Codeforces Stats](https://codeforces-readme-stats.vercel.app/api/card?username=Abhishek_Tomar)

</div>

---

## 🤝 Open Source Contribution & Profiles

<div align="center">

## **Abhishek Tomar** 😊

💡 _DSA • C++ • Java • System Design_
🌍 _Open Source Contributor_
📈 _Consistent daily problem solver_

---

[![GitHub](https://img.shields.io/badge/GitHub-Abhishek--09--Tomar-black?style=for-the-badge&logo=github)](https://github.com/Abhishek-09-Tomar)
[![LeetCode](https://img.shields.io/badge/LeetCode-Abhishek__Tomar__99-orange?style=for-the-badge&logo=leetcode)](https://leetcode.com/u/Abhishek_Tomar_99/)
[![Codeforces](https://img.shields.io/badge/Codeforces-Abhishek__Tomar-blue?style=for-the-badge&logo=codeforces)](https://codeforces.com/profile/Abhishek_Tomar)

</div>

---

<div align="center">

🚀 _Happy Coding & Keep Learning!_ 🚀

</div>
