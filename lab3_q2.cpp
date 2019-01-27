#include<iostream>
using namespace std;

class Node
{
public:
    //data
    int data;
    //pointer to the next node
    Node *next;
    //constructor
    Node(int value)
    {
        next =  NULL;
        data = value;
    }
};

class cll
{
public:
    Node *head;
    cll()
    {
        head=NULL;
    }
    //Insert an element in the linked list
    void insert(int value)
    {
        //create a new node
        Node *temp = new Node(value);
        //check whether list is empty or not
        if(head==NULL)      //If empty
        {
            head=temp;
        }
        else          //If not empty
        {
            Node *current = head;
             while(current->next != head)
                {
                    current = current->next;
                }
            current->next = temp;
        }
        temp->next = head;
    }
    // Displaying the linked list.
    void display(){
        Node * current = head;
        if(current == NULL) {
            cout << "No elements " << endl;
            return;
        }
        while(current->next != head){ // Stopping at head
            cout << current -> data << "->";
            current = current -> next;
        }
        // Printing the last element
        cout << current -> data ;
        cout << endl;
    }
    void InsertAt(int value, int pos){
        //Ensuring that the position of input is available
        if(countItems()<(pos-1))
        {
            cout<<"Linked List does not have that many elements"<<endl;
        }
        else
        {
        // Reach the place before position
        Node * current = head;
        int i =1;
        while(i < pos-1){
            i++;
            current = current->next;
        }
        // Creating a node
        Node * temp = new Node(value);

        // Moving ptrs to the required position
        temp->next = current->next;
        current->next = temp;
        }
    }
    void DeleteAt(int pos){
        //condition to check if the position to be deleted is available or not
        if(countItems()<pos){
            cout<<"Element does not exist"<<endl;
        }
        else
        {
            //deleting at the position 1
            if(pos==1){
                Node * current = head;
                Node * current1 = head;
                //moving the ptrs
                head= current->next;
                while((current1->next)->next != head){
                    current1 = current1->next;
                }
                current1 -> next = head;
                delete current;
            }
            else
            {
            //finding element to delete at the specific position inputed
            Node * current = head;
            int i =1;
            while(i < pos){
                i++;
                current = current->next;
            }
            //shifting pointer to the before Node
            //finding element before delete element
            Node * current1 = head;
            int j =1;
            while(j < pos-1){
                j++;
                current1 = current1->next;
            }
            //shifting
            current1->next = current->next;
            //delete current
            delete current;
            }
        }

    }
    void Delet(){
        // Deletes the last element.
        Node * current= head;
        Node * current1;
        while((current->next)->next != head){
            current = current->next;
        }
        //adding one more ptr to point to the last element of the linkedlist
        current1=current->next;
        current->next=head;
        current1->next=NULL;
        //deleting the last element
        delete current1;
    }
    int  countItems(){
        int i=1;
        Node * current= head;
        while(current->next != head)
        {
            i++;
            current=current->next;
        }

        return i;
    }

};

int main(){
    cll cill;
    //inserting the elements 1 to 10
    for(int i= 1; i < 11; i++){
       cill.insert(i);
    }
    cill.display();
    cill.InsertAt(4,6);
    cill.display();
    cill.Delet();
    cill.display();
    cill.DeleteAt(6);
    cill.display();
    cill.DeleteAt(3);
    cill.display();
    cill.InsertAt(3,7);
    cill.display();

    cout<<"The no. of elements in the Circular Linked list is : "<<cill.countItems();
}

