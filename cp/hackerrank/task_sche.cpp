#include<bits/stdc++.h>
using namespace std;

struct ACT{
    int start,finish;
};

ACT make_data(int s,int f){
    ACT a;
    a.start=s;
    a.finish=f;
    return a;
}

int TASK_SCHEDULE(vector<ACT> TASK){
    int k=0;

    unordered_set<int> t;
    t.insert(0);
    sort(t.begin(),t.end(),[](auto cons &lhs,auto cons &rhs){
        return lhs.finish<rhs.finish;
    });
    int m=0;
    for(int i=0;i<(int)TASK.size();i++){
        if(TASK[i].s>=TASK[k].f){
            t.insert(i);
            k=i;
            m++;
        }
    }

   return m;
}

int main()
{
    int n;
    cin>>n;
    vector<ACT> task;
    for(int i=0;i<n;i++){
        int st,fs;
        cin>>st>>fs;
        cout<<task.push_back(make_data(st,fs));
    }

    TASK_SCHEDULE(TASK);
}