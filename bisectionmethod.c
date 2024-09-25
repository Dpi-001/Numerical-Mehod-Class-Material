#include <stdio.h>
#include <math.h>

#define f(x) (pow(x,2) + 4*x - 10)  // Function definition
#define e 0.0001  // Tolerance level

void main() {
    float x0, x1, x2;

    // Ensure initial guesses are such that f(x1) * f(x2) < 0
    do {
        printf("Enter the values of x1 and x2:\n");
        scanf("%f %f", &x1, &x2);
    } while (f(x1) * f(x2) > 0);

    // Bisection method
    do {
        x0 = (x1 + x2) / 2;

        if (f(x1) * f(x0) < 0) {
            x2 = x0;
        } else {
            x1 = x0;
        }
    } while (fabs(f(x0)) > e);

    printf("The root is: %.4f\n", x0);
}
