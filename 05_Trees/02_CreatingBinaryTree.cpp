#include <bits/stdc++.h> 

using namespace std;
class Node{
   public:
    int Data;
    Node*lchild;
    Node*Rchild;

    //To  intialize  the  Node  we  use  constructor 
    Node(int val)
    {
        Data = val ;
        lchild =nullptr;
        Rchild =nullptr;
    }
};


Node*CreatTree()
{
    int  x;
    cout<<"enter  -1   for  no node "<<endl;
    cin >> x;
    if(x == -1)
    {
      return  nullptr;
    }

    Node*newNode=new Node(x);
    
    cout<<"enter left child"<<x<<endl;
    newNode->lchild=CreatTree();

    cout<<"enter Right child"<<x<<endl;
    newNode->Rchild=CreatTree();

    return newNode;
}


void preorder(Node*root)
{
    if(root ==nullptr) return;
    cout<<root->Data<<" ";
    preorder(root->lchild);
    preorder(root->Rchild);
}










int main()
{
    cout<< " Generate Tree";
    Node*root=CreatTree();

    cout<<"preorder Traverse";
    preorder(root);
    cout<<endl;


  // Basic Apprach  to  make   tree  without   intializing  using   consturctor  
  //we need to assign  the  new  node each  time ;  
//   Node*root=new Node();
//   cout<<"enter data  for  root";
//   cin>>root->Data;

//   root->lchild=new Node();
//   cout<<"enter data  for  Lchild";
//   cin>>root->lchild->Data;


//   root->Rchild=new Node();
//   cout<<"enter data  for  Rchild";
//   cin>>root->Rchild->Data;
  

//    cout<< "root"<<root->Data<<endl;
//    cout<< "LEft child"<<root->lchild->Data<<endl;
//    cout<< "Right  Child"<<root->Rchild->Data<<endl;
   
   
   
   
   return 0;
  
  
}