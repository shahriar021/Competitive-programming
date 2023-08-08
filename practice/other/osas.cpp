#include<bits/stdc++.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



int main()
{
    int i = 0;
    pid_t p;
    p = fork();
    printf("Tuesday\n");

   

        while (i < 2)
    {
        if (p > 0)
        {
            printf("CSE");
        }
        else
        {
            p = fork();
            printf("Hello World\n");
        }
        i++;
    }
}