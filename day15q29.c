//Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/
#include <stdio.h>

int main() {
    int n, i;
    long long factorial = 1; // Use long long for large results

    // Input number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check for negative input
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } 
    else {
        // Calculate factorial
        for (i = 1; i <= n; i++) {
            factorial *= i;
        }

        // Display result
        printf("Factorial of %d = %lld\n", n, factorial);
    }

    return 0;
}