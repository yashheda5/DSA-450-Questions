 #include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here 
            int i=n-1,j=0;
            while(i>=0 && j<m){
                if(arr2[j]<arr1[i]){
                    swap(arr1[i],arr2[j]);
                i--;
                j++;
                }else{
                    break;
                }
            }
          
            sort(arr1,arr1+n);
            sort(arr2,arr2+m);
        } 
};
