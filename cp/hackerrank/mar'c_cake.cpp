#include<bits/stdc++.h>
using namespace std;
int mincal(int calorie[],int n){

    sort(calorie.end(),calorie.begin());

    int cal=0;
    for(int i=0;i<n;i++){
        cal+=pow(2,i)*calorie[i];
    }

    return cal;

}

int main()
{
    int n;
    cin>>n;
    int calo[n];
    for(int i=0;i<n;i++){
        cin>>calo[i];
        
    }
    cout<<mincal(calo, n);
    return 0;
}