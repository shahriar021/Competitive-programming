#include<bits/stdc++.h>
using namespace std;
#define T 20;
struct JOB{
    int task,deadline,profit;
};

JOB make_data(int t,int d,int p ){
    JOB j;
    j.task=t;
    j.deadline=d;
    j.profit=p;
    return j;
}

void JOBsch(vector<JOB> jobs){

    int profit=0;
    vector<int> slot(T,-1);
    sort(jobs.begin(),jobs.end(),[](JOb &a,JOB &b){
        return a.profit>b.profit;
    });
    for(const JOB &JOB: jobs){
        for(int j=JOB.deadline-1;j>=0;j--){
            if(j<T && slot[j]==-1){
                slot[j]=JOB.task;
                profit+=profit;
                break;
            }
        }
    }
}