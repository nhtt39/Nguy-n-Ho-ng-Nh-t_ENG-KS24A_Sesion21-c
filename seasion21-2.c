#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;

    file = fopen("bt01.txt", "r");
    if (file == NULL) {
        printf("Loi mo file!");
        return 1;
    }

    char firstChar = fgetc(file);

    if (firstChar != EOF) {
        printf("Ky tu dau tien trong file bt01.txt: %c\n", firstChar);
    } else {
        printf("File rong!\n");
    }

    fclose(file);

    return 0;
}

