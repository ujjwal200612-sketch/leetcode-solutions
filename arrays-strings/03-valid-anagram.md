# Problem: Valid Anagram (Easy)

**LeetCode Problem:** 242. Valid Anagram

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach

I used a frequency-counting approach.

A count array of size 26 is used to store the frequency of each lowercase English letter. For every character in the first string, its count is increased, and for every character in the second string, its count is decreased.

If the strings have different lengths, they cannot be anagrams.

After processing both strings, if all counts are zero, the strings are anagrams.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The solution uses a fixed-size count array and does not require sorting the strings.

I tested the solution locally using two test cases before submitting it to LeetCode.
