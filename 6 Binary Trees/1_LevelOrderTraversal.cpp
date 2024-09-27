/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>arr;
         if (!root) return arr;
        vector<int>brr;
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);

        while(! q.empty()){
            TreeNode* top=q.front();
            q.pop();
            if(top ==NULL ){
                arr.push_back(brr);
                brr.clear();
                 if(!q.empty()){
                     q.push(NULL);
                 }
            }else{
                brr.push_back(top->val);
                if(top->left){
                    q.push(top->left);
                }
                if(top->right){
                    q.push(top->right);
                }
            }
        }
        return arr;
    }
};