#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int* findps(int arr[], int m) {
        stack<int> s;
        s.push(-1);
        int* brr = new int[m];
        for (int i = 0; i < m; i++) {
            int curr = arr[i];
            while (s.top() != -1 && arr[s.top()] >= curr) {
                s.pop();
            }
            brr[i] = s.top();
            s.push(i);
        }
        return brr;
    }

    int* findns(int arr[], int m) {
        stack<int> s;
        s.push(-1);
        int* brr = new int[m];
        for (int i = m - 1; i >= 0; i--) {
            int curr = arr[i];
            while (s.top() != -1 && arr[s.top()] >= curr) {
                s.pop();
            }
            brr[i] = s.top();
            s.push(i);
        }
        return brr;
    }

    int findMax(int arr[], int m) {
        int* ns = findns(arr, m);
        int* ps = findps(arr, m);
        int maxi = INT_MIN;
        
        for (int i = 0; i < m; i++) {
            int h = arr[i];
            int w = (ns[i] == -1 ? m : ns[i]) - ps[i] - 1;
            maxi = max(maxi, h * w);
        }
        
        delete[] ns;
        delete[] ps;
        
        return maxi;
    }

   
    // int maxArea(int M[][], int n, int m) {
    //     int result = 0;
    //     int arr[m] = {0};
        
    //     for (int i = 0; i < n; i++) {
    //         for (int j = 0; j < m; j++) {
    //             if (M[i][j] == 0) {
    //                 arr[j] = 0;
    //             } else {
    //                 arr[j] += M[i][j];
    //             }
    //         }
    //         result = max(result, findMax(arr, m));
    //     }
    //     return result;
    // }
};

