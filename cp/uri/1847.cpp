#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
        cin>>a>>b>>c;
        if (a > b && b <= c)
            printf(":)\n");
        else if (a < b && b >= c)
            printf(":(\n");
        else if (a < b && b < c && (b - a) > (c - b))
            printf(":(\n");
        else if (a < b && b < c && (b - a) <= (c - b))
            printf(":)\n");
        else if (a > b && b > c && (a - b) > (b - c))
            printf(":)\n");
        else if (a > b && b > c && (a - b) <= (b - c))
            printf(":(\n");
        else if (a == b)
        {
            if (b < c)
                printf(":)\n");
            else
                printf(":(\n");
        }
 return 0;


}