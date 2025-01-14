#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(){
        this->data=0;
        this->prev=NULL;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
    ~Node(){
        cout<<"Node with value: "<<this->data<<"deleted"<<endl;
    }
};

void print(Node* &head){
    Node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int findlen(Node* &head){

    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}

void insertAthead(Node* &head, Node*&tail, int data){
    if(head==NULL){
        Node* newNode= new Node(data);
        head=newNode;
        tail= newNode;
        return;
        
    }

    Node* newNode= new Node(data);  
    newNode->next= head;
    head->prev=newNode;
    head=newNode;
}

void insertAttail(Node* &head, Node*&tail, int data){
    if(head==NULL){
        Node* newNode= new Node(data);
        head=newNode;
        tail= newNode;
        return;
        
    }
    Node* newNode= new Node(data);
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;
}

void insertAtposition(Node* &head, Node*&tail, int data, int position){
    
     if(head==NULL){
        Node* newNode= new Node(data);
        head=newNode;
        tail= newNode;
        return;
        
    }

    if(position==1){
        insertAthead(head,tail,data);
        return;
    }

    int len=findlen(head);
    if(position>=len){
        insertAttail(head, tail, data);
        return;
    }

    int i=1;
    Node* prev= head;
    while(i<position-1){
        prev=prev->next;
        i++;
    }
    Node* curr= prev->next;

    // make a new Node
    Node* newNode= new Node(data);
    prev->next= newNode;
    newNode->prev=prev;
    curr->prev=newNode;
    newNode->next=curr;
    

}

void deletefrompos(Node* &head, Node*&tail , int position){

    if(head==NULL){
        cout<<"Already empty"<<endl;
        return;
    }

        Node* temp= head;
        head= head->next;
        head->prev=NULL;
        temp->next= NULL;
        delete temp;
}

int main(){

    Node* fem = new Node(13);
    Node* sec= new Node(12);
    Node* thi= new Node(23);
   
    Node* head=fem;
    Node* tail=thi;

    fem->next=sec;
    sec->prev=fem;

    sec->next=thi;
    thi->prev=sec;

    // print(head);
    // insertAthead(head, tail,1);
    // cout<<endl;
    
    // print(head);

    // cout<<endl;
    // insertAttail(head,tail, 90);
    // print(head);

    // cout<<endl;
    // //insertAtposition(head,tail,10,3);
    // print(head);
    // cout<<endl;

    cout<<"printing";
    deletefrompos(head, tail, 1);
    cout<<"printing";
    print(head);


    


    return 0;
}