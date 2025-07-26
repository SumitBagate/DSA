#include<iostream>
using namespace std;


class treeNode
{
    private:
       treeNode*left ;
       treeNode*right;
        int data;

    public: 

        friend class Tree;
        treeNode()
        {
             data =0;
            left=NULL;
            right=NULL;
        }
          
};


class  Tree
{

    treeNode*root;
    treeNode*makeTree();
public:
    Tree()
    {
        root=NULL;
    }
    void createTree()
    {
        root=makeTree();
    }

       void inorderTraversal(treeNode* node) {
        if (node != NULL) {
            inorderTraversal(node->left);   // Visit left subtree
            cout << node->data << " ";     // Visit current node
            inorderTraversal(node->right); // Visit right subtree
        }
       }

    void  display()
    
    {
          cout << "Inorder Traversal of the Tree: ";
        inorderTraversal(root);
        cout << endl;
    }

 };


      treeNode*Tree::makeTree()
       {
           treeNode*temp;
           char ch;
           temp=new treeNode;

           cout<<"enter data:-"<<endl;
           cin>>temp->data;
           cout<<"enter right  child (y/n) :- "<<endl;
           cin>>ch;
           if(ch=='y'||ch=='Y')
           {
            temp->right=makeTree();
           }
           cout<<"enter  left child (y/n):-"<<endl;
           cin >>ch;
           if (ch=='y'||ch=='Y')
           {
            temp->left=makeTree();
           }

       return  temp ;
       } ;
        

int main()
{
  
 Tree t;
 t.createTree();
 t.display();
return 0;}