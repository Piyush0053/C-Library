#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
    Node(){
        this->data = 0;
        this->next = NULL;
    }
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

int findlen(Node* head){
    int count = 0;
    Node* temp = head;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

Node* reverseKNodes(Node* &head, int k){
    if(head == NULL){
        cout << "LL is empty" << endl;
        return head;
    }

    Node* prev = NULL;
    Node* curr = head;
    Node* forward = curr->next;

    int count = 0;
    while(curr != NULL && count < k){ // Reverse k nodes or until end of list
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;
    }

    // Recursively reverse the next k nodes
    if(forward != NULL){
        head->next = reverseKNodes(forward, k);
    }

    return prev; // New head after reversal
}

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    Node* tail = nullptr;
    int n, value;

    cout << "Enter the number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> value;

        Node* newNode = new Node(value);  // Using the constructor to initialize data

        if (head == nullptr) {
            head = newNode;
            tail = head;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    int k;
    cout << "Enter the value of K: ";
    cin >> k;

    head = reverseKNodes(head, k);
    print(head);

    return 0;
}
