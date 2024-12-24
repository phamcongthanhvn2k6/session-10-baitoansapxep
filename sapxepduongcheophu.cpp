#include <stdio.h>

int main() {
    int row, col;

    printf("Nhap so dong: ");
    scanf("%d", &row);
    printf("Nhap so cot: ");
    scanf("%d", &col);

    int array[row][col];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Nhap gia tri phan tu array[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    printf("Ma tran ban dau:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    int diagonalLength = (row < col) ? row : col;
    for (int i = 0; i < diagonalLength - 1; i++) {
        int max_idx = i;
        for (int j = i + 1; j < diagonalLength; j++) {
            if (array[j][col - j - 1] > array[max_idx][col - max_idx - 1]) {
                max_idx = j;
            }
        }
        int temp = array[max_idx][col - max_idx - 1];
        array[max_idx][col - max_idx - 1] = array[i][col - i - 1];
        array[i][col - i - 1] = temp;
    }

    printf("Ma tran sau khi sap xep duong cheo phu giam dan:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}

