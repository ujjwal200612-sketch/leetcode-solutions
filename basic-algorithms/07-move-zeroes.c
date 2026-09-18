#include <stdio.h>

void moveZeroes(int *nums, int numsSize)
{
    int j = 0;

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] != 0)
        {
            nums[j] = nums[i];
            j++;
        }
    }

    while (j < numsSize)
    {
        nums[j] = 0;
        j++;
    }
}

void printArray(int *nums, int numsSize)
{
    printf("[");

    for (int i = 0; i < numsSize; i++)
    {
        printf("%d", nums[i]);

        if (i < numsSize - 1)
            printf(",");
    }

    printf("]\n");
}

int main()
{
    int nums1[] = {0, 1, 0, 3, 12};
    int nums2[] = {0};

    moveZeroes(nums1, 5);
    moveZeroes(nums2, 1);

    printf("Test Case 1: ");
    printArray(nums1, 5);

    printf("Test Case 2: ");
    printArray(nums2, 1);

    return 0;
}