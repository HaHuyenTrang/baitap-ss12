#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    float score;
} Student;

int main() {
    int n;

    // Nhap so luong sinh vien
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("So luong sinh vien phai lon hon 0.\n");
        return 1;
    }

    Student students[n];

    // Nhap thong tin cho tung sinh vien
    for (int i = 0; i < n; i++) {
        printf("Nhap ten sinh vien thu %d: ", i + 1);
        scanf("%s", students[i].name); 
        printf("Nhap diem cua %s: ", students[i].name);
        scanf("%f", &students[i].score);
    }

    char searchName[50];
    printf("Nhap ten sinh vien can tim: ");
    scanf("%s", searchName);

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(students[i].name, searchName) == 0) {
            printf("Diem cua sinh vien %s: %d\n", students[i].name, students[i].score);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Khong tim thay sinh vien.\n");
    }

    return 0;
}


