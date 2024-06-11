#include <bits/stdc++.h>
using namespace std;
class Solution{
public:	
	
	
	int isPalindrome(string s)
	{
	    // Your code goes here
	    
	    for(int i=0;i<s.length()/2;i++){
	        if(s[i] != s[s.length()-1-i]){
	            return 0;
	        }
	    }
	    return 1;
	}

};