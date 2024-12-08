#include<iostream>
#include<string>
using namespace std;
 class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data=data;
        next=NULL;
    }

 };

 void insertNode(node* &head,int data){
    node* newNode=new node(data);
    newNode->next=head;
    head=newNode;
 }

 void insertatTail(node* &head, int data){
    node* newNode=new node(data);
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
 }

 void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
 }

 bool Search(node* &head, int key){
    node* temp=head;
    while(temp->next!=NULL){
        if (temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
 }

 void deletenode(node* head, int key){
    node* temp=head;
    while(temp->next->data!=key){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
 }

 void deleteatHead(node* &head){
    node* temp=head;
    head=temp->next;
    delete temp;
 }

void deleteatTail(node* &head,int tail){
    if (head==NULL){
        return;
    }
    if (head->next==NULL){
        deleteatHead(head);
        return;
    }
    node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=NULL;
    delete temp->next;
}

void reverselist(node* &head){
    node* temp=head;
    while(temp->next!=NULL){
        temp->next=head;
        temp=temp->next;
    }  
}

 int main(){
    node* head=NULL;
    insertNode(head,5);
    insertNode(head,10);
    insertNode(head,15);
    insertNode(head,20);
    insertatTail(head,4);
    // display(head);
    // cout<<Search(head,10);
    // deleteatHead(head);
    // deleteatTail(head,4); 
    reverselist(head);
    display(head);
    return 0;
 }

