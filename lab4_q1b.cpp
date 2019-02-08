#include<iostream>
#include "LLforQueue.cpp"

using namespace std;

class QueueLL
{
   public:
    Node *top;
    LinkedList l2;
    QueueLL()
    {
        top=l2.head;
    }
    //Pushes on top
    void enqueue(int value)
    {
        l2.insertAt(1,value);
        //top = new_head
    }

    //pops the top
    void dequeue()
    {
        if(l2.head==NULL)
            cout<<"QUEUE IS ALREADY EMPTY , WHAT MORE DO YOU WANT TO DELETE ?"<<endl;
        else
        {
        if(l2.head->next==NULL)
        {
            l2.deletAt(1);
        }
        else
        {
        l2.delet();
        }
        //top = new_head
        }
    }

    void topDisplay()
    {
        if(l2.head==NULL)
            cout<<"QUEUE IS EMPTY";
        else
        {
         cout<<l2.head->data;
        }
        cout<<endl;
    }
    int size()
    {
        return l2.countItems();

    }
    int isEmpty()
    {
        if(l2.countItems()==0)
            return 1;
        else
            return 0;
    }
    void display()
    {
        if(l2.head==NULL)
            cout<<"QUEUE IS EMPTY"<<endl;
        else
            l2.display();
    }
};

int main()
{
    QueueLL q1;
    for(int i=0;i<=5;i++)
    {
        q1.enqueue(i);
    }
    q1.display();
    q1.dequeue();
    q1.display();
    cout<<q1.size();
    cout<<endl;
    cout<<q1.isEmpty()<<endl;
    q1.topDisplay();
    q1.dequeue();
    q1.display();
    q1.dequeue();
    q1.display();
    q1.dequeue();
    q1.display();
    q1.dequeue();
    q1.display();
    q1.dequeue();
    q1.display();
    q1.dequeue();
    q1.display();
    q1.dequeue();


    q1.topDisplay();
    cout<<q1.size()<<endl;
    cout<<q1.isEmpty()<<endl;




return 0;
}

