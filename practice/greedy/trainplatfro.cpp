#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef vector<double> Trains;

// Function to find the minimum number of platforms needed
// to avoid delay in any train arrival
int findMinPlatforms(Trains arrival, Trains departure) // no-ref, no-const
{
    // sort arrival time of trains
    sort(arrival.begin(), arrival.end());

    // sort departure time of trains
    sort(departure.begin(), departure.end());

    // maintains the count of trains
 
    int count = 0;

    // stores minimum platforms needed
    int platforms = 0;

    // take two indices for arrival and departure time
    int i = 0, j = 0;

    // run till all trains have arrived
    while (i < arrival.size())
    {
        // if a train is scheduled to arrive next
        if (arrival[i] < departure[j])
        {
            // increase the count of trains and update minimum
            // platforms if required
            platforms = max(platforms, ++count);

            // move the pointer to the next arrival
            i++;
        }

        // if the train is scheduled to depart next i.e.
        // `departure[j] < arrival[i]`, decrease trains' count
        // and move pointer `j` to the next departure.

        // If two trains are arriving and departing simultaneously, i.e.
        // `arrival[i] == departure[j]`, depart the train first
        else
        {
            count--, j++;
        }
    }

    return platforms;
}


    int main()
    {
        int n;
        cin >> n;
        Trains arrival(n), departure(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arrival[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> departure[i];
        }
        cout << "The minimum platforms needed is " << findMinPlatforms(arrival, departure);

        return 0;
    
}