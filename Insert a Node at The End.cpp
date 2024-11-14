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
//        if(head==NULL){
//            return;
//        }
//        cout<<"Element: "<<head->data<<endl;
//        Traversal(head->next);
}
struct node *InsertatEnd(struct node *head,int val)
{
    struct node *ptr=NULL,*p=NULL;
    p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=val;
    ptr->next=NULL;
    p->next=ptr;
    return head;
};
int main()
{
    // allocate memory for node in the list;

    struct node *head=NULL,*first=NULL,*second=NULL,*third=NULL;
    head=(struct node *)malloc(sizeof(struct node));
    first=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));

    // Create link in the list;

    head->data=10;
    head->next=first;
    first->data=20;
    first->next=second;
    second->data=30;
    second->next=third;
    third->data=40;
    third->next=NULL;

    // Traversal after insert a node:
    cout<<"Traversal after insert a node:"<<endl;
    Traversal(head);
    head=InsertatEnd(head,100);
    cout<<"Traversal before insert a node:"<<endl;
    Traversal(head);
}
