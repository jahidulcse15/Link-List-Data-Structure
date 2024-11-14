        // I begin in the name of Allah, Bismillahir-Rahmanihir-Rahim.
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *link;
};
void Traversal(struct node *head)
{
    while(head!=NULL)
    {
        cout<<"Element: "<<head->data<<endl;
        head=head->link;
    }
}
int main()
{
    // allocate memory for node in the list

    struct node *head=NULL,*first=NULL,*second=NULL,*third=NULL;
    head=(struct node *)malloc(sizeof(struct node));
    first=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));

    // Create linnk in the list

    head->data=10;
    head->link=first;
    first->data=20;
    first->link=second;
    second->data=30;
    second->link=third;
    third->data=40;
    third->link=NULL;

    // Traversal Node

    Traversal(head);
}
