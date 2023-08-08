#include <iostream>
#include <vector>
using namespace std;

long long fib(int n, vector<long long> &dp)
{
    if (n == 1 || n == 2)
        return 1;
    if (dp[n] != 0) // Checking if Nth term is already computed or not
        return dp[n];
    return dp[n] = fib(n - 1, dp) + fib(n - 2, dp); // Storing the computed values
}

int main()
{
    int n;
    cin >> n;
    vector<long long> dp(10000000); // Creating the array for storing computed values
    cout << fib(n, dp);
}