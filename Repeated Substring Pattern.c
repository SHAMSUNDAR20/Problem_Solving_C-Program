bool repeatedSubstringPattern(char* s) {
    int n = strlen(s);
    for (int len = n / 2; len > 0; len--) {
        if (n % len == 0) {
            int repeat = n / len;
            char* t = (char*)malloc((len + 1) * sizeof(char));
            strncpy(t, s, len);
            t[len] = '\0';
            bool matched = true;
            for (int i = 0; i < repeat; i++) {
                if (strncmp(s + i * len, t, len) != 0) {
                    matched = false;
                    break;
                }
            }
            free(t);
            if (matched) return true;
        }
    }
    return false;
}