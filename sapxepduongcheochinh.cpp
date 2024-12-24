#include<stdio.h>

	int main(){
		int n;
		int array[n][n];
		printf("Nhap kich thuoc N*N cua mang hai chieu: ");
		scanf("%d",&n);
		
		for( int i=0;i<n;i++){
			for( int j=0;j<n;j++){
				printf("Nhap Phan tu thu [%d][%d]: ",i+1,j+1);
				scanf("%d",&array[i][j]);
			}
		}
		printf("Mang 2 chieu truoc khi duoc sap xep la: \n");
		
		for( int i=0;i<n;i++){
			for( int j=0;j<n;j++){
			 	printf("%d ", array[i][j]);
			}
			printf("\n");
		}
		
		for(int i=0;i<n;i++){
			int vitrinhonhat=i;
			for( int j=i+1;j<n;j++){
				if( array[j][j] < array[vitrinhonhat][vitrinhonhat]){
					vitrinhonhat = j;
				}
			}
			int bientam = array[vitrinhonhat][vitrinhonhat];
			array[vitrinhonhat][vitrinhonhat] = array[i][i];
			array[i][i] = bientam;
		}
		
		printf("mang sau khi duoc sap xep la: \n");
		for( int i=0;i<n;i++){
			for( int j=0;j<n;j++){
			 	printf("%d ", array[i][j]);
			}
			printf("\n");
		}
		
		return 0;
	}
