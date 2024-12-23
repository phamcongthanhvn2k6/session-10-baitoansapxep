#include<stdio.h>

	int main(){
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
		
		printf("Nhap Phan tu muon tim kiem la: ");
		scanf("%d",&phantu);
		
		for(int i=0;i<n;i++){
			if(array[i] == phantu){
				printf("Phan tu %d duoc tim kiem o vi tri: %d\n",phantu,i);
				timkiem = 1;
			}
		}
		if(!timkiem){
			printf("Phan tu %d khong co trong mang!",phantu);
		}
		
		return 0;
	}
