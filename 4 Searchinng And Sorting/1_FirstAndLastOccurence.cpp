

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        return {lb(nums,target,0,nums.size()-1,-1),ub(nums,target,0,nums.size()-1,-1)};
    }
    int lb(vector<int>& nums, int k,int s, int e ,int c ){
        if(s>e){
            return c;
        }
        int mid =s+(e-s)/2;
        if(nums[mid]==k){
            c=mid;
          return  lb(nums,k,s,mid-1,c);
        }else if(k>nums[mid]){
            return lb(nums,k,mid+1,e,c);
          
        }else{
            return lb(nums,k,s,mid-1,c);
        }
    }
    int ub(vector<int>& nums, int k,int s, int e ,int c ){
        if(s>e){
            return c;
        }
        int mid =s+(e-s)/2;
        if(nums[mid]==k){
            c=mid;
           return ub(nums,k,mid+1,e,c);
        }else if(k>nums[mid]){
              return ub(nums,k,mid+1,e,c);
         
        }else{
             return ub(nums,k,s,mid-1,c);
        }
    }
};