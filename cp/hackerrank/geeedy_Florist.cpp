/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n,k,p,l;
    long long int t;
    long long int sum=0,sum_1=0;
    long long  int arr[1000000];
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>arr[i];;
    }
    sort(arr,arr+n);
    if(n==k){
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        cout <<sum<<endl;
    }
    else if(n>k){
        l=n-k;
        for(int i=l;i<n;i++){
            sum+=arr[i];
        }
        for (int i = 0; i < l; i++)
        {
            sum_1 += (1+1)*arr[i];
        }
        
        t=sum+sum_1;
        cout<<t<<endl;
    }
    

}
*/

#include <bits/stdc++.h>
using namespace std;

/*int main()
{
    long int n, k, p, l;
    long long int t;
    long long int sum = 0, sum_1 = 0;
    long long int arr[1000000];
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        ;
    }
    sort(arr, arr + n);
  
    if (n != k)
    {
        l = n - k;
        for (int i = l; i < n; i++)
        {
            sum += arr[i];
        }
        for (int i = 0; i < l; i++)
        {
            sum_1 += (1 + 1) * arr[i];
        }

        t = sum + sum_1;
        cout << t << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        cout << sum << endl;
    }
}*/
int main() {
    int n, k; cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; ++i)
        cin >> v[i];
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    
    int tot = 0;
    for(int i = 0; i < n; ++i) {
        tot += ((i / k) + 1) * v[i];
    }
    cout << tot << endl;
    return 0;
}