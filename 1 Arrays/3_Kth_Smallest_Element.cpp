#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
  
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        sort(arr,arr+1+r);
        return arr[k-1];
    }
};