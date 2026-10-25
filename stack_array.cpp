#include<iostream>
using namespace std;
#define MAX 5
class stack
{
    private:
    int a[MAX];
    int top;
    public:
    stack()
    {
        top=-1;
    }
    int empty()
    {
        if(top==-1)
        return(1);
        else
        return(0);
    }
    int full()
    {
        if(top==MAX-1)
        return(1);
        else
        return(0);
    }
    void push(int x)
    {
        top++;
        a[top]=x;
    }
    int pop()
    {
        int x=a[top];
        top--;
        return(x);
    }
    int peek()
    {
        return(a[top]);
    }
    void display()
    {
        for(int i=top;i>=0;i--)
        cout<<a[i]<<endl;
    }

};
int main()
{
    stack s;
    if(s.full())
    {
        cout<<"stack full";
    }
    else
    {
        s.push(10);
    }
    cout<<"stack contents after a push operation: ";
    s.display();
    
    if(s.full())
    {
        cout<<"stack full";
    }
    else
    {
        s.push(20);
    }
    cout<<"stack contents after a push operation: ";
    s.display();

    if(s.full())
    {
        cout<<"stack full";
    }
    else
    {
        s.push(30);
    }
    cout<<"stack contents after a push operation: ";
    s.display();

    if(s.full())
    {
        cout<<"stack full";
    }
    else
    {
        s.push(40);
    }
    cout<<"stack contents after a push operation: ";
    s.display();

    if(s.full())
    {
        cout<<"stack full";
    }
    else
    {
        s.push(50);
    }
    cout<<"stack contents after a push operation: ";
    s.display();

    if(s.full())
    {
        cout<<"stack full";
    }
    else
    {
        s.push(60);
    }
    cout<<"stack contents after a push operation: ";
    s.display();

    if(s.empty())
    {
        cout<<"stack is empty";
    }
    else
    {
        cout<<"poped out element is"<<s.pop();
    }
    cout<<"stack contents after pop operation: ";
    s.display();

     if(s.empty())
    {
        cout<<"stack is empty";
    }
    else
    {
        cout<<"poped out element is"<<s.pop();
    }
    cout<<"stack contents after pop operation: ";
    s.display();

     if(s.empty())
    {
        cout<<"stack is empty";
    }
    else
    {
        cout<<"poped out element is"<<s.pop();
    }
    cout<<"stack contents after pop operation: ";
    s.display();

     if(s.empty())
    {
        cout<<"stack is empty";
    }
    else
    {
        cout<<"poped out element is"<<s.pop();
    }
    cout<<"stack contents after pop operation: ";
    s.display();

     if(s.empty())
    {
        cout<<"stack is empty";
    }
    else
    {
        cout<<"poped out element is"<<s.pop();
    }
    cout<<"stack contents after pop operation: ";
    s.display();

     if(s.empty())
    {
        cout<<"stack is empty";
    }
    else
    {
        cout<<"poped out element is"<<s.pop();
    }
    cout<<"stack contents after pop operation: ";
    s.display();

     if(s.empty())
    {
        cout<<"stack is empty";
    }
    else
    {
        cout<<"poped out element is"<<s.pop();
    }
    cout<<"stack contents after pop operation: ";
    s.display();

    return(0);
}

/*PS D:\Piyush Hase> g++ stack_array.cpp -o out
PS D:\Piyush Hase> ./out                     
stack contents after a push operation: 10
stack contents after a push operation: 20
10
stack contents after a push operation: 30
20
10
stack contents after a push operation: 40
30
20
10
stack contents after a push operation: 50
40
30
20
10
stack fullstack contents after a push operation: 50
40
30
20
10
poped out element is50stack contents after pop operation: 40
30
20
10
poped out element is40stack contents after pop operation: 30
20
10
poped out element is30stack contents after pop operation: 20
10
poped out element is20stack contents after pop operation: 10
poped out element is10stack contents after pop operation: stack is emptystack contents after pop operation: stack is emptystack contents after pop operation: 
PS D:\Piyush Hase> */
