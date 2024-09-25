#include <stdio.h>
#include <math.h>


#define f(x) (pow(x, 3) - 6)  
#define df(x) (3 * pow(x, 2)) 
#define e 0.0001  

void main() {
    float x0, x1;

  
    printf("Enter the initial guess x1:\n");
    scanf("%f", &x1);

    
    do {
        
        x0 = x1 - (f(x1) / df(x1));

        
        x1 = x0;
    } while (fabs(f(x0)) > e);  

   
    printf("The root is: %.4f\n", x0);
}

