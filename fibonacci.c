#include <stdio.h>

int fibo(int n)
{
    int prev = 1;
    int curr = 1;
    int next = 1;
    int i;
    for (i = 3; i <= n; i++)
    {
        next = curr + prev;
        prev = curr;
        curr = next;
    }
    return next;
}


int main()
{
    int n;
    int result;
    printf("Enter the required nth number in fibonacci series: ");
    scanf("%d", &n);

    if (n == 0)
        result = 0;
    else
        result = fibo(n);
    printf("The %d number in fibonacci series is %d\n", n, result);

    return 0;
}
