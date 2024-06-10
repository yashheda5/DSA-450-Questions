#include <bits/stdc++.h>
using namespace std;
class MyStack
{
private:
    int arr[1000];
    int top;
public:
    MyStack(){top=-1;}
    int pop();
    void push(int);
};


void MyStack :: push(int x)
{
    // Your Code
    
   if(1000-top >0){
        top++;
    arr[top]=x;
   }
}

//Function to remove an item from top of the stack.
int MyStack :: pop()
{
    // Your Code  
    
  if(top != -1){
        int temp=arr[top];
    arr[top]=NULL;
    top--;
    return temp;
  }
  return -1;
}