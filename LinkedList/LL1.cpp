#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(){
        this->data=0;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    // deconstructor to delete a node
    ~Node(){
        cout<<"Node with value: "<<this->data<<"deleted"<<endl;
    }
};



void insertAtHead(Node* &head,Node* &tail,  int data){
    if(head==NULL){
        Node* newNode = new Node(data);
        head= newNode;
        tail=newNode;
        return;
    }
    // create a new node
    Node* newnode = new Node(data);
    // point to start
    newnode->next = head;
    // Make head at first place
    head=newnode;
}


void insertAttail(Node* &head, Node* &tail, int data){
    if(head==NULL){
        Node* newNode = new Node(data);
        head= newNode;
        tail=newNode;
        return;
    }
    Node* newnode = new Node(data);
    tail->next= newnode;
    tail=newnode;

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


void insertAtposition(int data, int position, Node* &head, Node* &tail){
    if(head==NULL){
        Node* newNode = new Node(data);
        head= newNode;
        tail = newNode;
        return;
    }



// find the position : prev and curr
    if(position==0){
        insertAtHead(head, tail, data);
        return;
    }
    // insertAt tail

    int len = findlen(head);
    if(position>=len){
        insertAttail(head,tail,data);
        return;
    }
    int i=1;
    Node* prev=head;
    while(i<position){
        prev=prev->next;
        i++;
    }

    Node* curr= prev->next;
    // create a new node
    Node* newNode = new Node(data);

    newNode->next= curr;
    prev->next=newNode;
}

void deleteNode(int position , Node* &head, Node* &tail){
    if(head==NULL){
        cout<<"Already empty";
        return;
    }

    // delete at start
    if(position==1){
        Node* temp=head;
        head=head->next;
        temp ->next = NULL;
        delete temp;
        return;
    }

    int len=findlen(head);

    // delete at end

    // step1: find prev
    if(position==len){
        int i=1;
        Node* prev=head;
        while(i<position-1){
            prev= prev->next;
            i++;
        }

        // step2: 
        prev ->next= NULL;
        // step3:
        Node* temp = tail;
        // 
        tail=prev;
        delete temp;
        return;
    }

    // delete at middle

    int i=1;
    Node* prev=head;
    while (i<position-1)
    {
        prev=prev->next;
        i++;
    }
    
    Node* curr = prev-> next;
    prev->next = curr->next;

    curr->next = NULL;
    delete curr;



    
}

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
}

Node* solve(Node* &curr, Node* &prev){
    if(curr==NULL){
        return prev;
    }

    Node* forward= curr->next;
    curr->next= prev;

    return solve(forward, curr);
}


int main(){

    // Node* first= new Node(10);
    // Node* second= new Node(20);
    // Node* third= new Node(30);
    // Node* fourth= new Node(40);
    // Node* fifth= new Node(50);

    // first->next=second;
    // second->next=third;
    // third->next=fourth;
    // fourth->next=fifth;

    // cout<<"Printing the value"<<endl;
    // print(first);


// Insert at Head 
    Node* head=NULL;
    Node* tail=NULL;
    insertAtHead(head,tail,50);
    insertAtHead(head,tail,90); 
    insertAtHead(head,tail,30);
    insertAtHead(head,tail,40);
// ******************************
    // insertAttail(head,tail,100);
    // insertAttail(head,tail,10);
    // insertAttail(head,tail,90);
    // insertAttail(head,tail,99);


    // cout<<"Old INsert"<<endl;
    // print(head);
    

    // insertAtposition(101, 9,head,tail);
    // cout<<"New INsert:"<<endl;
    // print(head);

    // deleteNode(1,head,tail);
    // cout<<"New LL is:"<<endl;
    // print(head);

    Node* prev=NULL;
    Node* curr=head;

    head= solve(curr,prev);
    cout<<endl;
    print(head);

    


    

    
}