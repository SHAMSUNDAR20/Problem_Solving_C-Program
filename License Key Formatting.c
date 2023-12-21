char* licenseKeyFormatting(char* s, int k) {
    int n = strlen(s), count = 0, dashes = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] != '-') count++;
        else dashes++;
    }
    int size = count + (count - 1) / k;
    char* result = (char*)malloc((size + 1) * sizeof(char));
    result[size] = '\0';
    int j = size - 1, group = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] != '-') {
            result[j--] = toupper(s[i]);
            group++;
            if (group == k && j >= 0) {
                result[j--] = '-';
                group = 0;
            }
        }
    }
    return result;
}