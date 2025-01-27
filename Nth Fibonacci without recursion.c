#include <stdio.h>
int fibonacci(int n)
{
  if (n <= 1) return n;

    int pre1 = 0, pre2 = 1, result = 0;

    for (int i = 2; i <= n; i++) {
        result = pre1 + pre2;
        pre1 = pre2;
        pre2 = result;
    }

    return result;
}

int main()
{
    int n;
    printf("Enter the position (n): ");
    scanf("%d", &n);

    int f = fibonacci(n);
    printf("The %dth Fibonacci number is: %d\n", n, f);

    return 0;
}
