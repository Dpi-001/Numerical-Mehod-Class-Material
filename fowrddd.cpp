#include <stdio.h>

// Function to calculate the forward difference table
void forwardDifferenceTable(float x[], float y[][10], int n) {
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            y[j][i] = y[j + 1][i - 1] - y[j][i - 1];
        }
    }
}

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n == 0) return 1;
    int fact = 1;
    for (int i = 2; i <= n; i++)
        fact *= i;
    return fact;
}

// Function to apply Newton's forward difference interpolation formula
float applyNewtonForward(float value, float x[], float y[][10], int n) {
    float result = y[0][0]; // Initialize result with y[0]
    float h = x[1] - x[0];  // Assuming equal intervals
    float u = (value - x[0]) / h;
    float term = u;

    for (int i = 1; i < n; i++) {
        result += (term * y[0][i]) / factorial(i);
        term *= (u - i); // Update term for next iteration
    }

    return result;
}

int main() {
    int n;
    float x[10], y[10][10], value, result;

    // Input number of points
    printf("Enter the number of data points: ");
    scanf("%d", &n);

    // Input x values
    printf("Enter the values of x:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &x[i]);
    }

    // Input corresponding y values
    printf("Enter the corresponding values of y:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &y[i][0]);
    }

    // Constructing the forward difference table
    forwardDifferenceTable(x, y, n);

    // Input the value for interpolation
    printf("\nEnter the value of x to find f(x): ");
    scanf("%f", &value);

    // Applying Newton's Forward Difference formula
    result = applyNewtonForward(value, x, y, n);

    // Displaying the result
    printf("\nThe interpolated value at x = %f is f(x) = %f\n", value, result);

    return 0;
}

