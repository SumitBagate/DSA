#include<iostream>
using namespace std;

struct Node
{
    int  key , value;
    Node*link;
  
 Node (int k, int v )
    {   key = k;
        value = v;
        link = NULL;
    };

};



class  HashTable
{
private:
        Node*TableSize[Table_size];

};

 HashTable:: HashTable(/* args */)
{
}

 HashTable::~ HashTable()
{
}



int main()
{
return 0;}