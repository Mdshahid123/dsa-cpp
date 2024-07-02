#include<iostream>
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
 node *binary_tree()
 {
    int x;
    cin>>x;
    if(x==-1)
    return NULL;
    node *temp=NULL;
    temp= new node(x);
    temp->left=binary_tree();
    temp->right=binary_tree();
    return temp;
 }
 int main()
 {  cout<<"enter the value of root node:";
    node *root;
    root=binary_tree();


 }