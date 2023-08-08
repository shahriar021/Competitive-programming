#include<bits/stdc++.h>
using namespace std;
/*
int main()
{

    int n,c;
    int arr[50],drr[50];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n-1;i=i++){
        
            if(arr[i]+arr[i+1]>arr[i+2]){
                c=1;
                break;
            }
            else{
                c=0;
            }
        
    }

    if(c==1){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" "<<arr[i+1]<<" "<<arr[i+2]<<"\n";
        }
    }
    else{
        cout<<"-1"<<endl;
    }
    return 0;

}*/
int main(){
int n, count = 0;
cin >> n;
int a[n];
for (int i = 0; i < n; i++)
{
    cin >> a[i];
}
sort(a, a + n);
for (int j = 0; j < n-1; j++)
{
    if ( a[j]<a[j-1]+a[j-2])
    {
        cout << a[j] << " " << a[j - 2] << " " << a[j-1] << endl;
        count++;
        break;
    }
}
if (count == 0)
{
    cout << "-1" << endl;
}

return 0;
}