#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;
struct Pair
{
    int first,last;
};
Pair make_pair(int first,int last){
    Pair p;
    p.first=first;
    p,last=last;
    return p;
}
void select_activity(vector<Pair>  activity)
{
    int k=0;
    unordered_set<int> t;
    t.insert(0);

    sort(activity.begin(),activity.end(),[]
    (auto const &l,auto const &r){
        return l.first<r.last;
    });
    for(int i=1;i<(int)activity.size();i++){
    if(activity[i].first>=activity[k].last){
        t.insert(i);
            k=i;
    }}
    for(int i:t){
        cout  << "{" << activity[i].first << ", " << activity[i].last
                         << "}" << endl;
    }
}

int main(){
    int n;
    cin>>n;
    vector<Pair> activity;
    for(int i=0;i<n;i++){
        int first,last;
        cin>>first>>last;
        activity.push_back(make_pair(first,last));
    }

select_activity(activity);
return 0;
}