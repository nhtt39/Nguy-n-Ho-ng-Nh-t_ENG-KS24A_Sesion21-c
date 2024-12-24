#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    
    char line[1000];
    
    file = fopen("bt01.txt", "r");
    if (file == NULL) {
        printf("Loi mo file!");
        return 1;
    }

    if (fgets(line, sizeof(line), file) != NULL) {
        printf("Dau tien trong file bt01.txt: %s", line);
    } else {
        printf("File rong hoac loi khi doc file!\n");
    }

    fclose(file);

    return 0;
}

