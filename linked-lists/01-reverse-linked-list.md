## Problem: Reverse Linked List (Easy)

**Link:** https://leetcode.com/problems/reverse-linked-list/

### Approach

The linked list is reversed by changing the direction of each node's `next` pointer. Three pointers are used: `prev`, `current`, and `next`. The `next` pointer temporarily stores the next node, then `current->next` is changed to point to `prev`. Finally, `prev` becomes the new head of the reversed list.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The edge case of a single-node linked list was also tested. The list remains unchanged because the only node already points to `NULL`.
