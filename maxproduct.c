#include <stdio.h>
#include <stdlib.h>
long long MaxPairwiseProduct(int *p, int length);
long long FastMaxPairwiseProduct(int *p, int length);

int main()
{
    int n;
    scanf("%d", &n); // input the number of elements in the array
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    /*     while (1)
        { */
    /*         int n = rand() % 10 + 2;
            int a[n];
            for (int i = 0; i < n; i++)
            {
                a[i] = rand() % 10;
                printf("%d ", a[i]);

            }
            printf("\n"); */

    long long result1 = FastMaxPairwiseProduct(a, n);
    printf("%lld\n", result1);
    /*         long long result2 = MaxPairwiseProduct(a, n);
            if (result1 != result2)
            {
                printf("%lld  %lld\n", result1, result2);
                break;
            }
            else
                printf("ok\n");
        } */

    // 将%lld改为%I64d 这使得VScode不再报错： unknown conversion type character 'l' in format [-Wformat]
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

// FAST
long long FastMaxPairwiseProduct(int *p, int length)
{
    int maxindex1 = -1;
    int maxindex2 = -1;
    for (int i = 0; i < length; i++)
    {
        if (maxindex1 == -1 || p[i] > p[maxindex1])
        {
            maxindex1 = i;
        }
    }
    for (int i = 0; i < length; i++)
    {
        if (i != maxindex1 && (maxindex2 == -1 || p[i] > p[maxindex2]))
        {
            maxindex2 = i;
        }
    }
    return (long long)p[maxindex1] * p[maxindex2];
}
