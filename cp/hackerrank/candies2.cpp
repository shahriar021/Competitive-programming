#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    cin>>n;
    long arr[100000];
    for(long i=0;i<n;i++){
        cin>>arr[i];
    }
    long high_count=1;
    long sum=1;
    long low_count=0;
    for(long i=1;i<n;i++){
        if(arr[i]>=arr[i-1]){
            if(low_count>0){
                sum+=(low_count*(low_count+1)/2);
                if(low_count>=high_count){
                    sum+= low_count-high_count+1;
                }
                 high_count = 1;
                
                low_count = 0;
            }
           high_count =(arr[i]==arr[i-1]) ? 1 : high_count+1; 
           sum+=high_count;
        }
        else{
            low_count++;
        }
    }
    if (low_count > 0)
    {
        sum += (low_count * (low_count + 1) / 2);
        if (low_count >= high_count)
        {
            sum += low_count - high_count + 1;
        }
        
    }
    cout<<sum<<endl;
    return 0;
}