int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    for (int i = 0; i < numsSize; i++) {
        int index = abs(nums[i]) - 1;
        nums[index] = nums[index] > 0 ? -nums[index] : nums[index];
    }
    int* result = (int*)malloc(numsSize * sizeof(int));
    *returnSize = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > 0) {
            result[(*returnSize)++] = i + 1;
        }
    }
    return result;
}