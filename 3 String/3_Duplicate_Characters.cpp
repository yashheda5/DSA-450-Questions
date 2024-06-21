#include <bits/stdc++.h>
using namespace std;
class Solution
{
  public:
    char firstRep (string str)
    {
        //code here.
        unordered_map<char,int>count;
    for(int i=0; i<str.size();i++){
        count[str[i]]++;
    }
    char ch='#';
    for(auto it:str){
        if(count[it]>1){
            ch=it;
            break;
        }
    }
    return ch;
    }
};
