#include <stdio.h>
#include <math.h>
int main() {
    int n, counter;
    counter = 0;
    printf ("Please, write the value for N : \n"); //Dynamic programming
    scanf("%i", &n);
    double result = 1;
    double y = 0;
    for (int i = 1; i<=n; i++) {
        double x = 2*i*log(i+3);
        y += 2*i+1;
        result *= y/x;
        counter += 13;
    }
    printf("The result of formula = %.7f \n", result);
    printf("The amount of operations is : %d\n", counter );
}

