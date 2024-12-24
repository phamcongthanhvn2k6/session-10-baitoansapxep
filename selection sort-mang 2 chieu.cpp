#include<stdio.h>

int main(){
	
	int n,key;
	int array[100][100];
	
	printf(" Nhap kich thuoc cua mang N*N : ");
	scanf("%d",&n);
	
	for ( int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		printf("Nhap Phan tu thu [%d][%d]: ",i+1,j+1);
		scanf("%d",&array[i][j]);
		}
	}
	
	printf("Cac Phan tu trong mang truoc khi duoc sap xep la: \n");
	
	for ( int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		printf("%d ", array[i][j]);
		}
		printf("\n");
	}
	
	int k=0;
	int a[n*n];
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			a[k++] = array[i][j];
		}
	}
	
	 for (int i=0;i<n*n-1;i++){
			int vitrinhonhat=i;
			for (int j=i+1;j<n*n;j++){
				if(a[j]<a[vitrinhonhat]){
					vitrinhonhat = j;
				}
			}
			int bientam= a[vitrinhonhat];
			a[vitrinhonhat] = a[i];
			a[i]=bientam;
		}
	
	k=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		 array[i][j]= a[k++];
		}
	}
	
	printf("Cac phan tu sau khi duoc sap xep la: \n");
	for ( int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		printf("%d ", array[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
	
}
