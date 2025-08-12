#include<iostream>
using namespace std;



class Node
{
    public:
    int data;
    Node*next;

//constructor
    Node(int data)
    {
        this->data=data;
        this->next=nullptr;
    }
};


void  insert_at_head(Node*&head,int data)
{
     Node*temp=new Node(data);
     temp->next=head;
     head=temp;
    }


void insert_at_tail(Node*&tail,int data)
{
    Node*temp=new Node(data);
    if (tail == nullptr) { // If tail is null, list is empty
        tail = temp;
        return;
    }
    tail->next=temp;
    tail = temp;
}

void  insert_at_position(Node*&head ,int pos,int data)
{  
    if(pos==1)
    {
        insert_at_head(head,data);
        return;
    }

   Node*temp=head ;
   int count=1;
   while(count<pos-1)
   {
       temp=temp->next;
       count++;
   }

   //create a new node
   Node*nodeToInsert=new Node(data);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;

}


void  traversal(Node*&head)
{
  Node*temp=head;
  
  while (temp!=NULL)
  {
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  
    cout<<endl;
  
};



int main (){

Node*node1=new Node(10);
//   cout<<node1->data<<endl;
//   cout<<node1->next<<endl;  

    Node*head=node1;
    Node*tail=node1;
  insert_at_head(head,34);
  traversal(head);
  
  insert_at_head(head,15);
    traversal(head);
  
    insert_at_tail(tail,11);
    traversal(head);

    insert_at_position(head,1,100);
    traversal(head);
    insert_at_position;
    traversal(head);
  
  

  return 0;

}