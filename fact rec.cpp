#include <stdio.h>
int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}
int main() {
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0)
        printf("Factorial of negative numbers is not defined.\n");
    else
        printf("Factorial of %d = %d\n", num, factorial(num));

    return 0;
}
