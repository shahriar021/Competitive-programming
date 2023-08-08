#include<bits/stdc++.h>

using namespace std;

int main()
{

    int arr[5];
    long int sum_1=0,sum_2=0;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    sort(arr,arr+5);
    for(int i=0;i<4;i++){
        sum_1+=arr[i];
    }
    sort(arr, arr + 5,greater<int>());
    for (int i = 0; i < 4; i++)
    {
        sum_2 += arr[i];
    }
    cout<<sum_1<<" "<<sum_2<<endl;
}