#include <stdio.h>
// double f(double,double);
// double g(double, double);
// int f(int);
int f(int a[],int n);
// float f(int);
extern int b[4];
int a[4] = {4, 1, 6, 8};

int main()
{
    printf("%d\n", f(a,4));
    for (int i = 0; i < 4; i++)
    {
        printf("%d %d\n",a[i], b[i]);
    }
    // printf("%f\n", g(1110.0, 400.0));
    // printf("%d\n", g(100));
    // printf("%f\n", f(10));
    
    return 0;
}