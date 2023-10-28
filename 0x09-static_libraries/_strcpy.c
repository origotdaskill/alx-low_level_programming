char *_strcpy(char *dest, char *src) {
    char *originalDest = dest;

    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';

    return originalDest;
}

