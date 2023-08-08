#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

struct Pair
{
    int start, finish;
};
Pair make_data(int start, int finish)
{
    Pair ret;
    ret.start = start;
    ret.finish = finish;
    return ret;
}
void selectActivity(vector<Pair> activities)
{
    int k = 0;
    unordered_set<int> t;
    t.insert(0);
    sort(activities.begin(), activities.end(),
         [](auto const &l, auto const &r) {
             return l.finish < r.finish;
         });

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
        cout << "{" << activities[i].start << ", " << activities[i].finish
             << "}" << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    vector<Pair> activities;
    for (int i = 0; i < n; i++)
    {
        int start, finish;
        cin >> start >> finish;
        activities.push_back(make_data(start, finish));
    }
    selectActivity(activities);
    return 0;
}