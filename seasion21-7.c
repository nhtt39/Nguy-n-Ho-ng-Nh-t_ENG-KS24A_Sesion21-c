#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    char name[100];
    int age;
} Student;

int main() {
    int n;
    FILE *file;

    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);

    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Loi mo file students.txt!\n");
        return 1;
    }

    Student students[n];

    for (int i = 0; i < n; i++) {
        printf("Nhap thong tin cho sinh vien %d:\n", i + 1);
        
        printf("ID: ");
        scanf("%d", &students[i].id);

        getchar();

        printf("Ten: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';

        printf("Tuoi: ");
        scanf("%d", &students[i].age);

        fprintf(file, "%d %s %d\n", students[i].id, students[i].name, students[i].age);
    }

    fclose(file);

    printf("Thong tin sinh vien da duoc ghi vao file students.txt.\n");

    return 0;
}

