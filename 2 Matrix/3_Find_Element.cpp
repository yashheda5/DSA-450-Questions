#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to search a given number in row-column sorted matrix.
    bool search(vector<vector<int> > matrix, int n, int m, int k) 
    {
        // code here
        int i=0,j=m-1;
        while (i<n &&  j<m  && i>=0 && j>=0 ){
            if(matrix[i][j]==k){
                return true;
            }else if(k>matrix[i][j]){
                i++;
            }else{
                j--;
            }
        }
        return false;
    }
};