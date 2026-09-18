# Problem: Move Zeroes (Easy)

## Process

1. Use a variable `j` to keep track of the position where the next non-zero element should be placed.
2. Traverse the array using `i`.
3. Whenever a non-zero element is found, place it at `nums[j]`.
4. Increment `j`.
5. After all non-zero elements are placed, fill the remaining positions with zeroes.
6. The array is modified in-place without creating another array.

## Test Cases

### Test Case 1

Input:
`[0,1,0,3,12]`

Output:
`[1,3,12,0,0]`

### Test Case 2

Input:
`[0]`

Output:
`[0]`

## Notes

The solution maintains the relative order of the non-zero elements.
The array is modified in-place.
