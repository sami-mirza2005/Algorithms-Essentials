#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *head;
Node *tail;
void InsertAtTail(int x)
{
    Node *temp=new Node();
    temp->data=x;
    temp->next=NULL;

    if(head==NULL)
        head=tail=temp;
    else
    {
        tail->next=temp;
        tail=temp;
    }
    cout<<x<<"........is added"<<endl;
}
void traverse()
{
    Node *temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;
}

main()
{
    InsertAtTail(10);InsertAtTail(15);InsertAtTail(20);
    traverse();
    InsertAtTail(40);
    traverse();
}
