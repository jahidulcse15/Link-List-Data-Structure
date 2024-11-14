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
struct node *ReverseList(struct node *head)
{
    struct node *current=head,*pre=NULL,*tem=NULL;
    while(current!=NULL){
        pre=current->next;
        current->next=tem;
        tem=current;
        current=pre;
    }
    return tem;
}
int main()
{
    struct node *head=NULL,*first=NULL,*second=NULL,*third=NULL,*fourth=NULL;
    head=(struct node *)malloc(sizeof(struct node ));
    first=(struct node *)malloc(sizeof(struct node ));
    second=(struct node *)malloc(sizeof(struct node ));
    third=(struct node *)malloc(sizeof(struct node ));
    fourth=(struct node *)malloc(sizeof(struct node ));
    head->data=10;
    head->next=first;
    first->data=20;
    first->next=second;
    second->data=30;
    second->next=third;
    third->data=40;
    third->next=fourth;
    fourth->data=50;
    fourth->next=NULL;
    cout<<"Traverse link list after reverse list:"<<endl;
    Traverse(head);
    head=ReverseList(head);
    cout<<"Traverse link list before reverse list:"<<endl;
    Traverse(head);
}
