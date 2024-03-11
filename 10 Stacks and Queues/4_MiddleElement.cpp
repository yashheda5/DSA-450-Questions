#include <bits/stdc++.h>
using namespace std;
void findMid(stack<int>& s,int& count){
    if(s.empty()){
        cout<<"No element in the stack"<<endl;
        return ;
    }
if(count ==0){
    cout<< s.top();
}
int temp = s.top();
s.pop();
count--;
findMid(s,count);
s.push(temp);
}
int main(){
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    int totalsize=s.size()/2;
    findMid(s,totalsize);
}