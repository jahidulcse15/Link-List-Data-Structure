#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
void Traversal(struct node *head)
{
    struct node *p=NULL;
    p=head;
    do{
        cout<<"Element: "<<p->data<<endl;
        p=p->next;
    }while(p!=head);
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
    third->next=head;
    Traversal(head);
}
