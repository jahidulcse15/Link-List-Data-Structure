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
struct node *DeletionatFirstNode(struct node *head)
{
    struct node *ptr=NULL;
    ptr=head;
    head=head->next;
    free(ptr);
    return head;
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
    cout<<"Traversal after deletion:"<<endl;
    Traversal(head);
    head=DeletionatFirstNode(head);
    cout<<"Traversal befor deletion:"<<endl;
    Traversal(head);
}
