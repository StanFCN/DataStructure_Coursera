/* #include <stdio.h>

long long Fibonacci_number(int n);

int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        printf("Fibonaccinumber%d is %lld\n", n, Fibonacci_number(n));
    }
    
    
    return 0;
}

long long Fibonacci_number(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
        return Fibonacci_number(n - 1) + Fibonacci_number(n - 2);
} */
//fibonacci 40 waiting......


//可以计算时间
#include <stdio.h>
#include <time.h>

long long Fibonacci_number(int n);

int main()
{
    int n;
    clock_t start, end;
    while (scanf("%d", &n) != EOF)
    {
        start = clock(); // 获取开始时间
        long long result = Fibonacci_number(n);
        end = clock(); // 获取结束时间

        // 计算时间差
        double time_spent = (double)(end - start) / CLOCKS_PER_SEC;

        printf("Fibonaccinumber%d is %lld, calculated in %f seconds.\n", n, result, time_spent);
    }

    return 0;
}

long long Fibonacci_number(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
        return Fibonacci_number(n - 1) + Fibonacci_number(n - 2);
}


？？？