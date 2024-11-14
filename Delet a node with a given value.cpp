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
void DeletatGivenValue(struct node *head,int val)
{
    struct node *ptr1=NULL,*ptr2=NULL;
    ptr1=head;ptr2=head->next;
    while(ptr2->next!=NULL&&ptr2->data!=val){
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    if(ptr2->data==val){
        ptr1->next=ptr2->next;
         free(ptr2);
    }
}
int main()
{
    struct node *head=NULL,*first=NULL,*second=NULL,*third=NULL;
    head=(struct node *)malloc(sizeof(struct node));
    first=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    head->data=10;
    head->next=first;
    first->data=20;
    first->next=second;
    second->data=30;
    second->next=third;
    third->data=40;
    third->next=NULL;
    cout<<"Traversal note in the list after delet a given value:"<<endl;
    Traversal(head);
    DeletatGivenValue(head,20);
    cout<<"Traversal note in the list before delet a given value:"<<endl;
    Traversal(head);
}
