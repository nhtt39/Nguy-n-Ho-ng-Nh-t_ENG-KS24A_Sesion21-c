#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file1, *file2;
    char ch;

    file1 = fopen("bt01.txt", "r");
    if (file1 == NULL) {
        printf("Loi mo file bt01.txt!\n");
        return 1;
    }

    file2 = fopen("bt06.txt", "w");
    if (file2 == NULL) {
        printf("Loi mo file bt06.txt!\n");
        fclose(file1);
        return 1;
    }

    while ((ch = fgetc(file1)) != EOF) {
        fputc(ch, file2);
    }

    fclose(file1);
    fclose(file2);

    printf("Sao chep thanh cong tu bt01.txt sang bt06.txt.\n");

    return 0;
}

