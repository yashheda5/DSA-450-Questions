class Solution {
public:
    void reverseString(vector<char>& str) {
         for(int i=0;i<str.size()/2;i++){
            swap(str[i],str[str.size()-i-1]);
        }
    }
};