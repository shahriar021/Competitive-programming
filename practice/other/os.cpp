#include<iostream>
#include <unistd.h>
    using namespace std;
int main()
{
    int a[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int odd_sum = 0, even_sum = 0, n, i;
    n = fork();
    if (n > 0)
    { //when n is not 0, then it is parent process
        for (int i : a)
        {
            if (i % 2 == 0)
                even_sum = even_sum + i;
        }
        cout << "Parent process " << endl;
        cout << "Sum of even numbers: " << even_sum << endl;
    }
    else
    { //when n is 0, then it is child process
        for (int i : a)
        {
            if (i % 2 != 0)
                odd_sum = odd_sum + i;
        }
        cout << "Child process " << endl;
        cout << "Sum of odd numbers: " << odd_sum << endl;
    }
    return 0;
}