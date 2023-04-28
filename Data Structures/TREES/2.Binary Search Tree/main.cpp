#include<bits/stdc++.h>

using namespace std;

class node
{ 
    public:
    int data;
    node* right;
    node* left;
    node(int x)
    {
        data=x;
        right=NULL;
        left=NULL;
    }
    bool search(node* root,int x)
    {
        if(root==NULL)
        return false;
        if(root->data==x)
        return true;
        if(root->data<x)
    return search(root->right,x);
    else 
    return search(root->left,x);
    }
    node* insert(node* root,int x)
    {
        if(root==NULL)
        {
            node* temp=new node(x);
            return temp;
        }
        if(root->data==x)
        return root;
        else if(root->data>x)
        root->left=insert(root->left,x);
        else
        root->right=insert(root->right,x);
        return root;
    }
    int min_val(node* root)
{
    if(root->left==NULL)
    return root->data;
    return min_val(root->left);
}
int max_val(node* root)
{
    if(root->right==NULL)
    return root->data;
    return max_val(root->right);
}
 node* delete_node(node* root,int x)
 {
    if(root==NULL)
    return root;
    if(root->data<x)
    root->right=delete_node(root->right,x);
    if(root->data>x)
    root->left=delete_node(root->left,x);
    if(root->data==x)
    {
        if(root->right==NULL&&root->left==NULL)
        {
            delete root;
            return NULL;
        }
        if(root->left!=NULL)
        {
            root->data=max_val(root->left);
            root->left=delete_node(root->left,root->data);
            return root;
        }
        if(root->right!=NULL)
        {
            root->data=min_val(root->right);
            root->right=delete_node(root->right,root->data);
            return root;
        }

    }
    return root;
      
}
};








void preorder(node* root)
{
   
}
void postorder(node* root)
{
    if(root==0)
    {
        return;
         }
         postorder(root->left);
         postorder(root->right);
         cout<<root->data<<" ";
}
void inorder(node* root)
{
    if(root==0)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int successor(node* root,int data)
{ 
    node* target=search(root,data);
    if(target==0)
   {
       return -1;
   }
   else if(target->right!=0)
   {
       return min(target->right);
   }
   else if(target->right==0)
   {
       node* temp=root;
       node* prev=0;
       while(temp!=0)
       {  if(temp==0||temp==target)
         {
             return prev->data;
         }
         else if(temp->data>data)
         {   prev=temp;
             temp=temp->left;
         }
         else if(temp->data<data)
         {
             temp=temp->right;
    }}
   }
}
int predecessor(node* root,int data)
{ 
    node* target=search(root,data);
    if(target==0)
    {
        return -1;
    }
    else if(target->left!=0)
    {
        return max(target->left);
    }
    else if(target->left==0)
    {
        node* temp=root;
        node* prev=0;
        while(temp!=0)
        {
            if(temp==0||temp==target)
            {
                return prev->data;
            }
            if(temp->data>data)
            {
                temp=temp->left;
            }
            if(temp->data<data)
            {
                prev=temp;
                temp=temp->right;
            }
        }
    }
}
int main()
{
    node* root=0;
    int n,x;
    do
    { cout<<"What operation you want to perform\n1-Insert\n2-Delete\n3-search\n4-Minimum element\n5-Maximum element\n6-Preorder\n7-Postorder\n8-Inorder\n9-Successor\n10-Predecessor\n0-exit\n";
       cin>>n;
       switch (n)
       {
       case 1:cout<<"Enter the data to be inserted\n";
       cin>>x;
       root=insert(root,x);
       break;
       case 2:cout<<"Enter the data to be deleted\n";
       cin>>x;
       root=delete_node(root,x);
       break;
       case 3:cout<<"Enter the data to be searched\n";
       cin>>x;
       node* temp;
       temp=search(root,x);
       if(temp!=0)
       {
           cout<<"The element:"<<x<<" is found at address:"<<temp<<endl;
       }
       else
       {
           cout<<"The element not found\n";
       }
       break;
       case 4: x=min(root);
       cout<<"The minimum element:"<<x<<endl;
       break;
       case 5:x=max(root);
       cout<<"The maximum element:"<<x<<endl;
       break;
       case 6: preorder(root);
        cout<<endl;
        break;
        case 7: postorder(root);
        cout<<endl;
        break;
        case 8: inorder(root);
        cout<<endl;
        break;
        case 9: cout<<"Enter the element whose successor has to be found\n";
        cin>>x;
        x=successor(root,x);
        cout<<"The successor is:"<<x<<endl;
        break;
        case 10:cout<<"Enter the element whose predecessor has to be found\n";
        cin>>x;
        x=predecessor(root,x);
        cout<<"The predecessor is:"<<x<<endl;
        break;
       }
       
    } while (n);
    
}