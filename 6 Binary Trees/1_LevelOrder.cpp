//printing in different lines
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> arr;
        if (!root) return arr; 
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        vector<int>brr;
        while(!q.empty()){
            TreeNode* top=q.front();
            q.pop();
            if(top == NULL){
                arr.push_back(brr);
                brr.clear();
                  if (!q.empty()) {
                    q.push(NULL); // Only push another NULL marker if there are more nodes to process
                }
            }else{
                brr.push_back(top->val);
                 TreeNode* left=top->left;
            TreeNode* right=top->right;

            if(left){
                q.push(left);
            }

            if(right){
                q.push(right);
            }
            }
        }
        return arr;
    }
};

//one alltogether output 
class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* root)
    {
      //Your code here
      queue<Node*>q;
      vector<int>arr;
      if(!root) return arr;
      q.push(root);
      while(!q.empty()){
          Node* top =q.front();
          q.pop();
          arr.push_back(top->data);
          if(top->left){
              q.push(top->left);
          }
          if(top->right){
              q.push(top->right);
          }
      }
      return arr;
    }
};