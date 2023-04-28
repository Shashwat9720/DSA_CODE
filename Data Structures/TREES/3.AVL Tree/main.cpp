#include<bits/stdc++.h>

using namespace std;

class Node
{  public:
    int data;
Node* left;
Node* right;
Node(int x)
{ data=x;
 right=0;
 left=0;

}
};
int min(Node* root)
{
    if(root->left==0)
    return root->data;
    return min(root->left);
}
int getHeight(Node* root)
{    int h=1;
    if(root==0)
    {return 0;}
    
    h+=max(getHeight(root->left),getHeight(root->right));
    return h;

}
int Balanced_Factor(Node* root)
{   if(root==0)
    return 0;
    return getHeight(root->left)-getHeight(root->right);
}
Node* left_rotate(Node* root)
{
    Node* RGT=root->right;
    Node* LFT=RGT->left;
    RGT->left=root;
    root->right=LFT;
    return RGT;
}
Node* right_rotate(Node* root)
{
    Node* LFT=root->left;
    Node* RGT=LFT->right;
    LFT->right=root;
    root->left=RGT;
    return LFT;
}
Node* insert(Node* root,int data)
{ if(root==0)
  {
      root=new Node(data);
  }
  if(root->data<data)
  {
      root->right=insert(root->right,data);
  }
  else if(root->data>data)
  {
      root->left=insert(root->left,data);
  }
  int BF=Balanced_Factor(root);
  if(BF>1&&Balanced_Factor(root->left)>0)
  {
      root=right_rotate(root);
  }
  else if(BF>1&&Balanced_Factor(root->left)<0)
  {
    root->left=left_rotate(root->left);
    root=right_rotate(root);
  }
  else if(BF<-1&&Balanced_Factor(root->right)<0)
  {
      root=left_rotate(root);
  }
  else if(BF<-1&&Balanced_Factor(root->right)>0)
  {
      root->right=right_rotate(root->right);
      root=left_rotate(root);
  }
return root;

}
Node* delete_Node(Node* root,int data)
{    Node* temp;
    if(root->data<data)
  {
      root->right=delete_Node(root->right,data);
  }
  else if(root->data>data)
  {
      root->left=delete_Node(root->left,data);
  }
else if(root->data==data)
{
    if(root->right==0&&root->left==0)
    {   temp=root;
        root=0;
        delete temp;

    }
    else if(root->left==0&&root->right!=0)
    {
        temp=root;
        root=root->right;
        delete temp;
    }
    else if(root->right==0&&root->left!=0)
    {
        temp=root;
        root=root->left;
        delete temp;
    }
    else if(root->right!=0&&root->left!=0)
    {
        root->data=min(root->right);
        root->right=delete_Node(root->right,root->data);
    }
}



 int BF=Balanced_Factor(root);
  if(BF>1&&Balanced_Factor(root->left)>=0)
  {
      root=right_rotate(root);
  }
  else if(BF>1&&Balanced_Factor(root->left)<0)
  {
    root->left=left_rotate(root->left);
    root=right_rotate(root);
  }
  else if(BF<-1&&Balanced_Factor(root->right)<=0)
  {
      root=left_rotate(root);
  }
  else if(BF<-1&&Balanced_Factor(root->right)>0)
  {
      root->right=right_rotate(root->right);
      root=left_rotate(root);
  }
    return root;
}
void Preorder(Node* root)
{
    if(root==0)
     return;
     cout<<root->data<<" ";
     Preorder(root->left);
     Preorder(root->right);
}
void Postorder(Node* root)
{
    if(root==0)
    return;
    Postorder(root->left);
    Postorder(root->right);
    cout<<root->data<<" ";
}
void Inorder(Node* root)
{
    if(root==0)
    return;
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}
bool search(Node* root,int data)
{ if(root==0)
   return 0;
   if(root->data<data)
    {
        return search(root->right,data);
    }
    else if(root->data>data)
    {return search(root->left,data);}
    else if(root->data==data)
    {return 1;}


}
int main()
{ Node* root=0;
 int n,x;
 cout<<"Enter the operation you want to perform\n1-Insert\n2-Delete\n3-Search\n4-PreOrder Traversal\n5-PostOrder Traversal\n6-Inorder Traversal\n0-Exit\n";
 cin>>n;
 while(n)
 {
     switch (n)
     {
     case 1:cout<<"Enter the data you want to insert\n";
        cin>>x;
        root=insert(root,x);
         break;
    case 2: cout<<"Enter the data you want to delete\n";
    cin>>x;
    root=delete_Node(root,x);
    break;
    case 3: cout<<"Enter the data to be searched\n";
    cin>>x;
    if(search(root,x))
    {
        cout<<"Element found\n";
    }
    else
    {
        cout<<"Element not found\n";
    }
    break;
    case 4: Preorder(root);
    cout<<endl;
    break;
    case 5: Postorder(root);
    cout<<endl;
    break;
    case 6:Inorder(root);
    cout<<endl;
     }
     cout<<"Enter the operation you want to perform\n1-Insert\n2-Delete\n3-Search\n4-PreOrder Traversal\n5-PostOrder Traversal\n6-Inorder Traversal\n0-Exit\n";
 cin>>n;
 }


}