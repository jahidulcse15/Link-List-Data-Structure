#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
void Traverse(struct node *head)
{
    while(head!=NULL){
        cout<<"Element: "<<head->data<<endl;
        head=head->next;
    }
}
void DeletatLastNode(struct node *head)
{
    struct node *ptr1=NULL,*ptr2=NULL;
    ptr1=head;ptr2=head->next;
    while(ptr2->next!=NULL){
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    ptr1->next=ptr2->next;
    free(ptr2);
};
int main()
{
    struct node *head=NULL,*first=NULL,*second=NULL,*third=NULL,*forth=NULL;
    head=(struct node *)malloc(sizeof(struct node));
    first=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    forth=(struct node *)malloc(sizeof(struct node));
    head->data=10;
    head->next=first;
    first->data=20;
    first->next=second;
    second->data=30;
    second->next=third;
    third->data=40;
    third->next=forth;
    forth->data=50;
    forth->next=NULL;
    cout<<"Traverse node after deletion last node:"<<endl;
    Traverse(head);
    DeletatLastNode(head);
    cout<<"Traverse node befor deletion last node:"<<endl;
    Traverse(head);
}
