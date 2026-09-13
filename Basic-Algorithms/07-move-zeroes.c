#include <stdio.h>

/*
Problem: Move Zeroes

Test Case 1:
Input: [0,1,0,3,12]
Expected Output: [1,3,12,0,0]

Test Case 2:
Input: [0]
Expected Output: [0]
*/

void moveZeroes(int* nums, int numsSize)
{
    int position = 0;

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] != 0)
        {
            int temp = nums[position];
            nums[position] = nums[i];
            nums[i] = temp;

            position++;
        }
    }
}