#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
        int max_row_index = -1;
        int max_1s_count = 0;
        
        for(int i = 0; i < n; i++){
            int low = 0, high = m - 1;
            
            // Modified binary search condition to low <= high
            while(low <= high){
                int mid = low + (high - low) / 2;
                if(arr[i][mid] == 1){
                    // Corrected assignment to high = mid - 1
                    high = mid - 1;
                } else {
                    // Corrected condition to arr[i][mid] < 1
                    low = mid + 1;
                }
            }
            
            // Calculate number of 1s in the row as m - low
            int num_of_1s = m - low;
            if(num_of_1s > max_1s_count){
                max_1s_count = num_of_1s;
                max_row_index = i;
            }
        }
        
        return max_row_index;
    }
};