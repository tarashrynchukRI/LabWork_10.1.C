#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int countABC(char* fname) {
    FILE* file = fopen(fname, "r");
    if (file == NULL) {
        printf("Cannot open file.\n");
        return -1;
    }

    char str[100];
    int count = 0;

    while (fgets(str, 100, file) != NULL) {
        char* ptr = strstr(str, "abc");
        while (ptr != NULL) {
            count++;
            ptr = strstr(ptr + 1, "abc");
        }
    }

    fclose(file);
    return count;
}

int main() {
    char fname[100];
    printf("Type filename: ");
    scanf("%s", fname);

    int count = countABC(fname);
    if (count != -1) {
        printf("Count of 'abc': %d\n", count);
    }

    return 0;
}
