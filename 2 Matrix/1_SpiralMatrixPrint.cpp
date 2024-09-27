



class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int rs=0,re=matrix.size()-1,cs=0,ce=matrix[0].size()-1;
    vector<int>arr;
    while(rs<=re && cs<=ce){
        if(rs<=re && cs<=ce){
            for(int i=cs;i<=ce;i++){
                arr.push_back(matrix[rs][i]);
            }
            rs++;
        }
        if(rs<=re && cs<=ce){
            for(int i=rs;i<=re;i++){
                arr.push_back(matrix[i][ce]);
            }
            ce--;
        }
        if(rs<=re && cs<=ce){
            for(int i=ce;i>=cs;i--){
                arr.push_back(matrix[re][i]);
            }
            re--;
        }
        if(rs<=re && cs<=ce){
            for(int i=re;i>=rs;i--){
                arr.push_back(matrix[i][cs]);
            }
            cs++;
        }
    }
    return arr;
    }
};