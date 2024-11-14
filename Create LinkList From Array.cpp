#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL,*current=NULL;
void CreateLink(int ar[],int a)
{
    for(int i=1;i<=a;i++){
        struct node *tem=NULL;
        tem=(struct node *)malloc(sizeof(struct node));
        tem->data=ar[i];
        tem->next=NULL;
        if(head==NULL){
            head=tem;
            current=tem;
        }
        else{
            current->next=tem;
            current=current->next;
        }
    }
}
void Traversal(struct node *head)
{
    while(head!=NULL){
        cout<<"Element: "<<head->data<<endl;
        head=head->next;
    }
}
int main()
{
    cout<<"Enter the array size:"<<endl;
    int a;cin>>a;
    cout<<"Enter the array element:"<<endl;
    int ar[a+10];
    for(int i=1;i<=a;i++){
        cin>>ar[i];
    }
    CreateLink(ar,a);
    Traversal(head);
}
