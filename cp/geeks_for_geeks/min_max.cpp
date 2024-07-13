//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    pair<long long, long long> getMinMax(vector<long long int> arr) {
        
        
        
        int min=INT_MAX,max=INT_MIN ;
        // code here
        
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]<min){
                min=arr[i];
                
            }
        }
        
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]>max){
                max=arr[i];
                // ans[i]++;
                
            }
        }
        
        return make_pair(min, max);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<long long int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        pair<long long, long long> pp = ob.getMinMax(arr);
        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends