# Problem: Reverse String (Easy)

**LeetCode Problem:** 344. Reverse String

**Link:** https://leetcode.com/problems/reverse-string/

### Approach

I used the two-pointer approach to reverse the string in-place. One pointer starts at the beginning of the character array and another pointer starts at the end. The characters at these positions are swapped, and both pointers move toward the center until the string is completely reversed.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The solution modifies the input character array directly without using an extra array. I first tested the program locally using the string "hello", which produced "olleh". The solution was then submitted to LeetCode and all 477 test cases passed.
