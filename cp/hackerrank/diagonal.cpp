#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,t;
    cin>>n;
    int arr[100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int s_1=0,s_2=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i==j){
                s_1+=arr[i][j];
            }
            if((i+j)==n-1){
                s_2+=arr[i][j];
            }
        }
    }

    cout << abs((s_1) - (s_2) )<< endl;
    return 0;
}