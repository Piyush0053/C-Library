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

Node* reverse(Node* &head){
    Node* prev= NULL;
    Node* curr=head;

    while(curr!=NULL){
    Node* forward= curr->next;
    curr->next=prev;
    prev=curr;
    curr=forward;
    }
    return prev;
}


bool findPalindrome(Node* &head){
    if(head==NULL){
        return true;
    }
    if(head->next==NULL){
        return true;
    }

    // Step 1: Find Middle

    Node* slow=head;
    Node* fast= head;

    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }

    }

    // step2 : reverse Nodes after Middle Node

    Node* headOfReverseLL = reverse(slow->next);
    slow->next=headOfReverseLL;

    Node* temp1=head;
    Node* temp2=headOfReverseLL;

    while(temp2!=NULL){
        if(temp1 ->data != temp2->data){
            return false;
        }
        else{
            temp1=temp1->next;
            temp2=temp2->next;
        }
    }

    return true;
    


}
// Brute Force 
void sortbyzeronetwo(Node* &head){
    int zero=0;
    int two=0;
    int one=0;
// count zero one, two 
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==0){
            zero++;
        }
        else if(temp->data==1){
            one++;
        }
        else if(temp->data==2){
            two++;
        }
        temp=temp->next;

    }

    // put zero , one ,, two

    temp=head;
    while(zero--){
        temp->data=0;
        temp=temp->next;
    }
    while(one--){
        temp->data=1;
        temp=temp->next;
    }
    while(two--){
        temp->data=2;
        temp=temp->next;
    }


}

// **************************

Node* sortSecondmethod(Node* &head){

    if(head==NULL){
        cout<<"ll is empty"<<endl;
        return NULL;
    }    
    if(head->next==NULL){
        return head;
    }

    Node* zerohead= new Node(-1);
    Node* zerotail= zerohead;

    Node* onehead= new Node(-1);
    Node* onetail= onehead;

    Node* twohead= new Node(-1);
    Node* twotail= twohead;

    Node* curr= head;
    while(curr!=NULL){

        // breaking of data set and mark these to the zero, one ,two LL
        if(curr->data==0){
            Node* temp=curr;
            curr=curr->next;
            temp->next=NULL;

            zerotail->next=temp;
            zerotail=temp;
        }
        if(curr->data==1){
            Node* temp=curr;
            curr=curr->next;
            temp->next=NULL;

            onetail->next=temp;
            onetail=temp;
        }
        if(curr->data==2){
            Node* temp=curr;
            curr=curr->next;
            temp->next=NULL;

            twotail->next=temp;
            twotail=temp;
        }
    }  
        // join LL

        Node* temp=onehead;
        onehead=onehead->next;
        temp->next=NULL;
        delete temp;

        temp=twohead;
        twohead=twohead->next;
        temp->next=NULL;
        delete temp;


    // Join list
    if(onehead!=NULL){
        zerotail->next=onehead;
        if(twohead!=NULL){
            onetail->next=twohead;
        }
    }
    else{
        if(twohead!=NULL){
            zerotail->next=twohead;
        }
    }

    temp=zerohead;
    zerohead=zerohead->next;
    temp->next=NULL;
    delete temp;

    return zerohead;
}


// ADD TWO NUMBERS IN LL 
    Node* solve(Node*& head, Node*& fourth) {
        head = reverse(head);
        fourth = reverse(fourth);
        Node* ansHead = NULL;
        Node* ansTail = NULL;
        int carry = 0;

        while (head != NULL && fourth != NULL) {
            int sum = carry + head->data + fourth->data;
            int digit = sum % 10;
            carry = sum / 10;

            Node* newNode = new Node(digit);
            if (ansHead == NULL) {
                ansHead = newNode;
                ansTail = newNode;
            } else {
                ansTail->next = newNode;
                ansTail = newNode;
            }
            head = head->next;
            fourth = fourth->next;
        }
        while (head != NULL) {
            int sum = carry + head->data;
            int digit = sum % 10;
            carry = sum / 10;
            Node* newNode = new Node(digit);
            ansTail->next = newNode;
            ansTail = newNode;
            head = head->next;
        }
        while (fourth != NULL) {
            int sum = carry + fourth->data;
            int digit = sum % 10;
            carry = sum / 10;
            Node* newNode = new Node(digit);
            ansTail->next = newNode;
            ansTail = newNode;
            fourth = fourth ->next;
        }
        while (carry != 0) {
            int sum = carry;
            int digit = sum % 10;
            carry = sum / 10;
            Node* newNode = new Node(digit);
            ansTail->next = newNode;
            ansTail = newNode;
        }
        ansHead = reverse(ansHead);
        return ansHead;
    }

int main(){

    Node* head= new Node(2);
    Node* second= new Node(4);
    Node* third= new Node(9);
    Node* fourth= new Node(5);
    Node* fifth= new Node(6);
    Node* sixth= new Node(4);
    Node* seven= new Node(9);

    head->next=second;
    second->next=third;
    
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next=seven;
    Node* ans= solve(head, fourth);
    print(ans);
    

    // **************
    // Find Palindrome

    // bool checkPalindrome= findPalindrome(head);
    // if(checkPalindrome){
    //     cout<<"The linked list is a palindrome"<<endl;
    // }

    // else{
    //     cout<<"The linked list is not Palindrome"<<endl;
    // }

    // print(head);
    // cout<<endl;
    // // sortbyzeronetwo(head);
    // // print(head);

    // head= sortSecondmethod(head);
    // print(head);
    

    return 0;
}


