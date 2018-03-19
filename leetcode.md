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
- [树](#%E6%A0%91)
    - [广度优先搜索(层次遍历)](#%E5%B9%BF%E5%BA%A6%E4%BC%98%E5%85%88%E6%90%9C%E7%B4%A2%E5%B1%82%E6%AC%A1%E9%81%8D%E5%8E%86)
        - [111. Minimum Depth of Binary Tree（找二叉树的最小深度）](#111-minimum-depth-of-binary-tree%EF%BC%88%E6%89%BE%E4%BA%8C%E5%8F%89%E6%A0%91%E7%9A%84%E6%9C%80%E5%B0%8F%E6%B7%B1%E5%BA%A6%EF%BC%89)
        - [104. Maximum Depth of Binary Tree](#104-maximum-depth-of-binary-tree)
        - [111. Minimum Depth of Binary Tree](#111-minimum-depth-of-binary-tree)
        - [102. Binary Tree Level Order Traversal(二叉树的层序遍历)](#102-binary-tree-level-order-traversal%E4%BA%8C%E5%8F%89%E6%A0%91%E7%9A%84%E5%B1%82%E5%BA%8F%E9%81%8D%E5%8E%86)
            - [`vector`的`reserve`用法，](#vector%E7%9A%84reserve%E7%94%A8%E6%B3%95%EF%BC%8C)
        - [226. Invert Binary Tree](#226-invert-binary-tree)
        - [112. Path Sum](#112-path-sum)
- [报错](#%E6%8A%A5%E9%94%99)

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
class Solution {
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

# 报错

1. [reference binding to null pointer of type 'value_type'](http://blog.csdn.net/m0_38088298/article/details/79249044)
    * 数组越界，在对vector初始化的时候没有初始化到合适大小，而在接下来的使用中使用了越界的下标。
    * 对于vector构建出来的二维数组没有进行空间的申请,比如有些返回类型为vector<vector<>>类型的函数，对于这个返回值vector表示的二维数组要先申请大小，否则就会报这类错误。
    * 测试样例输入为空数组情况。
2. expected unqualified-id before string constant
* 后来发现，在定义完函数之后，没有加" ; "

