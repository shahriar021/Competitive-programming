#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
        int n,x;
        vector<int> vec(n,x);
        for(int i=0;i<n;i++){
            vec.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
           cout<<vec[i]<<endl;;
        }
}