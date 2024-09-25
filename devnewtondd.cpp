#include <stdio.h>

// Function to calculate the divided differences
void dividedDifferenceTable(float x[], float y[][10], int n) {
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            y[j][i] = (y[j + 1][i - 1] - y[j][i - 1]) / (x[j + i] - x[j]);
        }
    }
}

// Function to apply Newton's divided difference interpolation formula
float applyFormula(float value, float x[], float y[][10], int n) {
    float result = y[0][0];
    float term;
    
    for (int i = 1; i < n; i++) {
        term = y[0][i];
        for (int j = 0; j < i; j++) {
            term *= (value - x[j]);
        }
        result += term;
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

    // Constructing the divided difference table
    dividedDifferenceTable(x, y, n);

    // Input the value for interpolation
    printf("\nEnter the value of x to find f(x): ");
    scanf("%f", &value);

    // Applying the formula to find f(value)
    result = applyFormula(value, x, y, n);

    // Displaying the result
    printf("\nThe interpolated value at x = %f is f(x) = %f\n", value, result);

    return 0;
}

