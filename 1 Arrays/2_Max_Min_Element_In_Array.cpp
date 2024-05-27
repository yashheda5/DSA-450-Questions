#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    pair<long long, long long> getMinMax(long long a[], int n) {
        // code here
        int max=INT_MIN;
        int min=INT_MAX;
        for(int i=0;i<n;i++){
            if(a[i]>max){
                max =a[i];
            }
            if(a[i]<min){
                min=a[i];
            }
        }
        return  {min,max};
    }
};