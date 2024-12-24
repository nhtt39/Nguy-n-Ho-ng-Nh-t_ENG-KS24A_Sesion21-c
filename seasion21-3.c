#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;

    char chuoi[1000];
    
    printf("Nhap chuoi ban muon them vao file: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    
    file = fopen("bt01.txt", "a");
    if (file == NULL) {
        printf("Loi mo file!");
        return 1;
    }

    fprintf(file, "%s", chuoi);

    fclose(file);
    
    printf("Chuoi da duoc them vao file bt01.txt.\n");

    return 0;
}

