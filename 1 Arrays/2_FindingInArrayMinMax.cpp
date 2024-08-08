class Solution {
  public:
    pair<long long, long long> getMinMax(vector<long long int> arr) {
        // code here
        long long mini= LLONG_MAX;
        long long maxi=LLONG_MIN;
        for(auto i:arr){
            if(i>maxi) maxi=i;
            if(i<mini) mini=i;
        }
        return make_pair(mini,maxi);
    }
};