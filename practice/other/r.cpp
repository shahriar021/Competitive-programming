#include <iostream>
using namespace std;

int Zero_Sum_Subsegments(int arr[], int n) ///using O(n*n)
{
int count=0;
int i=0;

while(i<n)
{
int result = 0;

for (int j=i;j<n;j++)
{
result = result + arr[j];
if (result == 0)
{count++;}
}
i++;
}
return count;
}
int main()
{
int arr[] = {1, -1, 1, 1, -1, 1, -1, -1};

int n = sizeof(arr)/sizeof(arr[0]);

cout<< "Number of Zero Sum Subsegments: "<<Zero_Sum_Subsegments(arr, n)<<endl;

return 0;
}