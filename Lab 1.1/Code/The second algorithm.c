#include <stdio.h>
int main() {
    float x,y;
    printf("Please, write the value for X\n"); // The program without logical operations
    scanf("%f",&x);
    if(x>=8)
    {
        if(x<23)
        {
            y = -5*x*x*x +10;
            printf("Your x = %.3f belongs to the interval [8;23)\nYour result is y = %.3f\n",x,y);
        }
        else
        {
            printf("Regretfully, x = %.3f does not belong to the given intervals; the function does not exist here",x);
        }
    }
    else if(x>-3)
    {
        if (x<=0)
        {
            y = 2*x*x*x + 8*x*x;
            printf("Your x = %.3f belongs to the interval (-inf;-19)+(-3;0]\nYour result is y = %.3f\n",x,y);
        }
        else
        {
            printf("Regretfully, x = %.3f does not belong to the given intervals; the function does not exist here",x);
        }
    }
    else if(x<-19)
    {
        y = 2*x*x*x + 8*x*x;
        printf("Your x = %.3f belongs to the interval (-inf;-19)+(-3;0]\nYour result is y = %.3f\n",x,y);
    }
    else
    {
        printf("Regretfully, x = %.3f does not belong to the given intervals; the function does not exist here",x);
    }
    return 0;
}
