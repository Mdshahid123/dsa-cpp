// insertion of node at beg
// define a node
#include<iostream>
using namespace std; 
class node
{   public:
    int data;
    node *next=NULL;
    node(int v)
    {
       data=v;
    }
};
class SLL
{   private:
    node *head=NULL;
    public:
    //beg
    void insert_beg(int v)
    {
        //linked list doesnot exist
        if(head==NULL)
        {
            head=new node(v);
        }
        // linked list exist wheather it is one  or more than one 
       else
       {
           node *newnode=new node(v);
           newnode->next=head;
           head=newnode;

       }

    }

    // end
    void insert_end(int v)
    {
         // checking linked list does not exist
         if(head==NULL)
         {
            head=new node(v);
         }
         else
         {
            node *temp;
            temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=new node(v);
         }
    }
    //print the value of linked list
   void  print()
   {
       node *temp;
       temp=head;
       while(temp!=NULL)
       {
         cout<<temp->data<<"->";
         temp=temp->next;
       }
       cout<<"NULL";
   }

};
int main()
{
    SLL obj;
    obj.insert_end(6);
    obj.insert_end(7);
    obj.insert_end(8);
    obj.insert_end(9);
    obj.insert_end(10);
    obj.print();
    return 0;
}
