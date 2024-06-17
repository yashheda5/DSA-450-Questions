#include <bits/stdc++.h>
using namespace std;
class Solution{   
public:
    int median(vector<vector<int>> &matrix, int R, int C){
        // code here 
       int low =INT_MAX;
       int high =INT_MIN;
       for(int i=0;i<R;i++){
           low =min(low,matrix[i][0]);
           high =max(high,matrix[i][C-1]);
       }
       int req =(R*C +1)/2;
       while(low<high){
           int mid =low+(high-low)/2;
           int ans=0;
           for(int i=0;i<R;i++){
               int l=0,h=C-1;
               while(l<=h){
                   int m=l+(h-l)/2;
                   if(matrix[i][m]<=mid){
                       l=m+1;
                   }else{
                       h=m-1;
                   }
               }
               ans+=l;
           }
           if(ans >= req){
               high=mid;
           }else{
               low=mid+1;
           }
           
       }
       return low;
       
    }
};