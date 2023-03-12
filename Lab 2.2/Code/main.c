#include <stdio.h>

int main() {
    const int length = 8;
    printf("\tNormal matrix : \n");
    int matrix[8][8] = {
            {9, 3, 7, 8, 10, 17, 4, 598},
            {20, 9, 13, 12, 15, 15, 148, 13},
            {5, 6, 8, 11, 58, 121, 40, 14},
            {20, 41, 5, 4, 99, 69, 11, 12},
            {59, 27, 74, 78, 4, 28, 12, 54},
            {13, 48, 59, 9, 10, 4, 48, 121},
            {15, 23, 54, 10, 12, 5, 2, 139},
            {14, 21, 45, 14, 21, 10, 13, 1}
    };

    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
           printf("%i\t", matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i <length-1 ; i++) {
        for (int j = i+1; j <length ; j++) {
            int maxRow = i;
            int maxCol = j;
            if(matrix[maxRow][length-1-maxRow] <= matrix[maxCol][length-1-maxCol]){
                maxRow = maxCol;
            }
            int temp = matrix[maxRow][length-1-maxRow];
            matrix[maxRow][length-1-maxRow] = matrix[maxCol][length-1-maxCol];
            matrix[maxCol][length-1-maxCol] = temp;
        }
    }

    printf("\tSorted matrix : \n");
    for (int i = 0; i < length; ++i) {
        for (int j = 0; j < length; ++j) {
            printf("%i\t", matrix[i][j]);
        }

        printf("\n");
    }

    return 0;
}
