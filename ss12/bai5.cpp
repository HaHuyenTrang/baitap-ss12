#include <stdio.h>

// Ham tim kiem nhi phan su dung de quy
int binarySearch(int arr[], int left, int right, int target) {
    if (left <= right) {
        int mid = left + (right - left) / 2; // Tinh chi so giua

        // Neu phan tu o giua la target
        if (arr[mid] == target)
            return mid;

        // Neu target nho hon, tim trong nua trai
        if (arr[mid] > target)
            return binarySearch(arr, left, mid - 1, target);

        // Neu target lon hon, tim trong nua phai
        return binarySearch(arr, mid + 1, right, target);
    }

    // Neu khong tim thay phan tu
    return -1;
}

int main() {
    // Mang da sap xep theo thu tu tang dan
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int n = sizeof(arr) / sizeof(arr[0]); // Xac dinh kich thuoc cua mang
    int target;

    // Nhap phan tu can tim
    printf("Nhap phan tu can tim: ");
    scanf("%d", &target);

    // Goi ham binarySearch
    int result = binarySearch(arr, 0, n - 1, target);

    // In ket qua
    if (result != -1)
        printf("Phan tu %d duoc tim thay o vi tri %d.\n", target, result);
    else
        printf("Phan tu %d khong ton tai trong mang.\n", target);

    return 0;
}

