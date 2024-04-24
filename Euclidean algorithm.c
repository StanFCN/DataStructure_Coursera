#include <stdio.h>

int GCD(long long a, long long b);
int fwjGCD(long long a, long long b);
int main()
{
    long long a, b;
    scanf("%lld%lld", &a, &b);
    printf("%lld与%lld的最大公因子是%d\r\n\r\n", a, b, fwjGCD(a, b));
    printf("%lld与%lld的最大公因子是%d\r\n\r\n", a, b, GCD(a, b));
    return 0;
}

int GCD(long long a, long long b)
{
    if (b)
        while ((a %= b) && (b %= a))
            ;
    return a + b;
}

int fwjGCD(long long a, long long b)
{
    long long a1;
    if (b == 0)
        return a;
    a1 = a % b;
    return fwjGCD(b, a1);
}