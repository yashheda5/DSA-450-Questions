 #include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
        // If there are no intervals, return an empty result
        if (intervals.empty()) return {};

        // Sort the intervals based on the starting time
        sort(intervals.begin(), intervals.end());

        // Initialize the result with the first interval
        vector<vector<int>>ans={intervals[0]};
        for(int i=1;i<intervals.size();i++){
            vector<int>& last =ans.back();
            if(intervals[i][0]<=last[1]){
                last[1]=max(intervals[i][1],last[1]);
            }else{
                ans.push_back(intervals[i]);
            }
        }
        return ans;
    }
};