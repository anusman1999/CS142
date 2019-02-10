//STACK USING ARRAY

#include<iostream>
using namespace std;

class StackArr        //  Class  for tack using array
{
    int stak[1000];        //Declaring am array
    int top;
public:
    StackArr()
    {
        top = -1;           //Initializing top
    }

    //function to insert an element at top
    void push(int value)
    {
        if (top>999)
        {
            cout<<"STACK OVERFLOW"<<endl;
        }
        stak[++top]=value;
    }


    //function to delete element from top
    void pop()
    {
        if (top<0)
        {
            cout<<"STACK UNDERFLOW"<<endl;
            return;
        }
        else
        {
            stak[top--];
        }
    }

    //function to check if the stack is empty or not
    bool isEmpty()
    {
        if(top<0)
        {
            return true;
        }
        else
            return false;
    }

    //function to show the number of elements
    void size()
    {
        cout<<"Size of stack : "<<top+1<<endl;
    }

    //function to display the top element
    void topElement()
    {
    if(top+1==0)
        {
            cout<<"STACK IS EMPTY"<<endl;
        }
    else
        {
            cout<<"Top Element : "<<stak[top]<<endl;
        }
    }
    //function to display the stack
    void display()
    {
        if(top<0)
            return;
        else
        {
            for(int i=top;i>=0;i--)
                cout<<stak[i]<<"->";
        }
    }

};


int main()
{

     StackArr s1;
     for(int i=0;i<2;i++)
     {
            s1.push(i);
     }
     s1.display();
     cout<<endl;
     s1.pop();
     s1.display();
     s1.pop();
     s1.display();
     cout<<endl;
     //if more elements are deleted than present
     s1.pop();
     s1.display();
     cout<<endl;
     cout<<s1.isEmpty();
     cout<<endl;
     s1.size();
     cout<<endl;
     s1.topElement();
}

