class twoStacks
{
    public:

    int size;
    int *arr;
    int top1, top2;
    
    twoStacks()
    {
        size=1000;
        arr=new int[1000];
        top1=-1;
        top2 =size;
        
    }
 
    //Function to push an integer into the stack1.
    void push1(int x)
    {
        top1++;
        if(top1<top2 ){
            arr[top1]=x;
        }
        
    }
    
    //Function to push an integer into the stack2.
    void push2(int x)
    {
        top2--;
        if(top2>top1 ){
            arr[top2]=x;
        }
       
    }
    
    //Function to remove an element from top of the stack1.
    int pop1()
    {
        if(top1==-1 ){
            return -1;
        }
        int x=arr[top1--];
        return x;
        
    }
    
    //Function to remove an element from top of the stack2.
    int pop2()
    {
        if(top2==size ){
            return -1;
        }
        int x=arr[top2++];
        return x;
       
    }
};