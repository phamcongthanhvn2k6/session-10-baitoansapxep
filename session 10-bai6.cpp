#include<stdio.h>

int main() {
    int n;
    int array[100];
    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Phan tu truoc khi duoc sap xep: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    for (int i = 0; i < n-1; i++) {
        int vitrinhonhat = i;
        for (int j = i + 1; j < n; j++) {
            if (array[j] < array[vitrinhonhat]) {
                vitrinhonhat = j;
            }
        }
        int bientam = array[vitrinhonhat];
        array[vitrinhonhat] = array[i];
        array[i] = bientam;
    }

    printf("Phan tu sau khi duoc sap xep: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    int x, dem = 0;
    int vitri[100];
    printf("Nhap phan tu can tim kiem: ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        if (array[i] == x) {
            vitri[dem] = i;
            dem++;
        }
    }

    if (dem > 0) {
        printf("Phan tu %d duoc tim thay o cac vi tri: ", x);
        for (int i = 0; i < dem; i++) {
            printf("%d ", vitri[i]);
        }
        printf("\n");
    } else {
        printf("Phan tu %d khong co trong mang!\n", x);
    }

    return 0;
}

