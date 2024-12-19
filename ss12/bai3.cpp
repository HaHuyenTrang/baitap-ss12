#include<stdio.h>

int main() {
	int n;
	printf("Nhap so luong phan tu cua mang : ");
	scanf("%d",&n);
	int arr[n];
	for(int i = 0; i<n; i++){
		printf("a[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	
	int found = 0;
	
	for(int i = 0; i < n/2; i++){
		if(arr[i] == arr[n - 1 - i]){
			printf("Cap doi xung : (%d, %d)\n",arr[i],arr[n - 1 - i]);
			found = 1;
		}
	}
	
	if(!found){
		printf("Mang ko co phan tu doi xung \n");
	}
	return 0;
}


