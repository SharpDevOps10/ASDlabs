#include <stdio.h>
int main() {
    int middle;
    float matrix[8][8] = {
            {9, 3, 7, 8, 10, 17, 4, 1},
            {20, 9, 13, 12, 15, 19, 3, 13},
            {5, 6, 8, 11, 58, 21, 40, 14},
            {20, 41, 5, 4, 49, 69, 11, 12},
            {59, 27, 74, 7, 4, 28, 12, 54},
            {13, 48, 76, 9, 10, 4, 48, 121},
            {15, 34, 54, 10, 12, 5, 2, 139},
            {13, 21, 45, 14, 21, 10, 13, 1}
    };

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
           printf("%.2f\t", matrix[i][j]);
        }
        printf("\n");
    }
    int LeftLim = 0;
    int RightLim = 7;
    middle = ( LeftLim + RightLim ) / 2;
    while(LeftLim<RightLim){
        if(matrix[middle][middle]<0) {
            RightLim = middle;
        }
        if(matrix[middle][middle]>5){
            LeftLim = middle +1;
        }
        if(matrix[middle][middle]>=0 && matrix[middle][middle]<=5){
            RightLim = middle;
        }
        middle = ( LeftLim + RightLim ) / 2;
        }
        if(matrix[middle][middle]>=0 && matrix[middle][middle]<=5){
            printf("\nThe value is %.2f; The position is (%d;%d)\n" , matrix[middle][middle], middle,middle);
        } else{
            printf("Regretfully, there is no appropriate value in interval [0;5] ");
        }
    return 0;
}