#include <bits/stdc++.h>
using namespace std;
class Solution{
public:

	vector<int> valueEqualToIndex(int arr[], int n) {
	    // code here
	    vector<int>brr;
	    for(int i=0;i<n;i++){
	        if(arr[i]==i+1){
	            brr.push_back(i+1);
	        }
	}
	return brr;
	}
};