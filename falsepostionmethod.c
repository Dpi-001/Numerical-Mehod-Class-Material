#include <stdio.h>
#include <math.h>

#define f(x) (pow(x,3) - 4*pow(x,2) + x + 1)  
#define e 0.0001  

void main() {
    float x0, x1, x2;

  
    do {
        printf("Enter the values of x1 and x2:\n");
        scanf("%f %f", &x1, &x2);
    } while (f(x1) * f(x2) > 0);

   
    do {
       
        x0 = (x1 * f(x2) - x2 * f(x1)) / (f(x2) - f(x1));

       
        if (f(x1) * f(x0) < 0) {
            x2 = x0;
        } else {
            x1 = x0;
        }
    } while (fabs(f(x0)) > e);

    printf("The root is: %.4f\n", x0);
}

