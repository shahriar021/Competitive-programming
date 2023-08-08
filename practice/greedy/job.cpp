#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Stores the maximum deadline that can be associated with a job
#define T 15

// Data structure to store job details. Each job has an identifier,
// a deadline, and profit associated with it.
struct Job
{
    int taskID, deadline, profit;
};

Job make_data(int t,int d,int p){
    Job j;
    j.taskID=t;
    j.deadline=d;
    j.profit=p;
    return j;
}
// Function to schedule jobs to maximize profit
void scheduleJobs(vector<Job> jobs) // no-ref, no-const
{
    // stores the maximum profit that can be earned by scheduling jobs
    int profit = 0;

    // array to store used and unused slots info
    vector<int> slot(T, -1);
    cout<<T<<endl;
    // arrange the jobs in decreasing order of their profits
    sort(jobs.begin(), jobs.end(),
         [](Job &a, Job &b) {
             return a.profit > b.profit; // using C++11 lambda comparison
         });

    // consider each job in decreasing order of their profits
    for (const Job &job : jobs)
    {
        // search for the next free slot and map the task to that slot
        for (int j = job.deadline - 1; j >= 0; j--)
        {   
            if (j < T && slot[j] == -1)
            {
                slot[j] = job.taskID;
                profit += job.profit;
                break;
            }
        }
    }

    // print the scheduled jobs
    cout << "The scheduled jobs are ";
    for (int i = 0; i < T; i++)
    {
        if (slot[i] != -1)
        {
            cout << slot[i] << " ";
        }
    }

    // print the total profit that can be earned
    cout << "\nThe total profit earned is " << profit;
}

int main()
{
    // vector of given jobs. Each job has an identifier, a deadline, and
    // profit associated with it
    int n;
    cin>>n;
    vector<Job> jobs;
    for(int i=0;i<n;i++){
        int taskID,deadline,profit;
        cin >> taskID>>deadline>>profit;
        jobs.push_back(make_data(taskID,deadline,profit));
    }
    scheduleJobs(jobs);

    return 0;
}
