#include <stdio.h>

long long MaxPairwiseProduct(int *p, int length);

int main()
{
    int n;
    scanf("%d", &n); // input the number of elements in the array
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    long long result = MaxPairwiseProduct(a, n);
    printf("%lld\n", result);
    // 将%lld改为%I64d 这使得MingW不再报错： unknown conversion type character 'l' in format [-Wformat]
    return 0;
}

long long MaxPairwiseProduct(int *p, int length)
{
    long long result = 0;
    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if ((long long)p[i] * p[j] > result)
                result = (long long)p[i] * p[j];
        }
    }
    return result;
}
