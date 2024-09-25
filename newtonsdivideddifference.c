#include <stdio.h>

int main()  // Use int main() instead of void main()
{
    float x[10];  // x values
    float y[10][10];  // Divided differences stored as float
    int n, i, j, k;
    float f, term;

    printf("Enter the number of observations: ");
    scanf("%d", &n);

    printf("\nEnter the different values of x:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }

    printf("\nEnter the corresponding values of y:\n");
    for (i = 0; i < n; i++) {
        scanf("%f", &y[i][0]);  // Reading initial y values as float
    }

    // Calculating the divided differences table
    for (j = 1; j < n; j++) {
        for (i = 0; i < n - j; i++) {
            y[i][j] = (y[i+1][j-1] - y[i][j-1]) / (float)(x[i+j] - x[i]);  // Perform float division
        }
    }

    printf("\nEnter the value of 'k' at which you want to evaluate f(k): ");
    scanf("%d", &k);

    // Initialize the result with the first value
    f = y[0][0];

    // Calculate f(k) using the Newton divided difference formula
    for (i = 1; i < n; i++) {
        term = y[0][i];  // Get the divided difference coefficient
        for (j = 0; j < i; j++) {
            term *= (k - x[j]);  // Multiply the term by (k - x[j])
        }
        f += term;  // Add the term to the result
    }

    printf("\nf(%d) = %f", k, f);

    return 0;  // Returning 0 to indicate successful execution
}
