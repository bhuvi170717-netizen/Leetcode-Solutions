#include <stdio.h>
#include <stdlib.h>

/*
Problem: Two Sum

Test Case 1:
Input: nums = [2,7,11,15], target = 9
Expected Output: [0,1]

Test Case 2:
Input: nums = [3,3], target = 6
Expected Output: [0,1]
*/

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int *result = malloc(2 * sizeof(int));

    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }

    *returnSize = 0;
    free(result);
    return NULL;
}