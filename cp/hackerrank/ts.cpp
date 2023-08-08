#include<bits/stdc++.h>

using namespace std;

struct ACT
{
    int start, finish;
};
ACT make_data(int start, int finish)
{
    ACT ret;
    ret.start = start;
    ret.finish = finish;
    return ret;
}
int TASK_SCHEDULE(vector<ACT> activities)
{
    int k = 0;
    unordered_set<int> t;
    t.insert(0);
    sort(activities.begin(), activities.end(),
         [](auto const &l, auto const &r) {
             return l.finish < r.finish;
         });
    int j=0;
    for (int i = 1; i < (int)activities.size(); i++)
    {
        if (activities[i].start >= activities[k].finish)
        {
            t.insert(i);
            k = i;
            
        }
    }
   
    for (int i : t)
    {
        j++;
        
    }
    return j;
}
int main()
{
    int n;
    cin >> n;
    vector<ACT> task;
    for (int i = 0; i < n; i++)
    {
        int start, finish;
        cin >> start >> finish;
        task.push_back(make_data(start, finish));
    }
    cout<<TASK_SCHEDULE(task);
    return 0;
}