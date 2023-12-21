int* constructRectangle(int area, int* returnSize) {
    int* result = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;
    for (int i = sqrt(area); i > 0; i--) {
        if (area % i == 0) {
            result[0] = area / i;
            result[1] = i;
            break;
        }
    }
    return result;
}