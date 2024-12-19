#include<stdio.h>

int main() {
	int n;
	printf("Nhap so phan tu cua mang : ");
	scanf("%d",&n);
	
	if (n <= 0) {
        printf("Khong co gia tri lon nhat\n");
        return 0;
    }
    
	int arr[n];
	
	for(int i = 0; i < n; i++){
		printf("a[%d] = ",i);
		scanf("%d", &arr[i]); 
	} 
	
    
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Phan tu lon nhat la: %d\n", max);
    
	return 0;
	
}


