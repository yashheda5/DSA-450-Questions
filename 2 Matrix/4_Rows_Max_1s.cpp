#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int c=0,l;
	    for(int i=0;i<arr.size();i++){
	        int low=0,high=arr[i].size()-1;
	        while(low<high){
	            int mid =low+(high-low)/2;
	            if(arr[mid]==1){
	                high==mid;
	            }else if(1>arr[mid]){
	                low=mid+1;
	            }else{
	                high=mid-1;
	            }
	        }
	        
	        
	        
	    }
	}

};