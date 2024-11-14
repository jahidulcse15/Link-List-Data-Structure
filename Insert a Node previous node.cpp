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
    while(head!=NULL){
        cout<<"Element: "<<head->data<<endl;
        head=head->next;
    }
}
void InsertatPreviousNode(struct node *head,int val)
{
    struct node *ptr=NULL;
    ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=val;
    ptr->next=head->next;
    head->next=ptr;
    head=head->next;
}
int main()
{
    // allocate memory for node in the node;

    struct node *head=NULL,*first=NULL,*second=NULL,*third=NULL;
    head=(struct node *)malloc(sizeof(struct node));
    first=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));

    // create link in the linklist;
    head->data=10;
    head->next=first;
    first->data=20;
    first->next=second;
    second->data=30;
    second->next=third;
    third->data=40;
    third->next=NULL;
    //Traversal List after insert a node;
    cout<<"Traversal List after insert a node"<<endl;
    Traversal(head);
    //Insert Node at Previous node;
    InsertatPreviousNode(third,100);
    cout<<"Insert Node at Previous node:"<<endl;
    Traversal(head);
}
