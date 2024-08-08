class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(!root) return NULL;
        TreeNode* pointer =root;

        while(pointer){
            if(pointer->val == val){
                return pointer;
            }else if(val >pointer->val ){
                pointer=pointer->right;
            }else{
                pointer=pointer->left;
            }
        }
        return NULL;
    }
};