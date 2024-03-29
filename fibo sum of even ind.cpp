#include <stdio.h>
void fibonacci(int n, int fib[]) {
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
}
int even_fibonacci_sum(int n, int fib[]) {
    int sum = 0;
    for (int i = 0; i <= 2 * n; i += 2) {
        sum += fib[i];
    }
    return sum;
}
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int fib[2 * n + 1];
    fibonacci(2 * n, fib);
    printf("Fibonacci series for %d terms: ", 2 * n + 1);
    for (int i = 0; i <= 2 * n; i++) {
        printf("%d ", fib[i]);
    }
    printf("\n");
    int result = even_fibonacci_sum(n, fib);
    printf("Sum of Fibonacci numbers at even indices up to %d = %d\n", n, result);
    return 0;
}
