#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        int brr[n];
        int j=0;
        for(int i=0;i<n;i++){
            if(arr[i]>=0){
                brr[j]=arr[i];
               
                j++;
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]<0){
                brr[j]=arr[i];
             
                j++;
            }
        }
        for(int i=0;i<n;i++){
           arr[i]=brr[i];
        }
        
        
    }
};