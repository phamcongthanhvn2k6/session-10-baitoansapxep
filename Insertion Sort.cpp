#include <stdio.h>

int main() {
    int i, j, key;
    int array[100];
		int n,phantu,timkiem;
		printf("Nhap So phan tu trong mang: ");
		scanf("%d",&n);
		
		for(int i=0;i<n;i++){
			printf("Nhap Phan tu thu %d: ",i+1);
			scanf("%d",&array[i]);
		}
		printf("Cac phan tu trong mang la: \n");
		for (int i=0;i<n;i++){
			printf("%d ",array[i]);
		}
    printf("\n");

    for (i = 1; i < n; i++) {
        key = array[i];
        j = i - 1;

        
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }

    printf("Mang sau khi sap xep: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

