#include<iostream>
#include<queue>
//difining a data type for each node of  tree
using namespace std;
class node
{
    public:
    int data ;
    node *left;
    node *right;
    node(int v)
    {
       data=v;
       left=NULL;
       right=NULL;

    }
};
//creating a tree
node *binary_tree()
{
     int rootv;
     cout<<"enter the value for root node:";
     cin>>rootv;
     node *root=NULL;
     if(rootv==-1)
     return root; 
    else
    {
      root= new node(rootv);
       queue<node*>q;
       q.push(root);
       while(!q.empty())
      {
          int leftv;
          cout<<"enter the data for left node of" <<q.front()->data<<":";
          cin>>leftv;
          if(leftv!=-1)
         {
           q.front()->left=new node(leftv);
           q.push(q.front()->left);

         }
         int rightv;
          cout<<"entr the value for right node of"<<q.front()->data<<":";
          cin>>rightv;
          if(rightv!=-1)
         {
           q.front()->right=new node(rightv);
           q.push(q.front()->right);

         }
         q.pop();

      }

    }
       
   return root;
}
int main()
{   node *root;
    root=binary_tree();
}