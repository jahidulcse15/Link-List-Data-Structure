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
     while(head!=NULL)
     {
         cout<<"Element: "<<head->data<<endl;
         head=head->next;
     }
 }
 struct node *InsertatBegining(struct node *head,int val)
 {
     struct node *ptr=NULL;
     ptr=(struct node *)malloc(sizeof(struct node));
     ptr->next=head;
     ptr->data=val;
     head->next=ptr;
     return head;
 };
 int main()
 {
     // allocate memory for node in the list

     struct node *head=NULL,*first=NULL,*second=NULL,*third=NULL;
     head=(struct node *)malloc(sizeof(struct node));
     first=(struct node *)malloc(sizeof(struct node));
     second=(struct node *)malloc(sizeof(struct node));
     third=(struct node *)malloc(sizeof(struct node));

     // Create link in the list

     head->data=10;
     head->next=first;
     first->next=second;
     first->data=20;
     second->data=30;
     second->next=third;
     third->data=40;
     third->next=NULL;

     //Traversal the list after insert a node:.
     cout<<"Traversal the list after insert a node:"<<endl;
     Traversal(head);

     // Insert a New Node at begining position.

     head=InsertatBegining(head,5);
     cout<<"Traversal the list before insert a node:"<<endl;
     Traversal(head);
 }
