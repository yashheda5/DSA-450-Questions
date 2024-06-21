#include <bits/stdc++.h>
using namespace std;
class Solution {
public:

    string find(string str){
        if (str.size()==0){
            return "1";
        }
        string ans="";
        for(int i=0;i<str.size();i++){
            int count =1;
            while(i<str.size()-1 && str[i]==str[i+1]){
                count++;
                
            }
            ans +=to_string(count);
            ans+=str[i];
        }
        return ans;
    }
    string countAndSay(int n) {
      string ans="";
      while(n--){
        ans=find(ans);
      }
      return ans ;
    }
};