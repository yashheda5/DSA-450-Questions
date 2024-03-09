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
    if(10000-top >0){
        top++;
        arr[top]=x;
        
    }
}

//Function to remove an item from top of the stack.
int MyStack :: pop()
{
    // Your Code
   if(top != -1){
        int x=arr[top];
    arr[top]=-1;
    top--;
    return x;
   }
   return -1;
}