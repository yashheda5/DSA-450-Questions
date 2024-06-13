#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        int sum=nums[0];
        for(int i=1;i<nums.size();i++){
            sum^=nums[i];
        }
        int x=0,y=0;
        int rightMost= sum & ~(sum-1);
        for(int i=0;i<nums.size();i++){
            if(rightMost & nums[i]){
                x^=nums[i];
            }else{
                 y^=nums[i];
            }
        }
        vector<int>arr;
        arr.push_back(x);
        arr.push_back(y);
        sort(arr.begin(),arr.end());
        return arr;
    }
};