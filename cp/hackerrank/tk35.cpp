#include <bits/stdc++.h>
using namespace std;
 
int taka[] = { 1, 2, 5, 10, 20,
               50, 100, 500};
int n = sizeof(taka) / sizeof(taka[0]);
 
void findMin(long int tk)
{
    sort(taka, taka + n, greater<int>());
    
    
    vector<int> ans;
    
   
    for (int i =0; i <= n; i++) {
 
       
        while (tk >= taka[i]) {
            tk -= taka[i];
            
            ans.push_back(taka[i]);
        }
    }
    
    int t=0;
   
    for (int i = 0; i < ans.size(); i++){
        
        t++;
       
    }


cout<<t;
}
 

int main()
{
   long  int n ;
    cin>>n;
    
    findMin(n);
    return 0;
}