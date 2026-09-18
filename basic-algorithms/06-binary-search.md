# Problem: Binary Search (Easy)

## Process

1. Set `left` to the first index of the array.
2. Set `right` to the last index of the array.
3. Find the middle index using:
   `mid = left + (right - left) / 2`
4. Compare `nums[mid]` with the target.
5. If they are equal, return `mid`.
6. If `nums[mid]` is smaller than the target, search the right half.
7. If `nums[mid]` is greater than the target, search the left half.
8. Continue until the target is found or `left` becomes greater than `right`.
9. If the target is not found, return `-1`.

## Test Cases

### Test Case 1

Input:
`nums = [-1,0,3,5,9,12]`
`target = 9`

Output:
`4`

### Test Case 2

Input:
`nums = [-1,0,3,5,9,12]`
`target = 2`

Output:
`-1`

## Notes

The array is sorted in ascending order.
Binary search repeatedly divides the search range into half.
The algorithm has `O(log n)` time complexity.
