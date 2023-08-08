#include <stdio.h>

int F[50]; //array to store fibonacci terms

// Initially, all elements of array F are -1.
void init_F()
{
    int i;
    for (i = 0; i < 50; i++)
    {
        F[i] = -1;
    }
}

int dynamic_fibonacci(int n)
{
    if (F[n] < 0)
    {
        if (n == 0)
        {
            F[n] = 0;
        }
        else if (n == 1)
        {
            F[n] = 1;
        }
        else
        {
            F[n] = dynamic_fibonacci(n - 1) + dynamic_fibonacci(n - 2);
        }
    }
    return F[n];
}

int main()
{
    init_F();
    printf("%d\n", dynamic_fibonacci(6));
    return 0;
}