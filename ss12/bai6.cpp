#include <stdio.h>

void findDuplicates(int arr[], int n) {
    int foundDuplicate = 0; // Bien kiem tra xem co phan tu lap lai hay khong

    printf("Cac phan tu lap lai va so lan xuat hien la:\n");

    // Duyet qua tung phan tu cua mang
    for (int i = 0; i < n; i++) {
        int count = 1; // Dem so lan xuat hien cua phan tu arr[i]

        // Neu phan tu da duoc kiem tra, bo qua
        if (arr[i] == -1)
            continue;

        // Kiem tra cac phan tu khac trong mang
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = -1; // Danh dau phan tu da kiem tra
            }
        }

        // Neu so lan xuat hien lon hon 1, in phan tu va so lan xuat hien
        if (count > 1) {
            printf("Phan tu %d xuat hien %d lan\n", arr[i], count);
            foundDuplicate = 1; // Danh dau co phan tu lap lai
        }
    }

    // Neu khong tim thay phan tu lap lai
    if (!foundDuplicate) {
        printf("Khong co phan tu lap lai.\n");
    }
}

int main() {
    int n;

    // Nhap kich thuoc mang
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    // Nhap cac phan tu cua mang
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Goi ham tim phan tu lap lai
    findDuplicates(arr, n);

    return 0;
}

