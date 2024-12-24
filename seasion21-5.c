#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;

    int n;
    char line[1000];
    
    printf("Nhap so dong can ghi vao file: ");
    scanf("%d", &n);
    
    file = fopen("bt05.txt", "w");
    if (file == NULL) {
        printf("Loi mo file!\n");
        return 1;
    }

    getchar();
    for (int i = 1; i <= n; i++) {
        printf("Nhap noi dung cho dong %d: ", i);
        fgets(line, sizeof(line), stdin);
        fprintf(file, "%s", line);
    }

    fclose(file);

    file = fopen("bt05.txt", "r");
    if (file == NULL) {
        printf("Loi mo file khi doc!\n");
        return 1;
    }

    printf("\nNoi dung trong file bt05.txt:\n");
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    fclose(file);

    return 0;
}

