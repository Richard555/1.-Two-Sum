#include <stdio.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {

    int* p = malloc(2 * sizeof(int));
    int done = 0;
    int i, j;
    for (i = 0; i < numsSize; i++) {
        for (j = 0; j < numsSize; j++) {
            if (i != j) {
                if (nums[i] + nums[j] == target) {
                    p[0] = i;
                    p[1] = j;
                    done = 1;
                    break;
                }
            }
        }
        if (done == 1) break;
    }
    *returnSize = 2;
    return p;
}
void main(void)
{
    int nums[] = { 3, 8, 12, 22 };
    int target = 20;
    int* panswer = NULL;
    int RetSize;

    panswer = twoSum(nums, sizeof(nums) / sizeof(int), target, &RetSize);
    printf("[%d, %d]", panswer[0], panswer[1]);
}
