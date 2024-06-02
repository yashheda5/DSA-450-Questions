 #include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){
        int idx = -1;
        // Find the first decreasing element from the end
        for (int i = N - 1; i > 0; i--) {
            if (arr[i] > arr[i - 1]) {
                idx = i - 1;
                break;
            }
        }
      
        // If the entire array is in descending order, reverse it to get the smallest permutation
        if (idx == -1) {
            reverse(arr.begin(), arr.end());
        } else {
            // Find the element just larger than arr[idx] to swap with
            int prev = idx + 1;
            for (int i = idx + 1; i < N; i++) {
                if (arr[i] > arr[idx] && arr[i] <= arr[prev]) {
                    prev = i;
                }
            }
            // Swap the elements
            swap(arr[idx], arr[prev]);
            // Reverse the suffix starting at idx + 1
            reverse(arr.begin() + idx + 1, arr.end());
        }
        return arr;
    }
};