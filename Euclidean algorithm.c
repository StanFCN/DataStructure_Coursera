#include <stdio.h>

int GCD(long long a, long long b);

int main() 
{
    long long a, b;
    scanf("%lld%lld", &a, &b);
    printf("%lld与%lld的最大公因子是%d\r\n",a,b,GCD(a,b));
    return 0;
}

int GCD(long long a, long long b)
{
    if (b)
        while ((a %= b) && (b %= a))
            ;
    return a + b;
}