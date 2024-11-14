// I begin in the name of Allah, Bismillahir-Rahmanihir-Rahim.

#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
void Traversal(struct node *head)
{
    while(head!=NULL)
    {
        cout<<"Element: "<<head->data<<endl;
        head=head->next;
    }
}
void InsertatIndex(struct node *head,int val,int index)
{
    struct node *ptr=NULL,*p=NULL;
    ptr=(struct node *)malloc(sizeof(struct node));
    p=head;
    ptr->data=val;
    int cnt=0;
    while(cnt!=index-1)
    {
        p=p->next;
        cnt++;
    }
    ptr->next=p->next;
    p->next=ptr;
    p=p->next;
}
int main()
{
    // allocat memory for a node in the list

    struct node *head=NULL,*first=NULL,*second=NULL,*third=NULL;
    head=(struct node *)malloc(sizeof(struct node));
    first=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));

    // Create a link in the list;

    head->data=10;
    head->next=first;
    first->data=20;
    first->next=second;
    second->data=30;
    second->next=third;
    third->data=40;
    third->next=NULL;

    // Taversal Node in the list after insert a new node.
    cout<<"Taversal Node in the list after insert a new node: "<<endl;
    Traversal(head);
    cout<<"Enter Index between two node. index range (1 to N):"<<endl;
    int index;
    cin>>index;
    InsertatIndex(head,100,index);
    cout<<"Taversal Node in the list before insert a new node at index: "<<endl;
    Traversal(head);
}
