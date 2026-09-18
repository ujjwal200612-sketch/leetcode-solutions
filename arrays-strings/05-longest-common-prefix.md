# Problem: Longest Common Prefix (Easy)

## Problem Statement

Given an array of strings, find the longest common prefix string amongst all the strings.

If there is no common prefix, return an empty string `""`.

## Approach

I compared the characters of all strings with the characters of the first string.

For each position, I checked whether all strings have the same character.

If any character is different or any string ends, the common prefix is complete.

## Example

Input:
["flower", "flow", "flight"]

Output:
"fl"

## Complexity

Time Complexity: O(n \* m)

Space Complexity: O(m)

where `n` is the number of strings and `m` is the length of the shortest string.

## Notes

The solution compares characters directly without sorting the strings.

I tested the solution locally using two test cases before submitting it to LeetCode.
