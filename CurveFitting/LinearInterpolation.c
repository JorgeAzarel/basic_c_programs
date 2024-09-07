#include <stdio.h>
#include <stdlib.h>

double linearInterpolation(double x0, double x1, double f0, double f1, double x);

int main() { 
    double x0, x1, f0, f1, x, result;
    
    printf("Enter x0: ");
    scanf("%lf", &x0);
    printf("Enter x1: ");
    scanf("%lf", &x1);
    printf("Enter f(x0): ");
    scanf("%lf", &f0);
    printf("Enter f(x1): ");
    scanf("%lf", &f1);
    printf("Enter the value of x for the interpolation: ");
    scanf("%lf", &x);

    result = linearInterpolation(x0, x1, f0, f1, x);
    
    printf("The interpolation value in x = %.2lf is: %.2lf\n", x, result);

    system ("pause");
    return 0;
    }

double linearInterpolation(double x0, double x1, double f0, double f1, double x) {

    return f0 + ((x - x0) / (x1 - x0)) * (f1 - f0);
}
