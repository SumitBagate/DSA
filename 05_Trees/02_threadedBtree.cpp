#include<iostream>
using namespace std;

class Node
{
    public:
       int data;
       Node*left;
       Node*right;
       bool isthreaded;
};

Node*builBtree(Node*root)
 {
 while(root &&root->left)
 {
    root=root->left;
 }
    return root;

 }

int main()
{
return 0;}