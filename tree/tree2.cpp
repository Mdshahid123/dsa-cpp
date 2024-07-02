#include<iostream>
using namespace std;

class node
{
    public:
    int data;
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
{
     int x;
     cin>>x;
     if(x==-1)
     {
        return NULL;
     }
     node *temp=new node(x);
     cout<<"enter the value for left node of "<<x<<":";
     temp->left=binary_tree();
     cout<<"<enter the value for right node of "<<x<<":";
     temp->right=binary_tree();
     return temp;


}
// pre_order traversel
void pre_order(node *temp)
{   if(temp==NULL)
    return;
    cout<<temp-> data<<" ";
    pre_order(temp->left);
    pre_order(temp->right);
}
void in_order(node *temp)
{   if(temp==NULL)
    return;
    in_order(temp->left);
    cout<<temp->data<<" ";
    in_order(temp->right);
}
void post_order(node *temp)
{   if(temp==NULL)
    return;
    post_order(temp->left);
    post_order(temp->right);
    cout<<temp->data<<" ";
}



int main()
{  
    cout<<"enter the value of root node:";
    node* root=binary_tree();
    cout<<"preorder traversal:";
    pre_order(root);
    cout<<endl;
    cout<<"inorder traversal:";
    in_order(root);
    cout<<endl;
    cout<<"post order traversal:";
    post_order(root);

}