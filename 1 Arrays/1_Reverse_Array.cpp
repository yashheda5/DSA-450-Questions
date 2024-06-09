#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    string reverseWord(string str)
    {
        // Your code goes here
        for(int i=0;i<str.length()/2;i++){
            swap(str[i],str[str.length() -1-i]);
        }
        return str;
    }
};
