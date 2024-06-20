#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        // code here
        vector<int>demo;
        for(int i=0;i<Mat.size();i++){
            for(int j=0;j<Mat[i].size();j++){
                demo.push_back(Mat[i][j]);
            }
        }
        sort(demo.begin(),demo.end());
        int c=0;
        for(int i=0;i<Mat.size();i++){
            for(int j=0;j<Mat[i].size();j++){
                Mat[i][j]=demo[c++];
            }
        }
        return Mat;
    }
};