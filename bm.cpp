#include<stdio.h>
#include<math.h>

#define f(x) (pow(x, 2) - 4*x - 10)  // Define the function
#define e 0.0001  // Define the error tolerance

void main() 
{
    float x1, x2, x0;

    // Input two initial guesses x1 and x2 such that f(x1) * f(x2) < 0
    do {
        printf("Enter the values of x1 and x2: ");
        scanf("%f %f", &x1, &x2);
    } while (f(x1) * f(x2) > 0);

    // Implement the bisection method
    do {
        x0 = (x1 + x2) / 2;  // Calculate the midpoint

        if (f(x1) * f(x0) < 0) {
            x2 = x0;  // If the function changes sign between x1 and x0, replace x2 with x0
        } else {
            x1 = x0;  // If the function changes sign between x0 and x2, replace x1 with x0
        }
    } while (fabs(f(x0)) > e);  // Repeat until the error is within the tolerance

    printf("The root is: %f\n", x0);
}

