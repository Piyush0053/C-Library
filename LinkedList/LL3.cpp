#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(){
        this->data=0;
        this->next=NULL;
        this->prev=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};

void print(Node* &head){
    Node* temp=head;
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

// *******************************************************
//IMP- Ques-- reverse K nodes 
Node* reverknodes(Node* &head, int k){
    if(head==NULL){
        cout<<"LL is empty"<<endl;
        return head;;

    }
    int len=findlen(head);
    if(k>len){
        return head;
    }

    Node* prev= NULL;
    Node* curr=head;
    Node* forward= curr->next;

    int count=0;
    while(count<k){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        count++;
    }
    if(forward!=NULL){
        head->next=reverknodes(forward,k);
    }
    return prev;
}

bool checkforloop(Node* &head){
    if(head==NULL){
        cout<<"LL is empty"<<endl;
        return false;
    }

    Node* slow=head;
    Node* fast=head;

    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        if(slow==fast){
            return true;
        }
    }
    return false;

}

int main(){
    
    Node* head= new Node(10);
    Node* second= new Node(20);
    Node* third= new Node(30);
    Node* fourth= new Node(40);
    Node* fifth= new Node(50);
    Node* sixth= new Node(60);
    Node* seven= new Node(70);
    Node* eight= new Node(80);
    Node* nine= new Node(90);


    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next=seven;
    seven->next=eight;
    eight->next=nine;
    nine->next=fifth;

    // print(head);
    cout<<"Loop is present or not:"<<checkforloop(head);
    
    // cout<<endl;
    
    // head= reverknodes(head,2);  
    // print(head);

}