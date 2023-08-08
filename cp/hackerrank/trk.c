
#include<stdio.h>

int main()
{
    int n, len = 0, mx = 0,lim,i;
    scanf("%d",&n);
    long long arr[n + 1], sum = 0, 
   
    for (i = 0; i < n; i++){
        scanf("%d",&arr[i]);}
    scanf("%d",&lim);
    for (i = 0; i < n; i++)
    {
        sum = 0, len = 0;
        for (j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum <= lim)
                len++;
        }
        mx = max(mx, len);
    }
    printf("%d\n",mx);
    return 0;
}