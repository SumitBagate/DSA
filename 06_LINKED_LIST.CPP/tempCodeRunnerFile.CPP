

void insertAtHead(Node*&head, int data)
{
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}


void insert_at_tail(Node*&tail,int data)
{
    Node*temp=new Node(data);

    tail->next=temp;
    tail=tail->next;
}

void  insert_at_position(Node*head ,int pos,int data)
{  
    if(pos==1)
    {
        insertAtHead(head, data);
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

