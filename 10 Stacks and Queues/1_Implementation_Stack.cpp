// GFG
void MyStack ::push(int x) {
    // Your Code
    if(1000 -top > 0 ){
        arr[++top]=x;
    }
}

// Function to remove an item from top of the stack.
int MyStack ::pop() {
    // Your Code
    if(top>=0){
        int temp=arr[top];
        arr[top]=NULL;
        top--;
        return temp;
    }
}

// LEETCODE
class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>ans;
        int i=0,j=1;
        while(i<target.size() && j<=n){
            ans.push_back("Push");
            if(j==target[i]){
               i++;
            }else{
                ans.push_back("Pop");
            }
             j++;
        }
        return ans;
    }
};