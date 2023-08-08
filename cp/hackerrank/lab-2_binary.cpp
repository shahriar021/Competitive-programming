#include<iostream>
using namespace std;

int binarySearch(int n,int ara[],int target){
    int high=n-1;
    int low=0;
    int mid;

    while(high>=low){

        mid=(low+high)/2;
        if(ara[mid]==target){
            return mid;
        }
        else if(ara[mid]>target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;


}
int main()
{
    int n,ara[100000],target,k;
            cin >>n>>k;
            for(int i=0;i<n;i++){
                cin>>ara[i];
            }
        
        for(int i=0;i<k;i++){
            cin >> target;
            cout << binarySearch(n, ara, target) << endl;
        }

        return 0;
}