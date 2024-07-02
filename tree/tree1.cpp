//creating a binary tree by making a node at each level;
//so we have to use queue data structure

#include<iostream>
#include<queue>
using namespace std;

//defining a data type for node of a tree
class node
{
    public:
    int data ;
    node *right;
    node *left;
    node(int v)
    {
        data=v;
        right=NULL;
        left=NULL;

    }
};
node* binary_tree()
{   int x;
    cout<<"enter the value for root node:";
    cin>>x;
    node* root=NULL;
    if(x==-1)
    return root;
    root=new node(x);
    queue<node*>q;
    q.push(root);
    while(!q.empty())
    {
        int left;
    cout<<"enter the value for left node of"<<q.front()->data<<":";
    cin>>left;
    if(left!=-1)
    {
        q.front()->left=new node(left);
        q.push(q.front()->left);
    }
    int right;
    cout<<"enter the value for right node of"<<q.front()->data<<":";
    cin>>right;
    if(right!=-1)
    {
        q.front()->right=new node(right);
        q.push(q.front()->right);
    }
       q.pop();


    }

    
   return root;

    

}
int main()
{
    node* root;
    root=binary_tree();
}