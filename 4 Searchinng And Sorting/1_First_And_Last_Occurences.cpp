#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    vector<int> find(int arr[], int n , int k )
    {
        // code here
        vector<int>brr;
        brr.push_back(binarysearchfirst(arr,n,k));
        brr.push_back(binarysearchlast(arr,n,k));
        return brr;
    }
    int binarysearchfirst(int arr[], int n , int k){
        int s=0,e=n-1,c=-1;
        while(s<=e){
            int mid =s+(e-s)/2;
            if(arr[mid]==k){
                c=mid;
                e=mid-1;
            }else if(k>arr[mid]){
                s=mid+1;
            }else{
                e=mid-1;
            }
        }
        return c;
    }
     int binarysearchlast(int arr[], int n , int k){
           int s=0,e=n-1,c=-1;
        while(s<=e){
            int mid =s+(e-s)/2;
            if(arr[mid]==k){
                c=mid;
                s=mid+1;
            }else if(k>arr[mid]){
                s=mid+1;
            }else{
                e=mid-1;
            }
        }
        return c;
     }
};