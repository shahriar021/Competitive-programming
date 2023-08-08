#include<bits/stdc++.h>
using namespace std;
#define T 15
struct Job{
    int taskID,deadline,profit; 
};
Job make_data(int taskID,int deadline,int profit){
    Job j;
    j.taskID=taskID;
    j.deadline=deadline;
    j.profit=profit;
    return j;
}

void schedule(vector<Job> jobs){

    int profit=0;
    vector<int> slot(T,-1);
    sort(jobs.begin(),jobs.end(),[](Job &a, Job &b){
        return a.profit>b.profit;
    });

    for(const Job &job: jobs)
    {
        if(int j=job.deadline-1;j >= 0 ;j--){
            if(j<T && slot[j]==-1){
                slot[j]=job.taskID;
                profit+=job.profit;
                break;
            }
        }
    }

    cout<<"the schedule jobs are ";
    for(int i=0;i<T;i++){
        if(slot[i]!=-1){
            cout<<slot[i]<<" ";
        }
    }
    cout<<"\nthe total profit earned is "<<profit;

}