#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int setBits(int N) {
        // Write Your Code here
        int c;
        while(N >0){
            if(N & 1 ==1){
                c++;
            }
            N=N>>1;
        }
        return c;
    }
};