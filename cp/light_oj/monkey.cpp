#include<bits/stdc++.h>
using namespace std;

int monkey(int x,int y,vector<vector<int>> a){

    if (x == a.size())
        return 0;

    int ans;

    ans=max(ans,a[x][y]+monkey(x+1,y-1,a));

    ans = max(ans, a[x][y] + monkey(x + 1, y + 1, a));

    return ans;
}

int main(){

    int 
}