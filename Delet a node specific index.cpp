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
void DeletingNodeatSpecificIndex(struct node *head,int index)
{
    struct node *ptr=NULL;
    ptr=head;
    int cnt=0;
    while(cnt!=index-1)
    {
        ptr=ptr->next;
        cnt++;
    }
    ptr->next=ptr->next->next;
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
    cout<<"Traversal after deleting at index:"<<endl;
    Traversal(head);
    cout<<"Enter Index:"<<endl;
    int index;cin>>index;
    DeletingNodeatSpecificIndex(head,index);
    cout<<"Traversal before deleting at index:"<<endl;
    Traversal(head);
}
