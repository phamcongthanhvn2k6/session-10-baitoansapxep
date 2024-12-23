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
		int x,result;
		printf("Nhap phan tu can tim kiem");
		scanf("%d",&x);
		int left =0,right = n-1;
		result = -1;
		
		while( left <= right){
			int mid = left + (right - left)/2;
			
			if(array[mid] == x){
				result = mid;
				break;
			}
			
			if(array[mid] < x){
				left = mid+1;
			}
			else{
				right = mid-1;
			}
	}
		if(result != -1){
			printf("Phan tu %d duoc tim thay o vi tri: %d\n",x,result);
		}
		else{
			printf("Phan tu %d khong co trong mang!",x);
		}
		
		return 0;
	} 
