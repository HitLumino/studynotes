<!-- TOC -->

- [String](#string)
    - [1. (657. Judge Route Circle)](#1-657-judge-route-circle)
    - [2. (344. Reverse String)](#2-344-reverse-string)
    - [3. (557. Reverse Words in a String III)](#3-557-reverse-words-in-a-string-iii)
    - [4. (520. Detect Capital)](#4-520-detect-capital)
    - [5.(383. Ransom Note)](#5383-ransom-note)
    - [6. (771. Jewels and Stones)](#6-771-jewels-and-stones)
    - [7. (387. First Unique Character in a String)](#7-387-first-unique-character-in-a-string)
    - [8. (49. Group Anagrams)](#8-49-group-anagrams)
    - [9. (1. Two Sum)](#9-1-two-sum)
    - [10. (242. Valid Anagram)](#10-242-valid-anagram)
    - [11. (412. Fizz Buzz)](#11-412-fizz-buzz)
    - [12. (28. Implement strStr())](#12-28-implement-strstr)
    - [13. (55. 比较字符串-lintcode)](#13-55-%E6%AF%94%E8%BE%83%E5%AD%97%E7%AC%A6%E4%B8%B2-lintcode)
    - [14. (551. Student Attendance Record I)](#14-551-student-attendance-record-i)
    - [15. (459. Repeated Substring Pattern)](#15-459-repeated-substring-pattern)
    - [16. (345. Reverse Vowels of a String)](#16-345-reverse-vowels-of-a-string)
    - [17. (434. Number of Segments in a String)](#17-434-number-of-segments-in-a-string)
    - [18.(有效的回文字符串)](#18%E6%9C%89%E6%95%88%E7%9A%84%E5%9B%9E%E6%96%87%E5%AD%97%E7%AC%A6%E4%B8%B2)
        - [`isalnum()``isspace()`:判断是否为字符或数字/空格](#isalnumisspace%E5%88%A4%E6%96%AD%E6%98%AF%E5%90%A6%E4%B8%BA%E5%AD%97%E7%AC%A6%E6%88%96%E6%95%B0%E5%AD%97%E7%A9%BA%E6%A0%BC)
        - [`toupper()``tolower()`:转换为大/小写(cctype)](#touppertolower%E8%BD%AC%E6%8D%A2%E4%B8%BA%E5%A4%A7%E5%B0%8F%E5%86%99cctype)
    - [19.(214. Shortest Palindrome-如何重整使最小回文)](#19214-shortest-palindrome-%E5%A6%82%E4%BD%95%E9%87%8D%E6%95%B4%E4%BD%BF%E6%9C%80%E5%B0%8F%E5%9B%9E%E6%96%87)
        - [KMP](#kmp)
    - [20. (151 Reverse Words in a String)](#20-151-reverse-words-in-a-string)
        - [`isspace()`:判断空格函数](#isspace%E5%88%A4%E6%96%AD%E7%A9%BA%E6%A0%BC%E5%87%BD%E6%95%B0)
    - [21. (696. Count Binary Substrings)](#21-696-count-binary-substrings)
        - [判断连续相同元素的处理](#%E5%88%A4%E6%96%AD%E8%BF%9E%E7%BB%AD%E7%9B%B8%E5%90%8C%E5%85%83%E7%B4%A0%E7%9A%84%E5%A4%84%E7%90%86)
        - [485. Max Consecutive Ones（3.20）找出最大连续1的个数](#485-max-consecutive-ones%EF%BC%88320%EF%BC%89%E6%89%BE%E5%87%BA%E6%9C%80%E5%A4%A7%E8%BF%9E%E7%BB%AD1%E7%9A%84%E4%B8%AA%E6%95%B0)
    - [22. (477. Total Hamming Distance)](#22-477-total-hamming-distance)
        - [注意>>操作不改变实际值](#%E6%B3%A8%E6%84%8F%E6%93%8D%E4%BD%9C%E4%B8%8D%E6%94%B9%E5%8F%98%E5%AE%9E%E9%99%85%E5%80%BC)
    - [283. Move Zeroes](#283-move-zeroes)
        - [`vector`的`remove()`和`fill()`](#vector%E7%9A%84remove%E5%92%8Cfill)
    - [27. Remove Element(也是remove)](#27-remove-element%E4%B9%9F%E6%98%AFremove)
    - [451. Sort Characters By Frequency(3/15)](#451-sort-characters-by-frequency315)
        - [`map`和`unordered_map`区别用法](#map%E5%92%8Cunorderedmap%E5%8C%BA%E5%88%AB%E7%94%A8%E6%B3%95)
        - [`string1+=string(3, string2)`的用法](#string1string3-string2%E7%9A%84%E7%94%A8%E6%B3%95)
    - [347. Top K Frequent Elements](#347-top-k-frequent-elements)
        - [优先队列的使用(make_pair)](#%E4%BC%98%E5%85%88%E9%98%9F%E5%88%97%E7%9A%84%E4%BD%BF%E7%94%A8makepair)
    - [692. Top K Frequent Words](#692-top-k-frequent-words)
        - [优先队列中比较函数的使用](#%E4%BC%98%E5%85%88%E9%98%9F%E5%88%97%E4%B8%AD%E6%AF%94%E8%BE%83%E5%87%BD%E6%95%B0%E7%9A%84%E4%BD%BF%E7%94%A8)
    - [23. 532. Third Maximum Number](#23-532-third-maximum-number)
        - [set的用法](#set%E7%9A%84%E7%94%A8%E6%B3%95)
- [动态规划(dynamic programming)](#%E5%8A%A8%E6%80%81%E8%A7%84%E5%88%92dynamic-programming)
    - [1.(397. Integer Replacement)](#1397-integer-replacement)
    - [2. (121)Best Time to Buy and Sell Stock](#2-121best-time-to-buy-and-sell-stock)
    - [3.(53)最大子序和](#353%E6%9C%80%E5%A4%A7%E5%AD%90%E5%BA%8F%E5%92%8C)
    - [4.(152. Maximum Product Subarray)](#4152-maximum-product-subarray)
    - [5. 697. Degree of an Array](#5-697-degree-of-an-array)
- [Backtracing(回溯法)](#backtracing%E5%9B%9E%E6%BA%AF%E6%B3%95)
    - [78. Subsets(求数组里所有的子集(Bit Manipulation/Backtrace/Iterative))(21/3)](#78-subsets%E6%B1%82%E6%95%B0%E7%BB%84%E9%87%8C%E6%89%80%E6%9C%89%E7%9A%84%E5%AD%90%E9%9B%86bit-manipulationbacktraceiterative213)
- [位运算、异或的用法（技巧）](#%E4%BD%8D%E8%BF%90%E7%AE%97%E3%80%81%E5%BC%82%E6%88%96%E7%9A%84%E7%94%A8%E6%B3%95%EF%BC%88%E6%8A%80%E5%B7%A7%EF%BC%89)
    - [超详细位运算用法-leetcode](#%E8%B6%85%E8%AF%A6%E7%BB%86%E4%BD%8D%E8%BF%90%E7%AE%97%E7%94%A8%E6%B3%95-leetcode)
    - [`&` tricks](#tricks)
        - [1. 191.Number of 1 Bits(位1的个数)](#1-191number-of-1-bits%E4%BD%8D1%E7%9A%84%E4%B8%AA%E6%95%B0)
        - [2.是否为4的指数 或 2的指数](#2%E6%98%AF%E5%90%A6%E4%B8%BA4%E7%9A%84%E6%8C%87%E6%95%B0-%E6%88%96-2%E7%9A%84%E6%8C%87%E6%95%B0)
        - [3. 201. Bitwise AND of Numbers Range(难)](#3-201-bitwise-and-of-numbers-range%E9%9A%BE)
    - [`^` tricks](#tricks)
        - [1. Sum of Two Integers](#1-sum-of-two-integers)
        - [2. 268.Missing Number](#2-268missing-number)
    - [`|` tricks](#tricks)
        - [找出小于或等于N的最大2的指数](#%E6%89%BE%E5%87%BA%E5%B0%8F%E4%BA%8E%E6%88%96%E7%AD%89%E4%BA%8En%E7%9A%84%E6%9C%80%E5%A4%A72%E7%9A%84%E6%8C%87%E6%95%B0)
        - [190.Reverse Bits](#190reverse-bits)
    - [其他位运算技巧](#%E5%85%B6%E4%BB%96%E4%BD%8D%E8%BF%90%E7%AE%97%E6%8A%80%E5%B7%A7)
    - [136. Single Number](#136-single-number)
    - [389. Find the Difference](#389-find-the-difference)
    - [80. Remove Duplicates from Sorted Array II](#80-remove-duplicates-from-sorted-array-ii)
- [二分查找](#%E4%BA%8C%E5%88%86%E6%9F%A5%E6%89%BE)
    - [二分法注意事项:](#%E4%BA%8C%E5%88%86%E6%B3%95%E6%B3%A8%E6%84%8F%E4%BA%8B%E9%A1%B9)
    - [二分法总结案例](#%E4%BA%8C%E5%88%86%E6%B3%95%E6%80%BB%E7%BB%93%E6%A1%88%E4%BE%8B)
    - [349. Intersection of Two Arrays(交集)](#349-intersection-of-two-arrays%E4%BA%A4%E9%9B%86)
        - [学习`set`和`unordered_set`的`初始化`与`插入`。](#%E5%AD%A6%E4%B9%A0set%E5%92%8Cunorderedset%E7%9A%84%E5%88%9D%E5%A7%8B%E5%8C%96%E4%B8%8E%E6%8F%92%E5%85%A5%E3%80%82)
    - [350. Intersection of Two Arrays II](#350-intersection-of-two-arrays-ii)
    - [167. Two Sum II - Input array is sorted](#167-two-sum-ii---input-array-is-sorted)
    - [744. Find Smallest Letter Greater Than Target](#744-find-smallest-letter-greater-than-target)
    - [153. 寻找旋转排序数组中的最小值](#153-%E5%AF%BB%E6%89%BE%E6%97%8B%E8%BD%AC%E6%8E%92%E5%BA%8F%E6%95%B0%E7%BB%84%E4%B8%AD%E7%9A%84%E6%9C%80%E5%B0%8F%E5%80%BC)
    - [154. Find Minimum in Rotated Sorted Array II(含有重复数)](#154-find-minimum-in-rotated-sorted-array-ii%E5%90%AB%E6%9C%89%E9%87%8D%E5%A4%8D%E6%95%B0)
    - [33. Search in Rotated Sorted Array](#33-search-in-rotated-sorted-array)
    - [35. Search Insert Position(区间和算法区间一致)](#35-search-insert-position%E5%8C%BA%E9%97%B4%E5%92%8C%E7%AE%97%E6%B3%95%E5%8C%BA%E9%97%B4%E4%B8%80%E8%87%B4)
    - [34. 搜索范围](#34-%E6%90%9C%E7%B4%A2%E8%8C%83%E5%9B%B4)
    - [74. 搜索二维矩阵](#74-%E6%90%9C%E7%B4%A2%E4%BA%8C%E7%BB%B4%E7%9F%A9%E9%98%B5)
- [Array](#array)
    - [1. (832)反转图片](#1-832%E5%8F%8D%E8%BD%AC%E5%9B%BE%E7%89%87)
    - [2. (867)Transpose Matrix](#2-867transpose-matrix)
    - [3. (16)最接近的三数之和](#3-16%E6%9C%80%E6%8E%A5%E8%BF%91%E7%9A%84%E4%B8%89%E6%95%B0%E4%B9%8B%E5%92%8C)
    - [4. (13)三数之和](#4-13%E4%B8%89%E6%95%B0%E4%B9%8B%E5%92%8C)
    - [5.(18) 四数之和](#518-%E5%9B%9B%E6%95%B0%E4%B9%8B%E5%92%8C)
- [树](#%E6%A0%91)
    - [广度优先搜索(层次遍历)](#%E5%B9%BF%E5%BA%A6%E4%BC%98%E5%85%88%E6%90%9C%E7%B4%A2%E5%B1%82%E6%AC%A1%E9%81%8D%E5%8E%86)
        - [111. Minimum Depth of Binary Tree（找二叉树的最小深度）](#111-minimum-depth-of-binary-tree%EF%BC%88%E6%89%BE%E4%BA%8C%E5%8F%89%E6%A0%91%E7%9A%84%E6%9C%80%E5%B0%8F%E6%B7%B1%E5%BA%A6%EF%BC%89)
        - [104. Maximum Depth of Binary Tree](#104-maximum-depth-of-binary-tree)
        - [111. Minimum Depth of Binary Tree](#111-minimum-depth-of-binary-tree)
        - [102. Binary Tree Level Order Traversal(二叉树的层序遍历)](#102-binary-tree-level-order-traversal%E4%BA%8C%E5%8F%89%E6%A0%91%E7%9A%84%E5%B1%82%E5%BA%8F%E9%81%8D%E5%8E%86)
            - [`vector`的`reserve`用法，](#vector%E7%9A%84reserve%E7%94%A8%E6%B3%95%EF%BC%8C)
        - [226. Invert Binary Tree](#226-invert-binary-tree)
        - [112. Path Sum](#112-path-sum)
- [贪心算法](#%E8%B4%AA%E5%BF%83%E7%AE%97%E6%B3%95)
    - [11. 盛最多水的容器](#11-%E7%9B%9B%E6%9C%80%E5%A4%9A%E6%B0%B4%E7%9A%84%E5%AE%B9%E5%99%A8)
- [报错](#%E6%8A%A5%E9%94%99)
- [常用算法函数](#%E5%B8%B8%E7%94%A8%E7%AE%97%E6%B3%95%E5%87%BD%E6%95%B0)
    - [`std::accumulate`定义于头文件 `<numeric>`](#stdaccumulate%E5%AE%9A%E4%B9%89%E4%BA%8E%E5%A4%B4%E6%96%87%E4%BB%B6-numeric)
        - [`std::next` 定义于头文件`<iterator>`](#stdnext-%E5%AE%9A%E4%B9%89%E4%BA%8E%E5%A4%B4%E6%96%87%E4%BB%B6iterator)
        - [`std::multiplies`:乘](#stdmultiplies%E4%B9%98)
    - [`std::vector::back`](#stdvectorback)
- [std::bitset::to_string](#stdbitsettostring)

<!-- /TOC -->
# String 

## 1. (657. Judge Route Circle)

Initially, there is a Robot at position (0, 0). Given a sequence of its moves, judge if this robot makes a circle, which means it moves back to the original place.

The move sequence is represented by a string. And each move is represent by a character. The valid robot moves are R (Right), L (Left), U (Up) and D (down). The output should be true or false representing whether the robot makes a circle.

 **Example** 

```
Input: "UD"
Output: true

Input: "LL"
Output: false
```

 **code**

```c
class Solution {
public:
    bool judgeCircle(string moves) {
        int U,L;
        U=L=0;
        for(int i=0;i<moves.size();i++)
        {
            if((moves[i]-'U')==0)
                U++;
            else if((moves[i]-'D')==0)
                U--;
            else if((moves[i]-'L')==0)
                L++;
            else if((moves[i]-'R')==0)
                L--;
            else 
                return false;
        }
        if((U==0) && (L==0))
            return true;
        else 
            return false; 
    }
};
```

## 2. (344. Reverse String)

Write a function that takes a string as input and returns the string reversed.  
Example:  
```
Given s = "hello", return "olleh".
```
**code**
```c
class Solution {
public:
    string reverseString(string s) {
        string r;
        std::copy(s.crbegin(), s.crend(), std::back_inserter(r));
        return r;
    }
};
```

## 3. (557. Reverse Words in a String III)
Given a string, you need to reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

**Example**
```
Input: "Let's take LeetCode contest"
Output: "s'teL ekat edoCteeL tsetnoc"
```
Note: In the string, each word is separated by single space and there will not be any extra space in the string.

**code**

```c
class Solution {
public:
        string reverseWords(string s) {
        size_t front = 0;
        for(int i = 0; i <= s.length(); i++){
            if(i == s.length() || s[i] == ' '){
                reverse(&s[front], &s[i]);
                front = i + 1;
            }
        }  
        return s;
    }
};
```
## 4. (520. Detect Capital)
判断是否符合大写书写规则。

1. All letters in this word are capitals, like "USA".
2. All letters in this word are not capitals, like "leetcode".
3. Only the first letter in this word is capital if it has more than one letter, like "Google".

**Example**

```
Input: "USA"
Output: True

Input: "FlaG"
Output: False
```
Note: The input will be a non-empty word consisting of uppercase and lowercase latin letters.

**code**

```c
* class Solution {
public:
    bool detectCapitalUse(string word) {
        int m=0;
        
        for(int i=0;i<word.size();i++)
        {
            if(word[i]<='Z')
            {
                m++;
            }      
        }
        if((0==m)||(m==word.size()))
            return true;
        else if(m==1)
        {
            if(word[0]<='Z')
                return true;
            else             //少了这一句，提交时报错无返回值
                return false;
        }
        else 
            return false;
        
    }
};
```
## 5.(383. Ransom Note)

Given an arbitrary ransom note string and another string containing letters from all the magazines, write a function that will return true if the ransom note can be constructed from the magazines ; otherwise, it will return false.

Note:
You may assume that both strings contain only lowercase letters.

**Example**

```
canConstruct("a", "b") -> false
canConstruct("aa", "ab") -> false
canConstruct("aa", "aab") -> true
```
**code** 

```c
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> map;
        for(int i=0;i<magazine.size();i++)
        {
            map[magazine[i]]++;
        }
        for(int i=0;i<ransomNote.size();i++)
        {
            map[ransomNote[i]]--;
        }
        for(auto m:map)
        {
            if(m.second<0)
                return false;
        }
        return true;
        
    }
};
```
## 6. (771. Jewels and Stones)
You're given strings J representing the types of stones that are jewels, and S representing the stones you have.  Each character in S is a type of stone you have.  You want to know how many of the stones you have are also jewels.

The letters in J are guaranteed distinct, and all characters in J and S are letters. Letters are case sensitive, so "a" is considered a different type of stone from "A".

**Example** 

```
Input: J = "aA", S = "aAAbbbb"
Output: 3

Input: J = "z", S = "ZZ"
Output: 0
```

Note:

* S and J will consist of letters and have length at most 50.  
* The characters in J are distinct.

**code**

```c
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int counts=0;
        if(J.empty()||S.empty())
            return 0;
        for(int i=0;i<S.size();i++)
        {
            for(int j=0;j<J.size();j++)
            {
                if(S[i]==J[j])
                    counts++;
            }
            
        }
        return counts;
        
    }
};
```
## 7. (387. First Unique Character in a String)

Given a string, find the first non-repeating character in it and return it's index. If it doesn't exist, return -1.

**Examples**:

```
s = "leetcode"
return 0.

s = "loveleetcode",
return 2.
```

Note: You may assume the string contain only lowercase letters.

**code**
```c
class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> vec(26,0);
        for(int i=0;i<s.size();i++)
        {
            vec[s[i]-'a']++;
        }
        for(int i=0;i<s.size();i++)
        {
            if(vec[s[i]-'a']==1)
            {
                return i;      
            }
            
        }
        return -1;
        
    }
};
```
## 8. (49. Group Anagrams)

Given an array of strings, group anagrams together.

For example, given: ["eat", "tea", "tan", "ate", "nat", "bat"], 
Return:

```
[
  ["ate", "eat","tea"],
  ["nat","tan"],
  ["bat"]
]
```
Note: All inputs will be in lower-case.

**code**

```c
class Solution {
public:
        vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, multiset<string>> mp;
        for (string s : strs) {
            string t = s; 
            sort(t.begin(), t.end());
            mp[t].insert(s);
        }
        vector<vector<string>> anagrams;
        for (auto m : mp) { 
            vector<string> anagram(m.second.begin(), m.second.end());
            anagrams.push_back(anagram);
        }
        return anagrams;
    }
};
```

## 9. (1. Two Sum)

Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

**Example**:

```
Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].

```

**code**

```c
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> solution;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                int k=nums[i]+nums[j];
                if(k==target)
                {
                    solution.push_back(i);
                    solution.push_back(j);
                    return solution;
                } 
               
            }
        }
         
    }
};
```

## 10. (242. Valid Anagram)

Given two strings s and t, write a function to determine if t is an anagram of s.

For example,
s = "anagram", t = "nagaram", return true.
s = "rat", t = "car", return false.

Note:
You may assume the string contains only lowercase alphabets.

**code**

```c
class Solution 
{
public:
    bool isAnagram(string s, string t) 
    {
        if(s.size() !=t.size())
            return false;
        for(string::size_type i=0;i<s.size();i++)
        {
            if(t.find(s[i])!=std::string::npos)
                t.erase(t.find(s[i]),1);
            else
                break; 
        }
        if(t.empty())
        {
            return true;
        }
        else
            return false;
        
        
    }
};
```

## 11. (412. Fizz Buzz)

Write a program that outputs the string representation of numbers from 1 to n.

But for multiples of three it should output “Fizz” instead of the number and for the multiples of five output “Buzz”. For numbers which are multiples of both three and five output “FizzBuzz”.

**Example**:

```
n = 15,

Return:
[
    "1",
    "2",
    "Fizz",
    "4",
    "Buzz",
    "Fizz",
    "7",
    "8",
    "Fizz",
    "Buzz",
    "11",
    "Fizz",
    "13",
    "14",
    "FizzBuzz"
]
```

**code**

```c
class Solution {
public:
    vector<string> fizzBuzz(int n) {
			vector<string> strs;
			for (int i = 1; i < n+1; i++)
			{
				if (i % 15 == 0)
					strs.push_back( "FizzBuzz");
				else if (i % 3 == 0)
					strs.push_back("Fizz");
				else if (i % 5== 0)
					strs.push_back("Buzz");
				else
					strs.push_back(std::to_string(i));

			}
			return strs;

		}
};
```

## 12. (28. Implement strStr())

Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

**Example**

```
Input: haystack = "hello", needle = "ll"
Output: 2

Input: haystack = "aaaaa", needle = "bba"
Output: -1
```

**code** 

```c
#include <string>
class Solution {
public:
    int strStr(string haystack, string needle) {
      if(needle.empty()&&haystack.empty())
      {
          return 0;
      }
      if(haystack.size()<needle.size())
          return -1;
      if(haystack.empty()) return -1;
      for(string::size_type i=0;i<haystack.size()-needle.size()+1;i++)
      {
             string::size_type j=0;
             for(;j<needle.size();j++)
             {
              if(haystack[i+j]!=needle[j])
                  break; 
             } 
             if(j==needle.size())
                 return i;
      }
        
      return -1; 
        
    }
};
```

## 13. (55. 比较字符串-lintcode)

比较两个字符串A和B，确定A中是否包含B中所有的字符。字符串A和B中的字符都是 大写字母.

注意事项

在 A 中出现的 B 字符串里的字符不需要连续或者有序。

**Example**

```
给出 A = "ABCD" B = "ACD"，返回 true

给出 A = "ABCD" B = "AABC"， 返回 false
```

**code** 

```c
class Solution {
public:
    /*
     * @param A: A string
     * @param B: A string
     * @return: if string A contains all of the characters in B return true else return false
     */
    bool compareStrings(string &A, string &B) {
        // write your code here
        if(B.size()>A.size()) return false;
        //if(A.empty()) return false;
        if(B.empty()) return true;
        string::size_type len_a = A.size();
		string::size_type len_b = B.size();
        unordered_map<char,int> AA;
        for(string::size_type i=0;i<len_b;i++)
        {
            AA[A[i]]++;
            AA[B[i]]--;
        }
        for(string::size_type j=len_b;j<len_a;j++)
        {
            AA[A[j]]++;
        }
        for(auto counts:AA)
        {
            if(counts.second<0)
                return false;
        }
        return true;
    }
};
```

## 14. (551. Student Attendance Record I)

You are given a string representing an attendance record for a student. The record only contains the following three characters:

1. 'A' : Absent.
2. 'L' : Late.
3. 'P' : Present.

A student could be rewarded if his attendance record doesn't contain more than one 'A' (absent) or more than two **continuous** 'L' (late).

You need to return whether the student could be rewarded according to his attendance record.

Example 

```
Input: "PPALLP"
Output: True

Input: "PPALLL"
Output: False
```
**code**

```c
class Solution {
public:
    bool checkRecord(string s) {
        int num_a,num_l;
        num_a=num_l=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]-'A'==0)
                num_a++;
            if(s[i]-'L'==0)//注意if...else用法
                num_l++;
            else
                num_l=0;
            if(num_a>=2||num_l>=3)
            return false;
        }
        return true;  
    }
};
```
## 15. (459. Repeated Substring Pattern)

Given a non-empty string check if it can be constructed by taking a substring of it and appending multiple copies of the substring together. You may assume the given string consists of lowercase English letters only and its length will not exceed 10000.

**Example** 

```
Input: "abab"

Output: True

Explanation: It's the substring "ab" twice.

Input: "aba"

Output: False

Input: "abcabcabcabc"

Output: True

Explanation: It's the substring "abc" four times. (And the substring "abcabc" twice.)
```

**code**

```c
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
		// unordered_map<char, int> map;
		// for (int i = 0; i < s.size(); i++)
		// {
		// 	map[s[i]]++;
		// }
		// int num = 0;
		// for (auto ss : map)
		// {
		// 	if (ss.second == 1)
		// 		return false;
		// 	num = ss.second;
		// }
		// for (auto ss : map)
		// {
		// 	if (num != ss.second)
		// 		return false;
		// }
		// return true;
        int n = s.length();
        for (int i = 1; i <= n / 2; i++)
            if (n % i == 0 && s.substr(i) == s.substr(0, n - i))
                return true;
        return false;

	}
};
```
## 16. (345. Reverse Vowels of a String)

Write a function that takes a string as input and reverse only the vowels of a string.

Example 1:
Given s = "hello", return "holle".

Example 2:
Given s = "leetcode", return "leotcede".

Note:
The vowels does not include the letter "y".

**code**

```c
class Solution {
public:
    string reverseVowels(string s) {
        stack<char> vchar;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'
              ||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                vchar.push(s[i]);
                s[i]='*';
            }   
        }
        //vector<char> vc_char;
        //std::copy(vchar.crbegin(), vchar.crend(), std::back_inserter(vc_char));
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='*')
            {
                s[i]=vchar.top();
                vchar.pop();
            }
                
            
        }
        return s;
    }
};
```

## 17. (434. Number of Segments in a String)
Count the number of segments in a string, where a segment is defined to be a contiguous sequence of non-space characters.

Example:

```
Input: "Hello, my name is John"
Output: 5
```

**code**

```c
class Solution {
public:
    int countSegments(string s) {

        int m=0;
        s.push_back(' ');//为了最后一个字符判断
        for(int i=1;i<s.size();i++)//若从0开始判断，s[i-1]会溢出，不是空！
        {
            if(s[i]==' '&&s[i-1]!=' ')
                m++;
        }
        return m;
    }
};
```

## 18.(有效的回文字符串)

Example:

"A man, a plan, a canal: Panama" is a palindrome.  
"race a car" is not a palindrome.

Note:
Have you consider that the string might be empty? This is a good question to ask during an interview.

**code** 

* 两个变量的for循环

### `isalnum()``isspace()`:判断是否为字符或数字/空格
### `toupper()``tolower()`:转换为大/小写(cctype)
```c
bool isPalindrome(string s) {
    for (int i = 0, j = s.size() - 1; i < j; i++, j--) { // Move 2 pointers from each end until they collide
        while (isalnum(s[i]) == false && i < j) i++; // Increment left pointer if not alphanumeric
        while (isalnum(s[j]) == false && i < j) j--; // Decrement right pointer if no alphanumeric
        if (toupper(s[i]) != toupper(s[j])) return false; // Exit and return error if not match
    }
    
    return true;
}
```

## 19.(214. Shortest Palindrome-如何重整使最小回文)

Given a string S, you are allowed to convert it to a palindrome by adding characters in front of it. Find and return the shortest palindrome you can find by performing this transformation.

For example:

Given "aacecaaa", return "aaacecaaa".

Given "abcd", return "dcbabcd".

思路：让在前面补一些字符使得给定的字符串变成回文，观察可以发现我们需要添加多少个字符与给定字符串的前缀子串回文的长度有关．也就是说去掉其前缀的回文子串，我们只需要补充剩下的子串的逆序就行了，举个栗子：aacecaaa，其前缀的最大回文子串是aacecaa，剩下了一个a，因此我们只需要在前面加上一个a的逆序a就行了．再例如abcd，其前缀的最大回文是a，因此剩下的子串就为bcd，所以需要在前面加上bcd的逆序，就变成了dcbabcd．所以这样问题就转化为求字符串的前缀最大回文长度．

OK，思路是这样，接下来就要看怎么实现了，一个naive的方法是先判断整个字符串是否回文，否的话再判断前n-1个子串是否回文，这样依次缩减长度，直到找到一个回文子串就是最大的前缀回文子串．这种方法简单粗暴，容易理解和实现，如果在面试中要求不是很严格的情况下说不定可以过关, 反正总比不会好点^.^．其时间复杂度是O(n!)．

### KMP

[KMP算法讲解](https://www.cnblogs.com/zhangtianq/p/5839909.html)

**注意最长前缀：是说以第一个字符开始，但是不包含最后一个字符。 比如aaaa相同的最长前缀和最长后缀是aaa。** 

对于目标字符串ptr，ababaca，长度是7，所以next[0]，next[1]，next[2]，next[3]，next[4]，next[5]，next[6]分别计算的是 a，ab，aba，abab，ababa，ababac，ababaca的相同的最长前缀和最长后缀的长度。由于a，ab，aba，abab，ababa，ababac，ababaca的相同的最长前缀和最长后缀是“”，“”，“a”，“ab”，“aba”，“”，“a”,所以next数组的值是[-1,-1,0,1,2,-1,0]，这里-1表示不存在，0表示存在长度为1，2表示存在长度为3。这是为了和代码相对应。

综上，KMP的next 数组相当于告诉我们：当模式串中的某个字符跟文本串中的某个字符匹配失配时，模式串下一步应该跳到哪个位置。下一步用next [j] 处的字符继续跟文本串i 处的字符匹配，相当于模式串向右移动 j - next[j] 位。

**code**

* [KMP算法](https://leetcode.com/problems/shortest-palindrome/discuss/60141/c-8-ms-kmp-based-on-time-on-memory-solution)
* 暴力匹配

```c
class Solution {
public:
////time-consuming
//     string shortestPalindrome(string s) {
//         string strs=s;//copy
//         int m=s.size()-1;
        
//         if(!Palindrome(s))
//             for(int i=s.size()-1;i>0;i--)
//             {
//                 strs.insert(m-i,1,s[i]);
//                 if(Palindrome(strs))
//                     return strs;
//             }
//         else
//             return strs;
        
//     }
//     bool Palindrome(string str)
//     {
//         int i=0;
//         if(str=="")
//             return true;
        
//         for(int j=str.size()-1;i<j;)
//         {
//             if(str[i]==str[j])
//             {
//                 i++;
//                 j--;
//             }
//             else 
//                 return false;
//         }
//         return true;
//     }
    string shortestPalindrome(string s) 
    {
        string rev=s;
        reverse(rev.begin(),rev.end());
        int n=s.size();
        for(int i=n;i>0;i--)
        {
            if(s.substr(0,i)==rev.substr(n-i))
                return rev.substr(0,n-i)+s;   //0-0 为空
        }
        return "";  
    }
};
```

## 20. (151 Reverse Words in a String)

Given an input string, reverse the string word by word.

For example,
Given s = "   the   sky is blue      ",

return "blue is sky the".

注意：消除讨厌的多余空格。

**code**

[简书](https://www.jianshu.com/p/85461781a106)
### `isspace()`:判断空格函数
```c
class Solution
{
public:
    void reverseWords(string &s)
    {
        // 把字符串分割成单词（以空白符为间隔）
        vector<string> words;
        split(s, words);
        
        // 把单词反向连接（单词间以空白符分隔）
        s.clear();
        for_each(words.rbegin(), words.rend(), [&](string &w) { s += (w + " "); });
        
        // 如果末尾有多余的空白符，去掉它。
        if (!s.empty())
        {
            s.pop_back();
        }
    }

private:
    void split(const string &s, vector<string> &words)
    {
        int pos = 0;
        while (pos < s.size())
        {
            while (isspace(s[pos]))  
            {
                pos++;
            }
            
            int len = 1;
            while (pos + len <= s.size() && !isspace(s[pos + len]))
            {
                len++;
            }
            
            auto w = s.substr(pos, len);
            if (!w.empty())
            {
                words.push_back(w);
            }
            pos += len;
        }
    }
};
```

## 21. (696. Count Binary Substrings)

```
Input: "00110011"
Output: 6
Explanation: There are 6 substrings that have equal number of consecutive 1's and 0's: "0011", "01", "1100", "10", "0011", and "01".
```

Notice that some of these substrings repeat and are counted the number of times they occur.

### 判断连续相同元素的处理

```c
class Solution {
    /**group method
     * 分别计算连续的0或1的个数存入vector里
     * 比较两者较小值
     */
    
public:
    int countBinarySubstrings(string s) {
        vector<int> rec;
        int count =1;
        int num=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==s[i+1])
            {
                count++; 
            }
            else
            {
                rec.push_back(count);
                count=1;
            }
        }
        for(int i=1;i<rec.size();i++)
        {
            num+=min(rec[i],rec[i-1]);
        }
        return num;
        
    }
```

### 485. Max Consecutive Ones（3.20）找出最大连续1的个数

找出连续1的个数

```
Input: [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s.
    The maximum number of consecutive 1s is 3.
```
Note:

The input array will only contain 0 and 1.
The length of input array is a positive integer and will not exceed 10,000

```c
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int counts=0;
        priority_queue<int> res;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
                counts++;
            else
            {
                res.push(counts);
                counts=0;
            }
                
        }
        res.push(counts);
        return res.top();
    }
};

```
## 22. (477. Total Hamming Distance)

### 注意>>操作不改变实际值

```c
class Solution {
public:
    /*
    int totalHammingDistance(vector<int>& nums) {
        int sum=0;
        if(nums.size()==0)
            return 0;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i;j<nums.size();j++)
            {
                sum+=HammingDistance(nums[i],nums[j]);
            }
        }
        return sum;
        
    }
private:
    int HammingDistance(int &num1,int &num2)
    {
        int num=num1^num2;
        int count=0;
        while(num!=0)
        {
            num&=(num-1);
            count++;
        }
        return count;
    }
    */
    
    //注意>>不改变值
    int totalHammingDistance(vector<int>& nums) {
        int sum=0;
        for(int b=0;b<32;b++)
        {
            int counts=0;
//             for (int i = 0; i < nums.size(); i++)
// 		    {
// 			    int m = 0;
// 			    nums[i] >> b;//>>不改变值,nums[i]没有变
// 			    m = nums[i]>>b;
// 			    if (m & 1)
// 				    counts++;
// 		    }
            for (int i = 0; i < nums.size(); i++)
 		    {
                counts+=nums[i] >> b&1;
            }
            sum+=counts*(nums.size()-counts);
        }
        return sum;
        
    }
};
```

## 283. Move Zeroes

### `vector`的`remove()`和`fill()`
* `remove()`: remove的时候只是通过迭代器的指针向前移动来删除，将没有被删除的元素放在链表的前面，并返回一个指向新的超尾值的迭代器。（对vector来说）remove()函数并不是真正的删除，要想真正删除元素则可以使用erase()或者resize()函数。
```c
#include <algorithm>
#include <string>
#include <iostream>
#include <cctype>
 
int main()
{
    std::string str1 = "Text with some   spaces";
    str1.erase(std::remove(str1.begin(), str1.end(), ' '),
               str1.end());
    std::cout << str1 << '\n';
 
    std::string str2 = "Text\n with\tsome \t  whitespaces\n\n";
    str2.erase(std::remove_if(str2.begin(), 
                              str2.end(),
                              [](unsigned char x){return std::isspace(x);}),
               str2.end());
    std::cout << str2 << '\n';
}
```

Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

For example, given nums = [0, 1, 0, 3, 12], after calling your function, nums should be [1, 3, 12, 0, 0]

```c
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // int j=0;
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[i]!=0)
        //     {
        //         nums[j]=nums[i];
        //         j++;
        //     }
        // }
        // for (;j < nums.size(); j++) {
        //     nums[j] = 0;
        // }
       fill(remove(nums.begin(), nums.end(),0), nums.end(), 0);
    }
};
```
## 27. Remove Element(也是remove)

Example:

Given nums = [3,2,2,3], val = 3,

Your function should return length = 2, with the first two elements of nums being 2.

```c
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        nums.erase(remove(nums.begin(),nums.end(),val),nums.end());
        return nums.size();
    }
};
```
## 451. Sort Characters By Frequency(3/15)
### `map`和`unordered_map`区别用法
### `string1+=string(3, string2)`的用法

Example 1:

Input:
"tree"

Output:
"eert"

Explanation:
'e' appears twice while 'r' and 't' both appear once.
So 'e' must appear before both 'r' and 't'. Therefore "eetr" is also a valid answer.

```c
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freqOfChar;
        for(char c : s) {
            freqOfChar[c] ++;
        }
        
        map<int, string> dupStr;
        for(auto v : freqOfChar) {
            char c = v.first;
            int n = v.second;
            dupStr[n] += string(n, c);
        }
        
        
        string res;
        for(auto rit = dupStr.rbegin(); rit != dupStr.rend(); ++rit) {
            res += rit->second;
        }
        return res;
    
    }
};
```

## 347. Top K Frequent Elements

### 优先队列的使用(make_pair)

`priority_queue<pair<int,int>>`

For example,
Given [1,1,1,2,2,3] and k = 2, return [1,2].

```c
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        vector<int> res;
        res.reserve(nums.size());
        for(int m:nums)
            map[m]++;
         
        // pair<first, second>: first is frequency,  second is number
        priority_queue<pair<int,int>> pq; 
        for(auto s:map)
        {
            pq.push(make_pair(s.second,s.first));
        }
        for(int i=0;i<k;i++)
        {
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};
```

## 692. Top K Frequent Words

### 优先队列中比较函数的使用

Example 1:
```
Input: ["i", "love", "leetcode", "i", "love", "coding"], k = 2
Output: ["i", "love"]
Explanation: "i" and "love" are the two most frequent words.
    Note that "i" comes before "love" due to a lower alphabetical order.
```

code

```c
class Solution {
public:
    struct cmp {
        bool operator () (const pair<int, string>& a, const pair<int, string>& b) 
        {
            return a.first == b.first ? a.second > b.second : a.first < b.first;
        }  
    };
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> map;
        for(auto m:words)
            map[m]++;
        priority_queue<pair<int,string>,vector<pair<int,string>>,cmp> pq;
        
        for(auto s:map)
        {
            string str=s.first;
            int count=s.second;
            pq.push(make_pair(count,str));
        }
        vector<string> result;
        result.reserve(pq.size());
        for(int i=0;i<k;i++)
        {
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result;
        
    }
};
```

## 23. 532. Third Maximum Number

### set的用法

std::set 是关联容器，含有 Key 类型对象的已排序集。用比较函数 Compare 进行排序。搜索、移除和插入拥有对数复杂度。 set 通常以红黑树实现。

红黑树（Red Black Tree） 是一种自平衡二叉查找树

默认排列按照中序遍历，从小到大（begin最小）

# 动态规划(dynamic programming)

动态规划算法：

(1)、全局最优解中一定包含某个局部最优解，但不一定包含前一个局部最优解，因此需要记录之前的所有最优解；

(2)、动态规划的关键是状态转移方程，即如何由以求出的局部最优解来推导全局最优解；

(3)、边界条件：即最简单的，可以直接得出的局部最优解。

## 1.(397. Integer Replacement)

Given a positive integer n and you can do operations as follow:

If n is even, replace n with n/2.
If n is odd, you can replace n with either n + 1 or n - 1.
What is the minimum number of replacements needed for n to become 1?

Example 1:

```
Input:
8

Output:
3

Explanation:
8 -> 4 -> 2 -> 1
```

```c
class Solution {
public:
    int integerReplacement(int n) {
        if( n <= 1) return 0;
        if(n == INT_MAX) return 32;
        if(n==3) return 2;
        if(n%2==0)
            return integerReplacement(n/2)+1;
        else
        {
            if(((n+1)/2)%2==0)
                return integerReplacement(n+1)+1;
            else 
                return integerReplacement(n-1)+1;
        }
    }
};
```
## 2. (121)Best Time to Buy and Sell Stock

> 给定一个数组，它的第 i 个元素是一支给定股票第 i 天的价格。如果你最多只允许完成一笔交易（即买入和卖出一支股票），设计一个算法来计算你所能获取的最大利润。

> 注意你不能在买入股票前卖出股票。

示例 1:

输入: [7,1,5,3,6,4]
输出: 5
解释: 在第 2 天（股票价格 = 1）的时候买入，在第 5 天（股票价格 = 6）的时候卖出，最大利润 = 6-1 = 5 。
     注意利润不能是 7-1 = 6, 因为卖出价格需要大于买入价格。


```c
// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         if(prices.size()<2)
//             return 0;
//         int cur_pro=prices[1]-prices[0];
//         int total_pro=prices[1]-prices[0];
//         for(int i=1;i<prices.size()-1;++i)
//         {
//            int del=prices[i+1]-prices[i];
//             cur_pro=max(del,cur_pro+del);
//             total_pro=max(cur_pro,total_pro);
//         }
//         if(total_pro<0) return 0;
//         return total_pro;
            
//     }
// };

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice = INT_MAX;
        int maxprofit = 0;
        for (int i = 0; i < prices.size(); i++) {  
            if (prices[i] < minprice) {
                minprice = prices[i];
            } else if (prices[i] - minprice > maxprofit) {
                maxprofit = prices[i] - minprice;
            }
        }
        
        return maxprofit;
    }
};
```

## 3.(53)最大子序和
> 给定一个整数数组 nums ，找到一个具有最大和的连续子数组（子数组最少包含一个元素），返回其最大和。

示例:

```
输入: [-2,1,-3,4,-1,2,1,-5,4],
输出: 6
解释: 连续子数组 [4,-1,2,1] 的和最大，为 6。
```

```c
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int currentSum =nums[0], totalSum = nums[0];
        
        for(int i=1; i<nums.size(); i++) {

            //Current max sum is either the current element OR current element + Previous Maximum subarray)
            currentSum = max(nums[i], currentSum+nums[i]); 
            
            //If the current maximum array sum is greater than the global total. Update it
            totalSum = max(totalSum, currentSum);
    }
        return totalSum;
    }
};

//Method2
// int maxSubArray(vector<int>& nums) {
        
//         int currentSum = 0, totalSum = INT_MIN;
        
//         for(int i=0; i<nums.size(); i++) {
            
//             //Sum till this point ======= Current Sum till this point + this element
//             currentSum = currentSum + nums[i]; 
            
//             //If the current maximum array sum is greater than the global total. Update it
//             totalSum = max(totalSum, currentSum);
            
//             //If you get current as less thn 0 then its no point in carrying forward. Make it 0
//             currentSum = max(0,currentSum);
//     }
//         return totalSum;
//     }
```

## 4.(152. Maximum Product Subarray)

> Given an integer array nums, find the contiguous subarray within an array (containing at least one number) which has the largest product.

Example 1:

```
Input: [2,3,-2,4]
Output: 6
Explanation: [2,3] has the largest product 6.
```
```c
class Solution {
public:
    int maxProduct(vector<int>& nums) {
         // store the result that is the max we have found so far
    int r = nums[0];

    // imax/imin stores the max/min product of
    // subarray that ends with the current number A[i]
    for (int i = 1, imax = r, imin = r; i < nums.size(); i++) {
        // multiplied by a negative makes big number smaller, small number bigger
        // so we redefine the extremums by swapping them
        if (nums[i] < 0)
            swap(imax, imin);

        // max/min product for the current number is either the current number itself
        // or the max/min by the previous number times the current one
        imax = max(nums[i], imax * nums[i]);
        imin = min(nums[i], imin * nums[i]);

        // the newly computed max value is a candidate for our global result
        r = max(r, imax);
    }
    return r;
}
};

```

## 5. 697. Degree of an Array

> 给定一个非空且只包含非负数的整数数组 nums, 数组的度的定义是指数组里任一元素出现频数的最大值。
> 你的任务是找到与 nums 拥有相同大小的度的最短连续子数组，返回其长度。

示例 1:
```
输入: [1, 2, 2, 3, 1]
输出: 2
解释: 
输入数组的度是2，因为元素1和2的出现频数最大，均为2.
连续子数组里面拥有相同度的有如下所示:
[1, 2, 2, 3, 1], [1, 2, 2, 3], [2, 2, 3, 1], [1, 2, 2], [2, 2, 3], [2, 2]
最短连续子数组[2, 2]的长度为2，所以返回2.
```

```c
// class Solution {
// public:
//     int findShortestSubArray(vector<int>& nums) {
//         unordered_map<int,int>map;
//         int degree=0;
//         vector<int> vec;
//         for(auto s:nums) map[s]++;
//         for(auto s:map) 
//             degree=max(degree,s.second);
//         for(auto s:map){
//             if(s.second==degree) vec.push_back(s.first);
//         }
//         int len=100000;
//         for(auto s:vec)
//         {
//             int k=0;
//             vector<int> res;
//             res.resize(degree);
//             for(int i=0;i<nums.size();++i)
//             {
//                 if(s==nums[i])
//                     res[k++]=i;
//             }
//             int len_res=res[degree-1]-res[0]+1;
//             len=min(len,len_res);
//         }    
//         return len;    
        
            
//     }
// };

class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,vector<int>>map;
        int degree=0;
        for(int i=0;i<nums.size();++i) map[nums[i]].push_back(i);
        for(auto s:map)
            degree=max(degree,(int)(s.second.size()));
        int len=100000;
        for(auto s:map){
            if(s.second.size()==degree){
                len=min(len,s.second[degree-1]-s.second[0]+1);
            }
                
        }
        return len;    
                
        }   
};
```

# Backtracing(回溯法)

## 78. Subsets(求数组里所有的子集(Bit Manipulation/Backtrace/Iterative))(21/3)

* Recursive (Backtracking)

   This is a typical problem that can be tackled by backtracking. Since backtracking has a more-or-less similar template, so I do not give explanations for this method.
    ```c
    class Solution {
    public:
        vector<vector<int>> subsets(vector<int>& nums) {
            sort(nums.begin(), nums.end());
            vector<vector<int>> subs;
            vector<int> sub;  
            genSubsets(nums, 0, sub, subs);
            return subs; 
        }
        void genSubsets(vector<int>& nums, int start, vector<int>& sub, vector<vector<int>>& subs) {
            subs.push_back(sub);
            for (int i = start; i < nums.size(); i++) {
                sub.push_back(nums[i]);
                genSubsets(nums, i + 1, sub, subs);
                sub.pop_back();
            }
        }
    };
    ```
* Iterative

    This problem can also be solved iteratively. Take [1, 2, 3] in the problem statement as an example. The process of generating all the subsets is like:
    ```
    Initially: [[]]
    Adding the first number to all the existed subsets: [[], [1]];
    Adding the second number to all the existed subsets: [[], [1], [2], [1, 2]];
    Adding the third number to all the existed subsets: [[], [1], [2], [1, 2], [3], [1, 3], [2, 3], [1, 2, 3]].
    ```
    The code is as follows.

    ```c
    class Solution {
    public:
        vector<vector<int>> subsets(vector<int>& nums) {
            sort(nums.begin(), nums.end());
            vector<vector<int>> subs(1, vector<int>());
            for (int i = 0; i < nums.size(); i++) {
                int n = subs.size();
                for (int j = 0; j < n; j++) {
                    subs.push_back(subs[j]); 
                    subs.back().push_back(nums[i]);
                }
            }
            return subs;
        }
    }; 
    ```
* Bit Manipulation

    This is the most clever solution that I have seen. The idea is that to give all the possible subsets, we just need to exhaust all the possible combinations of the numbers. And each number has only two possibilities: either in or not in a subset. And this can be represented using a bit.

    There is also another a way to visualize this idea. That is, if we use the above example, 1 appears once in every two consecutive subsets, 2 appears twice in every four consecutive subsets, and 3 appears four times in every eight subsets, shown in the following (initially the 8 subsets are all empty):
    ```
    [], [], [], [], [], [], [], []

    [], [1], [], [1], [], [1], [], [1]

    [], [1], [2], [1, 2], [], [1], [2], [1, 2]

    [], [1], [2], [1, 2], [3], [1, 3], [2, 3], [1, 2, 3]
    ```
    The code is as follows.
    ```c
    class Solution {
    public:
        vector<vector<int>> subsets(vector<int>& nums) {
            sort(nums.begin(), nums.end());
            int num_subset = pow(2, nums.size()); 
            vector<vector<int> > res(num_subset, vector<int>());
            for (int i = 0; i < nums.size(); i++)
                for (int j = 0; j < num_subset; j++)
                    if ((j >> i) & 1)
                        res[j].push_back(nums[i]);
            return res;  
        }
    };
    ```

# 位运算、异或的用法（技巧）

## 超详细位运算用法-leetcode

[超详细位运算用法-leetcode-371. Sum of Two Integers-discuss](https://leetcode.com/problems/sum-of-two-integers/discuss/84278/A-summary:-how-to-use-bit-manipulation-to-solve-problems-easily-and-efficiently)

* Set bit A |= 1 << bit
* Clear bit A &= ~(1 << bit)
* Test bit (A & 1 << bit) != 0
* Extract last bit A&-A or A&~(A-1) or x^(x&(x-1)) //提取最低位
* Remove last bit A&(A-1)
* Get all 1-bits ~0

一般用在“找不同”。
## `&` tricks

### 1. 191.Number of 1 Bits(位1的个数) 

```c
int count_one(int n) {
    while(n) {
        n = n&(n-1);
        count++;
    }
    return count;
}
```

### 2.是否为4的指数 或 2的指数

```c
bool isPowerOfFour(int n) {
    return !(n&(n-1)) && (n&0x55555555);//0x...010101010101010101010101
    //check the 1-bit location;
}
//是否为2的指数
bool isPowerOfFour(int n) {
    return !(n&(n-1));
    //check the 1-bit location;
}
```

### 3. 201. Bitwise AND of Numbers Range(难)

Given a range [m, n] where 0 <= m <= n <= 2147483647, return the bitwise AND of all numbers in this range, inclusive.

For example, given the range [5, 7], you should return 4.

```c
class Solution {
public:
    /*
    The idea is very simple:

    1.last bit of (odd number & even number) is 0.
    2.when m != n, There is at least an odd number and an even number, so       the last bit position result is 0.
    3.Move m and n rigth a position.
    
    
    */
    int rangeBitwiseAnd(int m, int n) {
        int i = 0; // i means we have how many bits are 0 on the right
        while(m != n)
        {
            m >>= 1;
            n >>= 1;
            i++;  
        }  
        return m << i;  
    }
};
```


## `^` tricks

Use `^` to remove even exactly same numbers and save the odd, or save the distinct bits and remove the same.

就是说经常用`^`去除个数为偶数而保留个数为奇数的元素，或者保留不同的位，去除相同的位。

* a^0=a
* a^a=0
* a^b^a=(a^a)^b=b

### 1. Sum of Two Integers

Use `^` and `&` to add two integers.

* a`^`b: 说明：a和b每个当前位分别是0和1，或者1，0.不涉及到`进制` 
* a`&`b: 说明: a和b都为1，所以要保留1且`进制`即`<<1`.

```c
int getSum(int a, int b) {
    return b==0? a:getSum(a^b, (a&b)<<1); //be careful about the terminating condition;
}
```

### 2. 268.Missing Number

Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the one that is missing from the array.

```
Example:

Input: [3,0,1]
Output: 2

Input: [9,6,4,2,3,5,7,0,1]
Output: 8
```

```c
int missingNumber(vector<int>& nums) {
    int ret = 0;
    for(int i = 0; i < nums.size(); ++i) {
        ret ^= i;
        ret ^= nums[i];
    }
    return ret^=nums.size();
}
```

## `|` tricks
Keep as many 1-bits as possible

### 找出小于或等于N的最大2的指数

Find the largest power of 2 (most significant bit in binary form), which is less than or equal to the given number N.

```c
long largest_power(long N) {
    //changing all right side bits to 1.
    N = N | (N>>1);
    N = N | (N>>2);
    N = N | (N>>4);
    N = N | (N>>8);
    N = N | (N>>16);
    return (N+1)>>1;
}
```

### 190.Reverse Bits

```c
uint32_t reverseBits(uint32_t n) {
    unsigned int mask = 1<<31, res = 0;
    for(int i = 0; i < 32; ++i) {
        if(n & 1) res |= mask;
        mask >>= 1;
        n >>= 1;
    }
    return res;
}
```

## 其他位运算技巧

A big advantage of bit manipulation is that it is trivial to iterate over all the subsets of an N-element set: every N-bit value represents some subset。

## 136. Single Number

在一个数组里找一个唯一个数为1的，其余均是2个。（时间复杂度O(n)）

1. Bit Manipulation(位运算):

    * a^0=a
    * a^a=0
    * a^b^a=(a^a)^b=b

    所以我们可以将所有元素一起异或，结果就是落单的那个数。
2. unordered_map

## 389. Find the Difference

```
Input:
s = "abcd"
t = "abcde"

Output:
e

Explanation:
'e' is the letter that was added.
```
## 80. Remove Duplicates from Sorted Array II
给定一个排序数组，你需要在原地删除重复出现的元素，使得每个元素最多出现两次，返回移除后数组的新长度。

不要使用额外的数组空间，你必须在原地修改输入数组并在使用 O(1) 额外空间的条件下完成。

```
给定 nums = [1,1,1,2,2,3],

函数应返回新长度 length = 5, 并且原数组的前五个元素被修改为 1, 1, 2, 2, 3 。

你不需要考虑数组中超出新长度后面的元素。
```
```c++
//c++
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<3)
            return nums.size();
        if(nums.empty())
            return 0;
        for(int i=0;i<nums.size()-2;i++)
        {
            if(nums[i]==nums[i+1]&&nums[i+1]==nums[i+2])
            {
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        return nums.size();
        
    }
};
```
# 二分查找
一般都是排好序，题目中暗含了这一信息。

如果是double，完全没什么难度，重点坑就是整数的。。。表示被坑过好多遍，毕竟弱渣。。。首先，如果题目属于"二分值越大越符合条件"，即要求符合条件的最小值，那就是while(r>l){mid=(l+r)/2。。。}然后更新是不符合条件l=mid+1，否则是r=mid反之，即 题目属于"二分值越小越符合条件"，即要求符合条件的最大值，那就是while(r>l){mid=(l+r+1)/2。。。}然后更新是符合条件l=mid，否则是r=mid-1至于为啥？→_→其实只要试试r-l=1的例子。。。感觉就理解了upd:又想起一坑{其实是看到有人写了}，如果涉及负数，最好用mid=l+(r-l)/2代替第1类，mid=l+(r-l+1)/2代替第2类.

## 二分法注意事项:
* 中位数:(常用的是下位中位数,语言int经常自动向下取整)
    * 下位中位数: lowerMedian=(length-1)/2
    * 上位中位数: upperMedian=length/2
* 指针的区间最好两头闭区间:[low,high]  
    ```c
    median=low+(high-low)/2
    median=(high-low)/2 //容易溢出
    ```
* 终结条件
    * 不要以`low==high`作为终止条件,容易被跳过;正确的应该是`low>high`:也就是搜索空间为空.
    * 满足终结条件,返回值不要纠结,直接返回低位`low`.

    ```java
    public int binarySearch(int[] nums,int target){
        int low=0,high=nums.length-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]<target) low=mid+1;
            if(nums[mid]>target) high=mid-1;
            if(nums[mid]>target) return mid;
        }
        return low;
    }
    ```
以上代码能工作,有一个前提条件:**元素空间没有重复值**.

推广到有重复元素的空间,二分查找问题就变成`寻找元素第一次出现的位置.`

## 二分法总结案例
```c
int search(int array[], int n, int v)
{
    int left, right, middle;
    left = 0, right = n;
    while (left < right)//这是一个左闭右开的区间:[0, n).
    {
        middle = (left + right) / 2;
        if (array[middle] > v)
            right = middle - 1;
        else if (array[middle] < v)
            left = middle + 1;
        else
            return middle;
    }
    return -1;
}
```
实际上,如果使用测试用例来测试,这个算法并不是在所有情况下都会出错的,还是有时可以得到正确的结果的.但是,你能看出来它错在哪儿吗?

这是一个左闭右开的区间:[0, n).

但是,在循环内部, 却不是这样操作的:
```c
middle = (left + right) / 2;
        if (array[middle] > v)
            right = middle - 1;
        else if (array[middle] < v)
            left = middle + 1;
        else
            return middle;
```
当array[middle] > v条件满足时, 此时v如果存在的话必然在左闭右开区间[left, middle)中, 因此,当这个条件满足时, right应该为middle, 而在这里, right赋值为middle - 1了, 那么, 就有可能遗漏array[middle - 1] = v的情况.

这是一种典型的二分查找算法写错的情况,循环体是左闭右开区间,而循环体内部却是采用左闭右闭区间的算法进行操作.
下面给出的两种正确的算法,算法search是左闭右闭区间算法,而算法search2是左闭右开区间算法,可以对比一下差异.

```c
//左闭右闭
int search(int array[], int n, int v)
{
    int left, right, middle;
    left = 0, right = n - 1;
    while (left <= right)//左闭右闭
    {
        middle = (left + right) / 2;
        if (array[middle] > v)
            right = middle - 1;
        else if (array[middle] < v)
            left = middle + 1;
        else
            return middle;
    }
    return -1;
}

//左闭右开
int search2(int array[], int n, int v)
{
    int left, right, middle;
    left = 0, right = n;
    while (left < right)//左闭右开
    {
        middle = (left + right) / 2;
        if (array[middle] > v)
            right = middle;//能取到右边界
        else if (array[middle] < v)
            left = middle + 1;
        else
            return middle;
    }
    return -1;
}
```

下面再给出另一种典型的错误的二分查找算法,当查找的元素不在序列内时,它可能造成程序的死循环.
```c
int search2(int array[], int n, int v)
{
    int left, right, middle;
    left = 0, right = n;
    while (left < right)//左闭右开
    {
        middle = (left + right) / 2;
        if (array[middle] > v)
            right = middle;//能取到右边界
        else if (array[middle] < v)
            left = middle + 1;
        else
            return middle;
    }
    return -1;
}
```
从循环条件来看,这个算法的操作区间是左闭右闭区间的,因此当array[middle] > v时,v如果存在的话应该在[left, middle- 1]中,因此此时right应该是middle - 1,而不是middle;类似的,当array[middle] < v时,下一次操作的区间应该是[middle + 1, right]中.而当元素不存在这个序列中时,算法在一个错误的区间中循环,但是又不能终止循环,于是就造成了死循环.

**总结**:

算法所操作的区间,是左闭右开区间,还是左闭右闭区间,这个区间,需要在循环初始化,循环体是否终止的判断中,以及每次修改left,right区间值这三个地方保持一致,否则就可能出错.

## 349. Intersection of Two Arrays(交集)
### 学习`set`和`unordered_set`的`初始化`与`插入`。
给定两个数组，写一个函数来计算它们的交集。

例子:

 给定 num1= [1, 2, 2, 1], nums2 = [2, 2], 返回 [2].
 ```c++
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        res.reserve(nums1.size());
        unordered_set<int> set1(nums1.begin(),nums1.end());
        unordered_set<int> set2(nums2.begin(),nums2.end());
        // for(int m:nums1)
        //     set1.insert(m);
        // for(int m:nums2)
        //     set2.insert(m);
        if(set1.empty()||set2.empty())
            return res;
        for(int m:set1)
        {
            if(set2.find(m)!=set2.end())
                res.push_back(m);
        }
        return res;      
    }
};
 ```

 ```java
 //java
class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        Set<Integer> set1=new HashSet<Integer>();
        ArrayList<Integer> res = new ArrayList<Integer>();
        for(int m:nums1) set1.add(m);
        for(int m:nums2){
            if(set1.contains(m))
                res.add(m);
            set1.remove(m);
        }
        // Convert ArrayList to array
        int[] arr = new int[res.size()];
        for (int i= 0; i < res.size(); i++) arr[i] = res.get(i);
        return arr; 
    }
}
 ```

 ```java
 //java
class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
       Set<Integer> set1 = new HashSet<>();
		Set<Integer> set = new HashSet<>();
		for(int i:nums1) {
			set1.add(i);
		}
		for(int j = 0 ; j<nums2.length;j++) {
			int target = nums2[j];
			if(set1.contains(target)) {set.add(target);}
		}
		int num1[] = new int[set.size()];
		int k = 0;
		for(int m:set) {
			num1[k++] = m ;
			}
		 return num1;
    }
}
 ```

## 350. Intersection of Two Arrays II
Example:
Given nums1 = [1, 2, 2, 1], nums2 = [2, 2], return [2, 2].

```c
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        //res.reserve(nums1.size());
        unordered_map<int,int> map;
        // if(nums1.empty()||nums2.empty())
        //     return res;
        for(int m:nums1)
            map[m]++;
        for(int m:nums2){
            if(map[m]!=0){
                res.push_back(m);
                map[m]--;
            }   
        }
        return res;      
    }
};
```
## 167. Two Sum II - Input array is sorted
给定一个**已按照升序排列**的有序数组，找到两个数使得它们相加之和等于目标数。

函数应该返回这两个下标值 index1 和 index2，其中 index1 必须小于 index2。

返回的下标值（index1 和 index2）不是从零开始的。

```c++
vector<int> twoSum(vector<int> &numbers, int target) {
       vector<int> res;
       if(numbers.size()<2) return res;
       int left=0; int right=numbers.size()-1;
       while(left<right)
       {
           if(numbers[left]+numbers[right]==target)
           {
               res.push_back(left+1);
               res.push_back(right+1);
               break;
           }
           else if(numbers[left]+numbers[right]<target)
           {
               left++;
           }
           else
               right--;
       }
       return res;
   }
```
```java
//java
class Solution {
    public int[] twoSum(int[] numbers, int target) {
        int[] res=new int[2];
        if(numbers.length<2) return res;
        int left=0; int right=numbers.length-1;
        while(left<right){
            if(numbers[left]+numbers[right]==target){
                res[0]=left+1;
                res[1]=right+1;
                break;
            }
            else if(numbers[left]+numbers[right]<target)
                left++;
            else
                right--;      
        }
        return res;
    }
}
```
## 744. Find Smallest Letter Greater Than Target
Given a list of **sorted** characters letters containing only lowercase letters, and given a target letter target, find the smallest element in the list that is larger than the given target.

Letters also wrap around. For example, if the target is target = 'z' and letters = ['a', 'b'], the answer is 'a'.

* 需要注意的点就是区间位置，既然A[l]不等于A[mid]，下一次肯定不是从l这个位置开始找的，而是以l+1作为下一个起始位置，或者l-1作为下一个开始位置

```java
class Solution {
    public char nextGreatestLetter(char[] a, char x) {
        int n=a.length;
        if(x>=a[n-1])
            return a[0];
        else x++;
        int l=0; int r=n-1;
        while(l<r){
            int mid =l+(r-l)/2;
            if(a[mid]>x)
                r=mid;
            else if(a[mid]<x)
                l=mid+1;//注意！
            else 
                return a[mid];
        }
        //return a[l];
         return a[r];
    }
}
```
## 153. 寻找旋转排序数组中的最小值

假设按照升序排序的数组在预先未知的某个点上进行了旋转。

( 例如，数组 [0,1,2,4,5,6,7] 可能变为 [4,5,6,7,0,1,2] )。

请找出其中最小的元素。

你可以假设数组中不存在重复元素。
```
示例 1:
输入: [3,4,5,1,2]
输出: 1

示例 2:
输入: [4,5,6,7,0,1,2]
输出: 0
```

```c
class Solution {
public:
     int findMin(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int i=1;
        for(;i<nums.size();i++)
        {
            if(nums[i]-nums[i-1]<0)
                return nums[i]; 
        }
        if(i==nums.size())
            return nums[0]; 
     }
     //solution 2 binary find
      int findMin(vector<int>& nums) {   
         int l=0;int r=nums.size()-1;
         while(l<r)
         {
             //终结条件
             if(nums[l]<nums[r])
                return nums[l];
             int mid=(l+r)/2;
             //若l=mid;  当l=2,r=3的时候，mid=2；->l=2,mid=2。陷入死循环
             if(nums[mid]>=nums[l]) //必须有等于，否则跳不出while
                 l=mid+1;
             else r=mid;
         }
         return nums[l];
     }
};
```

## 154. Find Minimum in Rotated Sorted Array II(含有重复数)

```c
int findMin(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        while(l<r){
            if(nums[l]<nums[r]) return nums[l];
            int mid=l+(r-l)/2;
            if(nums[mid]>nums[l])
                l=mid+1;
            else if(nums[mid]<nums[l])
                r=mid;
            else
                l++;//有重复的跳过
        }
        return nums[l];
        
    }
```
## 33. Search in Rotated Sorted Array
Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.

Example 1:

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4
Example 2:

Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1

```c++
class Solution {
public:
	int search(vector<int>& nums, int target) {
		int end = nums.size() - 1;
        if(nums.size()==1)
            return nums[0]==target?0:-1;
		int min = findpivot(nums);

		if (min == 0)
			return findtarget(nums, 0, end, target);
		else if (target <= nums[min - 1] && target >= nums[0])
			return findtarget(nums, 0, min-1, target);
		else if (target <= nums[end] && target >= nums[min])
			return findtarget(nums, min, end, target);
		else return -1;

	}
private:
	int findpivot(vector<int>& nums){
		int l = 0;
		int r = nums.size() - 1;
		while (l < r)
		{
			int mid = (l + r) / 2;
			if (nums[l] < nums[r])
				return l;
			if (nums[mid] >= nums[l])
				l = mid + 1;
			else
				r = mid;
		}
		return l;
	}
	int findtarget(vector<int>& nums, int left, int right, int target){
		int l = left;
		int r = right;
		while (l<=r){
			int mid = (l + r) / 2;
			if (target == nums[mid])
				return mid;
			if (target>nums[mid])
				l = mid + 1;
			else
				r = mid-1;
		}
		return -1;


	}
};
```

## 35. Search Insert Position(区间和算法区间一致)

Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You may assume no duplicates in the array.

里面就考察了区间和算法区间一致的细节.
```c
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(nums[mid]<target)
                l=mid+1;
            else if(nums[mid]>target)
                r=mid-1;
            else 
                return mid;
        }
        return l;
            
    }
};
```

## 34. 搜索范围

给定一个按照升序排列的整数数组 nums，和一个目标值 target。找出给定目标值在数组中的开始位置和结束位置。

你的算法时间复杂度必须是 O(log n) 级别。

如果数组中不存在目标值，返回 [-1, -1]。

```c++
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res={-1,-1};
        int index=0;
        if(nums.empty())
            return res;
        index=findtarget(nums,target);
        if(nums[index]==target)
            res[0]=index;
        else 
            return res;
        while(nums[index+1]==target && index<nums.size()-1){
            index++;
        }
        res[1]=index;
        return res;
    }
private:
        int findtarget(vector<int>& nums, int target){
            int l=0,r=nums.size()-1;
        while(l<r){
            int mid =l+(r-l)/2;
            if(nums[mid]<target)
                l=mid+1;
            else 
                r=mid;
            }
            return l; 
    }
};
```

## 74. 搜索二维矩阵

编写一个高效的算法来判断 m x n 矩阵中，是否存在一个目标值。该矩阵具有如下特性：

每行中的整数从左到右按升序排列。
每行的第一个整数大于前一行的最后一个整数。
示例 1:

输入:
matrix = [
  [1,   3,  5,  7],
  [10, 11, 16, 20],
  [23, 30, 34, 50]
]
target = 3
输出: true
示例 2:

输入:
matrix = [
  [1,   3,  5,  7],
  [10, 11, 16, 20],
  [23, 30, 34, 50]
]
target = 13
输出: false

```c++
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        if(matrix.empty())
            return false;
        if(matrix[0].empty())
            return false;
        /*push_back浪费时间
        //vector<int> cols;
        // for(int i=0;i<matrix.size();i++)
        // {
        //     cols.push_back(matrix[i][0]);
        // }
        // int a=findtarget(cols,target);
        */
        int a=0;
        if(matrix[0][0]>target)
            return false;
        while(matrix[a][0]<target&&a<matrix.size()-1)
            a++;
        if(matrix[a][0]==target)
            return true;
        else if(matrix[a][0]<target)
        {
            int b=findtarget(matrix[a],target);
            return (matrix[a][b]==target);
        }
        else 
        {
            a--;
            if(a<0)
                a=a+1;
            int b=findtarget(matrix[a],target);
            return (matrix[a][b]==target);
        }
    }
private:
        int findtarget(vector<int>& nums, int target){
            int l=0,r=nums.size()-1;
        while(l<r){
            int mid =l+(r-l)/2;
            if(nums[mid]<target)
                l=mid+1;
            else 
                r=mid;
            }
            return l; 
    }    
};
```















# Array

## 1. (832)反转图片

>  给定一个二进制矩阵 `A`，我们想先水平翻转图像，然后反转图像并返回结果。
>
> 水平翻转图片就是将图片的每一行都进行翻转，即逆序。例如，水平翻转 `[1, 1, 0]` 的结果是 `[0, 1, 1]`。
>
> 反转图片的意思是图片中的 `0` 全部被 `1` 替换， `1` 全部被 `0` 替换。例如，反转 `[0, 1, 1]` 的结果是 `[1, 0, 0]`。

```c++
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        
        if(A.empty())
            return A;
        else
        {
            int length=A.size();
            for(int i=0;i<length;++i)
            {
                reverse(A[i].begin(),A[i].end());
                for(auto &s:A[i])//用引用传递
                {
                    s=!s;
                }
            }
            return A;
            
        }
        
    }
};
```

## 2. (867)Transpose Matrix 

Given a matrix `A`, return the transpose of `A`.

The transpose of a matrix is the matrix flipped over it's main diagonal, switching the row and column indices of the matrix.

**Example 1:**

```
Input: [[1,2,3],[4,5,6],[7,8,9]]
Output: [[1,4,7],[2,5,8],[3,6,9]]
```

```c++\
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        if(A.empty())
            return A;
            
        else
        {
            int rows=A[0].size();
            int cols=A.size();
            vector<vector<int>> B;
            B.reserve(rows);
            for(int i=0;i<rows;++i)
            {
                vector<int> vec;
                vec.reserve(rows);
                for(int j=0;j<cols;++j)
                {
                    vec.push_back(A[j][i]);
                }
                B.push_back(vec);
            }
            return B;
        }
    }
};
```

##  3. (16)最接近的三数之和

>  给定一个包括 *n* 个整数的数组 `nums` 和 一个目标值 `target`。找出 `nums` 中的三个整数，使得它们的和与 `target` 最接近。返回这三个数的和。假定每组输入只存在唯一答案。

```
例如，给定数组 nums = [-1，2，1，-4], 和 target = 1.

与 target 最接近的三个数的和为 2. (-1 + 2 + 1 = 2).
```

```c++
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int len=nums.size();
        sort(nums.begin(),nums.end());
        int res=nums[0]+nums[1]+nums[2];
        for(int i=0;i<len;++i)
        {
            int l=i+1;
            int h=len-1;
            while(l<h)
            {
                int sum=nums[l]+nums[h]+nums[i];
                if(sum<target){
                    if(abs(sum-target)<abs(res-target))
                        res=sum;
                    l++;
                }
                   
                else if(sum>target)
                {
                    if(abs(sum-target)<abs(res-target))
                        res=sum;
                    h--;
                }
                else
                    return target;
                   
            } 
        }
        return res;
    }
};
```

## 4. (13)三数之和

> 给定一个包含 *n* 个整数的数组 `nums`，判断 `nums` 中是否存在三个元素 *a，b，c ，*使得 *a + b + c =* 0 ？找出所有满足条件且不重复的三元组。

**注意：**答案中不可以包含重复的三元组。

```
例如, 给定数组 nums = [-1, 0, 1, 2, -1, -4]，

满足要求的三元组集合为：
[
  [-1, 0, 1],
  [-1, -1, 2]
]
```

```c++
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> set_res;
        vector<vector<int>> res;
        res.reserve(set_res.size());
        if(nums.size()<3) return res;;
        int len=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<len-2;++i)
        {
            if (i == 0 || (i > 0 && nums[i] != nums[i-1])) 
            {
                int l=i+1;
                int h=len-1;
                while(l<h)
                {
                    int sum=nums[i]+nums[l]+nums[h];
                    if(sum<0)
                        l++;
                    else if(sum>0)
                        h--;
                    else{
                        vector<int> vec={nums[i],nums[l],nums[h]};
                        //set_res.insert(vec);
                        res.push_back(vec);
                        while((l<h)&&nums[l]==nums[l+1]) l++;
                        while ((l<h) && nums[h] == nums[h-1]) h--;
                        l++; h--;
                    }    
                }
            }
        }
        return res;
    }
};
```

## 5.(18) 四数之和

> 给定一个包含 *n* 个整数的数组 `nums` 和一个目标值 `target`，判断 `nums` 中是否存在四个元素 *a，**b，c* 和 *d* ，使得 *a* + *b* + *c* + *d* 的值与 `target` 相等？找出所有满足条件且不重复的四元组。

**注意：**

答案中不可以包含重复的四元组。

**示例：**

```
给定数组 nums = [1, 0, -1, 0, -2, 2]，和 target = 0。

满足要求的四元组集合为：
[
  [-1,  0, 0, 1],
  [-2, -1, 1, 2],
  [-2,  0, 0, 2]
]
```

```c++
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        if(nums.size()<4) return res;
        int len=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<len-3;++i)
        {
            if(i>0&&nums[i]==nums[i-1]) continue;
            if(nums[0]+nums[1]+nums[2]+nums[3]>target) break;
            for(int j=i+1;j<len-2;++j)
            {
                if((j>i+1)&&(nums[j]==nums[j-1])) continue;
                if(nums[i]+nums[j]+nums[j+1]+nums[j+2]>target) break;
                int l=j+1;
                int h=len-1;
                while(l<h){
                    int sum=nums[i]+nums[j]+nums[l]+nums[h];
                    if(sum<target){
                        while(l<h&&nums[l]==nums[l+1]) l++;
                        l++;
                    }
                    else if(sum>target){
                        while(l<h&&nums[h]==nums[h-1]) h--;
                        h--;
                    }
                    else{
                        vector<int> vec={nums[i],nums[j],nums[l],nums[h]};
                        res.push_back(vec);
                        while(l<h&&nums[h]==nums[h-1]) h--;
                        while(l<h&&nums[l]==nums[l+1])l++;
                        l++;h--;
                    }

                }
            }
            //}
        }
        return res;
    }
    
};
```







# 树

1. 二叉树的深度优先遍历的非递归的通用做法是采用栈，广度优先遍历的非递归的通用做法是采用队列。

2. 深度优先遍历：对每一个可能的分支路径深入到不能再深入为止，而且每个结点只能访问一次。要特别注意的是，二叉树的深度优先遍历比较特殊，可以细分为先序遍历、中序遍历、后序遍历。具体说明如下：
    * 先序遍历：对任一子树，先访问根，然后遍历其左子树，最后遍历其右子树。
    * 中序遍历：对任一子树，先遍历其左子树，然后访问根，最后遍历其右子树。
    * 后序遍历：对任一子树，先遍历其左子树，然后遍历其右子树，最后访问根。

    广度优先遍历：又叫层次遍历，从上往下对每一层依次访问，在每一层中，从左往右（也可以从右往左）访问结点，访问完一层就进入下一层，直到没有结点可以访问为止。

3. 深度优先搜素算法：不全部保留结点，占用空间少；有回溯操作(即有入栈、出栈操作)，运行速度慢。  
  广度优先搜索算法：保留全部结点，占用空间大；无回溯操作(即无入栈、出栈操作)，运行速度快。

    通常 深度优先搜索法不全部保留结点，扩展完的结点从数据库中弹出删去，这样，一般在数据库中存储的结点数就是深度值，因此它占用空间较少。所以，当搜索树的结点较多，用其它方法易产生内存溢出时，深度优先搜索不失为一种有效的求解方法。 　
    广度优先搜索算法，一般需存储产生的所有结点，占用的存储空间要比深度优先搜索大得多，因此，程序设计中，必须考虑溢出和节省内存空间的问题。

    但广度优先搜索法一般无回溯操作，即入栈和出栈的操作，所以运行速度比深度优先搜索要快些
## 广度优先搜索(层次遍历)

```c
#include <stack>
#include <queue>

struct TreeNode {
       int val;
       TreeNode *left;
       TreeNode *right;
       TreeNode(int x) : val(x), left(NULL), right(NULL) {}
   };
void create(TreeNode *&root)
{
    int key;
    cin>>key;
    if(key==-1)
        root=NULL;
    else
    {
        root=new TreeNode(key);
        create(root->left);
        create(root->right);
    }
}
//递归方法进行遍历，但是需要回溯，所以会耗时点
void PreTravel(TreeNode* tree)
{
	if (tree)
	{
		cout << tree->data << "  ";
		PreTravel(tree->leftChild);
		PreTravel(tree->rightChild);
	}
}
void PostTravel(TreeNode* tree)
{
	if (tree)
	{
		PostTravel(tree->leftChild);
		PostTravel(tree->rightChild);
		cout << tree->data << "  ";
	}
}
void InorderTravel(TreeNode* tree)
{
	if (tree)
	{
		InorderTravel(tree->leftChild);
		cout << tree->data << "  ";
		InorderTravel(tree->rightChild);
	}
}

//非递归方法 深度优先搜索 栈
//利用栈，现将右子树压栈再将左子树压栈
void DepthFirstSearch(TreeNode *root)
{
    stack<TreeNode*> nodestack;
    nodestack.push(root);
    while(!nodestack.empty())
    {
        TreeNode *node=nodestack.top();
        cout<<node->data<<" ";
        nodestack.pop();
        if(node->right)
        {
            nodestack.push(node->right);
        }
        if(node->left)
        {
            nodestack.push(node->left);
        }
    }
}
//非递归方法 广度优先搜索 队列
void BreadthFirstSearch(TreeNode *root)
{
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty())
    {
        TreeNode *node=q.front();
        cout<<node->data<<" ";
        q.pop();
        if(node->left)
        {
            q.push(node->left);
        }
        if(node->right)
        {
            q.push(node->right);
        }
    }
}

```

### 111. Minimum Depth of Binary Tree（找二叉树的最小深度）

```c
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        if(root->left!=NULL && root->right!=NULL)
            return min(minDepth(root->left),minDepth(root->right))+1;
        else
            return max(minDepth(root->left),minDepth(root->right))+1;
        
    }
};
```

### 104. Maximum Depth of Binary Tree

For example:
Given binary tree `[3,9,20,null,null,15,7]`,
```
    3
   / \
  9  20
    /  \
   15   7
```

return its depth = 3.

1. 深度优先搜索（Depth-first-search）

```c
class Solution {
public:
    int maxDepth(TreeNode* root) {
        return root==NULL ? 0:max(maxDepth(root->left),maxDepth(root->right))+1;
    }
};
```

2. 广度优先搜索（Breadth-first-search）

```c
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        int res=0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            ++res;
            for(int i=0,n=q.size();i<n;i++)
            {
                TreeNode *p=q.front();
                q.pop();
                if(p->left!=NULL)
                    q.push(root->left);
                if(p->right!=NULL)
                    q.push(root->right);
            }
            
        }
        return res;
    }
};
```

### 111. Minimum Depth of Binary Tree

```c
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        if(root->left!=NULL && root->right!=NULL)
            return min(minDepth(root->left),minDepth(root->right))+1;
        else
            return max(minDepth(root->left),minDepth(root->right))+1;
        
    }
};
```

### 102. Binary Tree Level Order Traversal(二叉树的层序遍历)

**For example:**

```
Given binary tree [3,9,20,null,null,15,7],
    3
   / \
  9  20
    /  \
   15   7
return its level order traversal as:
[
  [3],
  [9,20],
  [15,7]
]
```

#### `vector`的`reserve`用法，

* 其实不加`reserve`也不会报错，没有初始化的`vector`用`push_back`。但是，不可以直接用索引，会导致越界。
* 在`push_back`前加`reserve`会加快运行速度。
```c
class Solution {
public:
    //对于vector构建出来的二维数组没有进行空间的申请,比如有些返回类型为vector<vector<>>类型的函数，对于这个返回值vector表示的二维数组要先申请大小，否则就会报这类错误。 
    vector<vector<int>> levelOrder(TreeNode* root) {
         
        queue<TreeNode*> q;
        q.push(root);
        vector<vector<int>> level;
        level.reserve(0);
        if(root==NULL)
            return level;
        int res=0;
        while(!q.empty())
        {
            ++res;
            vector<int> temp_vec;
            for(int i=0,n=q.size();i<n;i++)
            {
                TreeNode* node=q.front();
                
                temp_vec.reserve(0);
                temp_vec.push_back(node->val);
                //level[res-1].reserve(n);
                //level[res-1].push_back(node->val);
                q.pop();
                if(node->left!=NULL)
                    q.push(node->left);
                if(node->right!=NULL)
                    q.push(node->right);
            }
            level.push_back(temp_vec);
        }
        return level;
        
    }
};
```



### 226. Invert Binary Tree

```
Invert a binary tree.
     4
   /   \
  2     7
 / \   / \
1   3 6   9
to
     4
   /   \
  7     2
 / \   / \
9   6 3   1
```

```c
class Solution {
public:
//1. 递归
    TreeNode* invertTree(TreeNode* root) {
            // if (root) 
            // {
            //     invertTree(root->left);
            //     invertTree(root->right);
            //     std::swap(root->left, root->right);
            // }
            // return root;

//2.非递归，因为是深度搜索，所以用栈
            stack<TreeNode* > stk;
            stk.push(root);
            while(!stk.empty())
            {
                TreeNode* node=stk.top();
                stk.pop();
                if(node)
                {
                    stk.push(node->left);
                    stk.push(node->right);
                    swap(node->left,node->right);
                }
            }    
        return root;  
    }
};
```

### 112. Path Sum

For example:
Given the below binary tree and sum = 22,

              5
             / \
            4   8
           /   / \
          11  13  4
         /  \      \
        7    2      1
return true, as there exist a root-to-leaf path 5->4->11->2 which sum is 22.

```c
class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) 
    {
        if (root == NULL) return false;
        if (root->val == sum && root->left ==  NULL && root->right == NULL)             return true;
        return hasPathSum(root->left, sum-root->val) || hasPathSum(root->right, sum-root->val);
    }
};
```
# 贪心算法

## 11. 盛最多水的容器

给定 n 个非负整数 a1，a2，...，an，每个数代表坐标中的一个点 (i, ai) 。画 n 条垂直线，使得垂直线 i 的两个端点分别为 (i, ai) 和 (i, 0)。找出其中的两条线，使得它们与 x 轴共同构成的容器可以容纳最多的水。

注意：你不能倾斜容器，n 至少是2。

```c++
int maxArea(vector<int>& height) {
        int n=height.size(),left=0,right=n,res=0;
        while(left<right){
            int water=max(height[left],height[right])*(right-left);
            if(height[left]<height[right])
                left++;
            else
                right--;
            res=max(water,res);
        }
        return res;

```
# 报错

1. [reference binding to null pointer of type 'value_type'](http://blog.csdn.net/m0_38088298/article/details/79249044)
    * 数组越界，在对vector初始化的时候没有初始化到合适大小，而在接下来的使用中使用了越界的下标。
    * 对于vector构建出来的二维数组没有进行空间的申请,比如有些返回类型为vector<vector<>>类型的函数，对于这个返回值vector表示的二维数组要先申请大小，否则就会报这类错误。
    * 测试样例输入为空数组情况。
2. expected unqualified-id before string constant
* 后来发现，在定义完函数之后，没有加" ; "

# 常用算法函数

##  `std::accumulate`定义于头文件 `<numeric>`
### `std::next` 定义于头文件`<iterator>`

```c
int main() 
{
    std::vector<int> v{ 3, 1, 4 };
    auto it = v.begin();
    auto nx = std::next(it, 2);
    std::cout << *it << ' ' << *nx << '\n';
}
```

### `std::multiplies`:乘


* `int sum = std::accumulate(v.begin(), v.end(), 0);`
* `int product = std::accumulate(v.begin(), v.end(), 1, std::multiplies<int>());`

```c
#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#include <functional>
 
int main()
{
    std::vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 
    int sum = std::accumulate(v.begin(), v.end(), 0);
 
    int product = std::accumulate(v.begin(), v.end(), 1, std::multiplies<int>());
 
    std::string s = std::accumulate(std::next(v.begin()), v.end(),
                                    std::to_string(v[0]), // 以首元素开始
                                    [](std::string a, int b) {
                                        return a + '-' + std::to_string(b);
                                    });
 
    std::cout << "sum: " << sum << '\n'
              << "product: " << product << '\n'
              << "dash-separated string: " << s << '\n';
}
```
```
sum: 55
product: 3628800
dash-separated string: 1-2-3-4-5-6-7-8-9-10
```
## `std::vector::back`
返回到容器中最后一个元素的引用。
```c
#include <vector>
#include <iostream>
 
int main()
{
    std::vector<char> letters {'o', 'm', 'g', 'w', 't', 'f'};
    if (!letters.empty()) {
        std::cout << "The last character is: " << letters.back() << '\n';
    }  
}
```
`The last character is f`

# std::bitset::to_string

