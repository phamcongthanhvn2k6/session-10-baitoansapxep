#include <stdio.h>

int main() {
    
    int i, j, temp;
    int array[100];
		int n,phantu,timkiem;
		printf("Nhap So phan tu trong mang: ");
		scanf("%d",&n);
		
		for(int i=0;i<n;i++){
			printf("Nhap Phan tu thu %d: ",i+1);
			scanf("%d",&array[i]);
		}
		printf("Cac phan tu trong mang la: ");
		for (int i=0;i<n;i++){
			printf("%d ",array[i]);
		}
    printf("\n");

    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (array[j] > array[j+1]) {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    printf("Mang sau khi sap xep: ");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

