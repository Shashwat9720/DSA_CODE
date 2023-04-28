#include<bits/stdc++.h>

using namespace std;

class node
{  public:
    int data;
    node* left;
    node* right;
    node(int x)
    {
        data=x;
        right=NULL;
        left=NULL;
    }
};

void preorder(node* temp)
{
    if(temp==0)
    {
        return;
    }
    cout<<temp->data<<" ";
    preorder(temp->left);
    preorder(temp->right);
}
void inorder(node* root)
{
    if(root==NULL)
    return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(node* temp)
{
     if(temp==0)
    {
        return;
    }
    postorder(temp->left);
    postorder(temp->right);
    cout<<temp->data<<" ";
    
}
void level_order(node* temp)
{
    queue<node*>q;
    q.push(temp);
    while(!q.empty())
    {
        node* curr=q.front();
        q.pop();
        if(curr->left!=0)
        {
            q.push(curr->left);
        }
        if(curr->right!=0)
        {
            q.push(curr->right);
        }
        cout<<curr->data<<" ";
    }
}
node* create( )
{    int x,n;
node* New=new node();
    cout<<"Enter the data to be inserted to the tree\n";
    cin>>x;
    New->data=x;
    cout<<"Do you want to insert a node in left of current node\n1-Yes\n0-No\n";
    cin>>n;
    if(n)
    New->left=create();
    else
    New->left=0;
    cout<<"Do you want to insert a node in right of current node\n1-Yes\n0-No\n";
    cin>>n;
    if(n)
    New->right=create();
    else
    New->right=0;
    return New;

}

int main()
{   int n;
    root=create();
    cout<<"What kind of traversal you want to perform\n1-Pre order\n2-Post order\n3-In order\n4-Level order\n0-Exit\n";
    cin>>n;
    do
    { switch (n)
    {
    case 1:preorder(root);
    cout<<endl;
        break;
    case 2:postorder(root);
    cout<<endl;
    break;
    case 3:inorder(root);
    cout<<endl;
    break;
    case 4:level_order(root);
    break;
    cout<<endl;}
     cout<<"What kind of traversal you want to perform\n1-Pre order\n2-Post order\n3-In order\n4-Level order\n0-Exit\n";
    cin>>n;
        
    } while (n);
    
}