#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        vector<int>brr;
        for(int i=0;i<n;i++){
        if(arr[i]>=0){
            brr.push_back(arr[i]);
        }
        }
        for(int i=0;i<n;i++){
        if(arr[i]<0){
            brr.push_back(arr[i]);
        }
        }
        for(int i=0;i<n;i++){
        arr[i]=brr[i];
        }
    }
};