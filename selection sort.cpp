#include<stdio.h>

	int main(){
		int n;
		int array[100];
		printf("Nhap so luong phan tu trong mang: ");
		scanf("%d",&n);
		
		
		for(int i=0;i<n;i++){
			printf("Nhap phan tu thu %d: ",i+1);
			scanf("%d",&array[i]);
		}
		
		printf("Phan tu truoc khi duoc sap xep: \n");
		for (int i=0;i<n;i++){
				printf("%d ",array[i]);
			}
			printf("\n");
		
		for (int i=0;i<n-1;i++){
			int vitrinhonhat=i;
			for (int j=i+1;j<n;j++){
				if(array[j]<array[vitrinhonhat]){
					vitrinhonhat = j;
				}
			}
			int bientam= array[vitrinhonhat];
			array[vitrinhonhat] = array[i];
			array[i]=bientam;
		}
		
		printf("Phan tu sau khi duoc sap xep: \n");
			for (int i=0;i<n;i++){
				printf("%d ",array[i]);
			}
			
		return 0;
	} 
