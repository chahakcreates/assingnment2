#include <stdlib.h>
#include <stdbool.h>
int compareInts(const void *a, const void *b)
{
    int x = *(const int *)a, y = *(const int *)b;
    if (x < y) return -1;
    if (x > y) return 1;
    return 0;
}
bool containsDuplicate(int* nums, int numsSize)
{
    qsort(nums, numsSize, sizeof(int), compareInts);
    for (int i = 1; i < numsSize; i++)
        if (nums[i] == nums[i - 1]) return true;
    return false;
}
