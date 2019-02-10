//QUEUE USING ARRAY

#include<iostream>
using namespace std;

class QueueArr        //  Class  for tack using array
{
    int q[1000];        //Declaring am array
    int front, end;
public:
    QueueArr()
    {
        front = -1;
        end=-1;           //Initializing top
    }

    //function to insert an element
    void enqueue(int value)
    {
        if (end>999)
        {
            cout<<"QUEUE FULL !!!"<<endl;
            //front = end = -1;
        }
        else
            q[++end]=value;
    }


    //function to delete element
    void dequeue()
    {
        if (front == end)
        {
            cout<<"QUEUE IS ALREDY EMPTY !!!"<<endl;
        }
        else
        {
            q[++front];
        }
    }

    //function to check if the queue is empty or not
    bool isEmpty()
    {
        if(front == end)
        {
            return true;
        }
        else
            return false;
    }

    //function to show the number of elements
    void size()
    {
        cout<<"Size of stack : "<<end<<endl;
    }

    //function to display the stack
    void display()
    {
        if(front==end)
        {
            return;
        }
        else
        {
            for(int i=front+1;i<=end;i++)
            {
                cout<<q[i]<<"->";
            }
            cout<<endl;
        }
    }

};


int main()
{

     QueueArr s1;
     for(int i=0;i<2;i++)
     {
            s1.enqueue(i);
     }
     s1.display();
     cout<<endl;
     s1.dequeue();
     s1.display();
     s1.enqueue(5);
     s1.display();
     cout<<endl;
     //if more elements are deleted than present
     s1.dequeue();
     s1.display();
     cout<<endl;
     cout<<s1.isEmpty();
     cout<<endl;
     s1.size();
     cout<<endl;
}

