int* nextGreaterElement(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int* result = (int*)malloc(nums1Size * sizeof(int));
    *returnSize = nums1Size;
    for (int i = 0; i < nums1Size; i++) {
        int j = 0;
        while (nums2[j] != nums1[i]) j++;
        while (j < nums2Size && nums2[j] <= nums1[i]) j++;
        if (j == nums2Size) result[i] = -1;
        else result[i] = nums2[j];
    }
    return result;
}