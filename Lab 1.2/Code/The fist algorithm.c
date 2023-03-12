#include <stdio.h>
#include <math.h>
int main() {
    int n, counter;
    counter = 0;
    printf ("Please, write the value for N : \n");//Programme with nested loops
    scanf("%i", &n);
    double result = 1;
    for (int i = 1; i<=n; i++) {
        double x = 2*i*log(i+3);
        double y = 0;
        for (int j = 1; j<=i; j++){
            y += 2*j+1;
            counter += 6;
        }
        result *= y/x;
        counter += 11;
    }
    printf("The result of formula = %.7f \n", result);
    printf("The amount of operations is : %d\n", counter );
}
