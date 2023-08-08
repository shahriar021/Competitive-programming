#include<bits/stdc++.h>
using namespace std;

typedef vector<double> Train;

int minimumplat(Train arrival,Train departure){

    sort(arrival.end(),arrival.begin());
    sort(departure.begin(),departure.end());
    for(int i=0;i<arrival.size();i++){
    cout<<arrival[i];
    }
    int i=0,j=0,c=0,p=0;

    while(i<arrival.size()){

        if(arrival[i]<departure[j]){
            c++;
            p=max(p,c);
            i++;
        }
        else{
            c--;
            j--;
        }

    }
return p;

}

int main(){
    int n;
    cin>>n;
    Train arrival(n),departure(n);
    for(int i=0;i<n;i++){
        cin>>arrival[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> departure[i];
    }

    cout << minimumplat(arrival,departure);
    return 0;
}