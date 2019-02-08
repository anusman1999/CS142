#include<iostream>
#include "LLforStack.cpp"

using namespace std;



class StackLL
{
public:
    Node *top;
    LinkedList l1;
    StackLL()
    {
        top=l1.head;
    }
    //Pushes on top
    void push(int value)
    {
        l1.insertAt(1,value);
        //top = new_head
    }

    //pops the top
    void pop()
    {
        if(l1.countItems()==0)
        {
            cout<<"STACK IS ALREADY EMPTY"<<endl;
        }
        else
        {
            l1.deletAt(1);
        }
        //top = new_head
    }

    bool isEmpty()
    {
        if(l1.head->data == NULL)
            return true;
        else
            return false;
    }

    int size()
    {
        return l1.countItems();
    }

    void topDisplay()
    {
        if(l1.countItems()==0)
        {
            cout<<"STACK IS EMPTY"<<endl;
        }
        else
        {
        cout<<l1.head->data;
        }
    }

    void display()
    {
        if(l1.countItems()==0)
        {
            cout<<"STACK IS EMPTY"<<endl;
        }
        else
        {
        l1.display();
        }
    }


};

int main()
{
    StackLL s1;

    for(int i=5;i>=0;i--)
    {
        s1.push(i);
    }
    s1.display();
    s1.pop();
    s1.display();
    cout<<s1.size()<<endl;
    cout<<s1.isEmpty()<<endl;
    s1.topDisplay();
    cout<<endl;
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.display();
    s1.topDisplay();
    return 0;
}
