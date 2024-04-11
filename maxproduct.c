#include <stdio.h>

int MaxPairwiseProduct(int* p,int length);

int main()
{
    int n;
    scanf("%d", &n); // input the number of elements in the array
    int a[n];
    
    for (int i = 0; i < n;i++)
    {
        scanf("%d", &a[i]);
    }
    int result = MaxPairwiseProduct(a,n);
    printf("%d\n", result);

    return 0;
}

int MaxPairwiseProduct(int* p,int length)
{
    int result = 0;
    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if(p[i] * p[j] > result)
                result = p[i] * p[j];
        }
        
    }
    return result;
}
