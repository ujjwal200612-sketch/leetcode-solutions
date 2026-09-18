# Problem: Valid Parentheses (Easy)

## Problem Description

Given a string `s` containing just the characters `(`, `)`, `{`, `}`, `[` and `]`, determine if the input string is valid.

A string is valid if:

1. Open brackets are closed by the same type of bracket.
2. Open brackets are closed in the correct order.
3. Every closing bracket has a corresponding opening bracket.

## Approach

The solution uses a **stack**.

- Opening brackets are pushed onto the stack.
- When a closing bracket is found, it is compared with the top of the stack.
- If they match, the opening bracket is removed.
- If they do not match, the string is invalid.
- At the end, the stack must be empty for the string to be valid.

## Test Cases

### Test Case 1

Input:
`"()"`

Output:
`true`

### Test Case 2

Input:
`"()[]{}"`

Output:
`true`

### Test Case 3

Input:
`"(]"`

Output:
`false`

## Complexity

- Time Complexity: `O(n)`
- Space Complexity: `O(n)`

## LeetCode Result

Accepted — all test cases passed.

I tested the solution locally before submitting it to LeetCode.
