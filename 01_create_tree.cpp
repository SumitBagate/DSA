#include<iostream>
#include<queue>
using namespace std;

class Node{
  public:
    int  data;
    Node*left;
    Node*right;

   Node(int d)
   
   {
     this ->data=d;
     this->left=NULL;
     this->right=NULL;
   }
};

//recursive function to build the tree
Node*buildTree(Node*root)
{
  cout<<"Enter the data:-"<<endl;
  int data;
  cin>>data;
  root=new Node(data);

  if(data==-1)
  {
    return NULL;
  }
  cout<<"Enter the left child of "<<data<<endl;
  root->left=buildTree(root->left);
  cout<<"Enter the right child of "<<data<<endl;
  root->right=buildTree(root->right);
  return root;
}

//level order traversal
void levelOrderTrvavers(Node*root)
{
 queue<Node*>q;
 q.push(root);
 q.push(NULL);
 while (!q.empty())
 {  
    Node*temp=q.front();
   
    q.pop();

    if(temp==NULL)
    {
        cout<<endl;
        if (!q.empty())
        {
          q.push(NULL);
        }
    }
    else{
    cout<<temp->data<<" ";
    if(temp->left)
    {
      q.push(temp->left);
    }
    if(temp->right)
    {
      q.push(temp->right);
    }
    }
 }
 


}

void  inorder(Node*root)
{
if(root==NULL)
{
  return;
}

inorder(root->left);
cout<<root->data<<" ";
inorder(root->right);
}


void preorder(Node*root)
{
  if(root==NULL)
  {
    return;
  }
  cout<<root->data<<" ";
  preorder(root->left);
  preorder(root->right);
} 


void postorder(Node*root )
{
     if (root==NULL)
     {
        return;
     }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

}

void inordrer()

{
   
}

int main()
{

Node*root=NULL;
root=buildTree(root);
// 3 7 -1 -1 8 -1 -1 2 5 -1 -1 6 -1 -1
//level order traversal
cout<<"printing the level order traversal"<<endl;
levelOrderTrvavers(root);

cout<<"preorder traversal"<<endl;
preorder(root);
cout<<endl;

cout<<"inorder traversal"<<endl;
inorder(root);
cout<<endl;

cout<<"postorder traversal"<<endl;
postorder(root);
cout<<endl;


return 0;}


// Time complexity of the above code is O(n) where n is the number of nodes in the tree.
// Space complexity of the above code is O(n) where n is the number of nodes in the tree.