#include<bits/stdc++.h>
using namespace std;

struct Pair{
    int first,last;
};
Pair make_pair(int first,int last){
    Pair p;
    p.first=first;
    p.last=last;
    return p;
}
void activity(vector<Pair> c){
    int  k=0;
    unordered_set<int> t;
    t.insert(0);
    sort(c.begin(),c.end(),[](auto const &l,auto const &r){
    return l.last<r.last;});

    for(int i=0;i<(int)c.size();i++){
        if(c[i].first>=c[k].last){
            t.insert(i);
            k=i;
        }
    }
    for(int p:t){
        cout<<"{"<<c[p].first<<","<<c[p].last<<"}"<<endl;
    }


}
int main()
{
    int  n;
    cin>>n;
    vector<Pair> activities;
    for(int i=0;i<n;i++){
        int first,last;
        cin>>first>>last;
        activities.push_back(make_pair(first,last));
    }
    activity(activities);
    return 0;
}