# LeetCode #14 — Longest Common Prefix

<!-- ===================== TABLE OF CONTENTS ===================== -->

## 📚 Table of Contents

* [🧩 Problem Overview](#-problem-overview)
* [🧠 Strategy 1: Vertical Scanning](#-strategy-1-vertical-scanning-⚡-most-efficient)
* [🧠 Strategy 2: Sorting Method](#-strategy-2-sorting-method-✨-clean--elegant)
* [⚖️ Technique Comparison](#️-technique-comparison)
* [📊 Developer Stats & Activity](#-developer-stats--activity)
* [🌟 Pro Tips](#-pro-tips)
* [🤝 Open Source Contribution](#-open-source-contribution)

---

<div align="center">

![LeetCode](https://img.shields.io/badge/LeetCode-14-orange?style=for-the-badge\&logo=leetcode)
![Language](https://img.shields.io/badge/Language-C%2B%2B-blue?style=for-the-badge\&logo=c%2B%2B)
![Difficulty](https://img.shields.io/badge/Difficulty-Easy-success?style=for-the-badge)
![Status](https://img.shields.io/badge/Status-Accepted-brightgreen?style=for-the-badge)
![Open Source](https://img.shields.io/badge/Open%20Source-Contribution-purple?style=for-the-badge)

</div>

<div align="center">

<img src="https://readme-typing-svg.demolab.com?font=JetBrains+Mono&size=32&pause=1000&color=FACC15&center=true&vCenter=true&width=850&lines=✨+Clean;⚡+Optimized;🎯+Interview-Ready;🌱+Beginner-Friendly" />

</div>

---

## 🧩 Problem Overview

> **Task**: Given an array of strings, find the **longest common prefix** shared by all strings.
>
> If no common prefix exists, return an empty string `""`.

### 🔍 Example

```
Input:  ["flower", "flow", "flight"]
Output: "fl"
```

---

## 🧠 Strategy 1: Vertical Scanning (⚡ Most Efficient)

### 💡 How It Works

We compare characters **column-by-column** across all strings:

* Start from index `0`
* Compare the same index in every string
* Stop immediately on mismatch or string end

🎯 Early termination makes this optimal for real interview constraints.

### 🎬 Visual Explanation (ASCII Flow)

```
Index →   0   1   2
          ↓   ↓   ↓
flower   f   l   o
flow     f   l   o
flight   f   l   i
          ✔   ✔   ✘  → STOP
```

### ⏱ Complexity

| Metric | Value                                          |
| ------ | ---------------------------------------------- |
| Time   | **O(S)** — total characters across all strings |
| Space  | **O(1)** — excluding output                    |

### 💻 C++ Implementation

```cpp
class SolutionVertical {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        for (int i = 0; i < strs[0].size(); i++) {
            char c = strs[0][i];
            for (int j = 1; j < strs.size(); j++) {
                if (i == strs[j].size() || strs[j][i] != c)
                    return strs[0].substr(0, i);
            }
        }
        return strs[0];
    }
};
```

---

## 🧠 Strategy 2: Sorting Method (✨ Clean & Elegant)

### 💡 Why Sorting Works

After lexicographical sorting:

* The **first** and **last** strings differ the most
* Any common prefix between them must exist in all strings

### ⏱ Complexity

| Metric | Value                |
| ------ | -------------------- |
| Time   | **O(N · L · log N)** |
| Space  | **O(L)**             |

### 💻 C++ Implementation

```cpp
class SolutionSorting {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        sort(strs.begin(), strs.end());

        string first = strs.front();
        string last = strs.back();
        string res;

        for (int i = 0; i < min(first.size(), last.size()); i++) {
            if (first[i] != last[i]) break;
            res += first[i];
        }
        return res;
    }
};
```

---

## ⚖️ Technique Comparison

| Feature    | Vertical Scanning ⚡  | Sorting ✨   |
| ---------- | -------------------- | ----------- |
| Speed      | ⭐⭐⭐⭐⭐                | ⭐⭐⭐         |
| Simplicity | ⭐⭐⭐⭐                 | ⭐⭐⭐⭐⭐       |
| Interviews | ✅ Must‑Know          | ✅ Bonus     |
| Best Use   | Performance‑critical | Clean logic |

---

## 📊 Developer Stats & Activity

<div align="center">

### 🔗 Developer Profiles

[![GitHub](https://img.shields.io/badge/GitHub-Abhishek--09--Tomar-black?style=for-the-badge\&logo=github)](https://github.com/Abhishek-09-Tomar)
[![LeetCode](https://img.shields.io/badge/LeetCode-Abhishek__Tomar__99-orange?style=for-the-badge\&logo=leetcode)](https://leetcode.com/u/Abhishek_Tomar_99/)
[![Codeforces](https://img.shields.io/badge/Codeforces-Abhishek__Tomar-blue?style=for-the-badge\&logo=codeforces)](https://codeforces.com/profile/Abhishek_Tomar)

---

### 📈 GitHub Activity

![GitHub Streak](https://github-readme-streak-stats.herokuapp.com?user=Abhishek-09-Tomar\&theme=default\&hide_border=true)

![GitHub Activity Graph](https://github-readme-activity-graph.vercel.app/graph?username=Abhishek-09-Tomar\&hide_border=true)

---

### 🧠 Competitive Programming Stats

![LeetCode Stats](https://leetcard.jacoblin.cool/Abhishek_Tomar_99?theme=light\&font=Karma\&ext=contest)

![Codeforces Stats](https://codeforces-readme-stats.vercel.app/api/card?username=Abhishek_Tomar)

</div>

---

## 🌟 Pro Tips

* Use **Vertical Scanning** in interviews unless constraints suggest otherwise
* Sorting method is excellent for explaining thought process
* Always guard against empty input

---

## 🤝 Open Source Contribution

<div align="center">

### 👨‍💻 Contributor

## **Abhishek Tomar**

**DSA • C++ • System Design**
Open‑source contributor building consistently in public

</div>

If this helped you:

* ⭐ Star the repository
* 🍴 Fork and extend
* 💬 Share with peers

---

<div align="center">

🚀 *Happy Coding & Keep Learning!* 🚀

</div>
