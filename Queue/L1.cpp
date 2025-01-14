#include<bits/stdc++.h>
using namespace std;

// for Single Queue
    // class Queue{
    //     public:
    //     int size;
    //     int* arr;
    //     int front;
    //     int rear;

    //     Queue(int size){
    //         this->size= size;
    //         arr= new int[size];
    //         front=-1;
    //         rear=-1;
    //     }

    //     void push(int data){
    //         if(front==0 && rear == size-1){
    //             cout<<"Queue is full"<<endl;
    //             return;
    //         }
    //         else if(front==-1){
    //             front=0;
    //             rear=0;
    //             arr[rear]= data;
    //         }
    //         else{
    //             rear++;
    //             arr[rear]= data;
    //         }
    //     }

    //     void pop(){
    //         if(front==-1){
    //             cout<<"Queue is empty"<<endl;
    //             return;
    //         }
    //         else if(front==rear){
    //             arr[front]=-1;
    //             front=-1;
    //             rear=-1;
    //         }
    //         else{
    //             arr[front]=-1;
    //             front++;
    //         }

    //     }

    //     int getfront(){
    //         if(front==-1){
    //             cout<<"front is empty"<<endl;
    //             return -1;
    //         }
    //         else{
    //             return arr[front];
    //         }
    //     }

    //     bool isempty(){
    //         if(front==-1){
    //             return true;

    //         }
    //         else{
    //             return false;
    //         }
    //     }

    //     int getsize(){
    //         int ans= rear-front+1;
    //         return ans;
    //     }

    // };
    // *********************************************8

// For Circular Queue

    // class Queue{
    //     public:
    //     int size;
    //     int* arr;
    //     int front;
    //     int rear;

    //     Queue(int size){
    //         this->size= size;
    //         arr= new int[size];
    //         front=-1;
    //         rear=-1;
    //     }

    //     void push(int data){
    //         if(front==0 && rear == size-1){
    //             cout<<"Queue is full"<<endl;
    //             return;
    //         }
    //         else if(front==-1){
    //             front=0;
    //             rear=0;
    //             arr[rear]= data;
    //         }
    //         else if(front!=0 && rear=size-1){
    //             rear=0;
    //             arr[rear]= data;
    //         }
    //         else{
    //             rear++;
    //             arr[rear]= data;
    //         }
    //     }

    //     void pop(){
    //         if(front==-1){
    //             cout<<"Queue is empty"<<endl;
    //             return;
    //         }
    //         else if(front==rear){
    //             arr[front]=-1;
    //             front=-1;
    //             rear=-1;
    //         }
    //         else if(front==size-1){
    //             front=0;
    //         }
    //         else{
    //             arr[front]=-1;
    //             front++;
    //         }

    //     }

    //     int getfront(){
    //         if(front==-1){
    //             cout<<"front is empty"<<endl;
    //             return -1;
    //         }
    //         else{
    //             return arr[front];
    //         }
    //     }

    //     bool isempty(){
    //         if(front==-1){
    //             return true;

    //         }
    //         else{
    //             return false;
    //         }
    //     }

    //     int getsize(){
    //         int ans= rear-front+1;
    //         return ans;
    //     }

    // };

    // ************************************


    // Doubly ended Queue

     class DoublyQueue{
        public:
        int size;
        int* arr;
        int front;
        int rear;

        DoublyQueue(int size){
            this->size= size;
            arr= new int[size];
            front=-1;
            rear=-1;
        }

        void pushrear(int data){
            if(front==0 && rear == size-1){
                cout<<"Queue is full"<<endl;
                return;
            }
            else if(front==-1){
                front=0;
                rear=0;
                arr[rear]= data;
            }
            else if(front!=0 && rear=size-1){
                rear=0;
                arr[rear]= data;
            }
            else{
                rear++;
                arr[rear]= data;
            }
        }
        void pushfront(int data){
            if(front==0 && rear == size-1){
                cout<<"Queue is full"<<endl;
                return;
            }
            else if(front==-1){
                front=0;
                rear=0;
                arr[front]= data;
            }
            else if(front==0 && rear!=size-1){
                front=size-1;
                arr[front]= data;
            }
            else{
                front--;
                arr[front]=data;
            }
        }

        void popfront(){
            if(front==-1){
                cout<<"Queue is empty"<<endl;
                return;
            }
            else if(front==rear){
                arr[front]=-1;
                front=-1;
                rear=-1;
            }
            else if(front==size-1){
                front=0;
            }
            else{
                
                front++;
            }

        }
        void poprear(){
            if(front==-1){
                cout<<"Queue is empty"<<endl;
                return;
            }
            else if(front==rear){
                arr[front]=-1;
                front=-1;
                rear=-1;
            }
            else if(front==size-1){
                front=0;
            }
            else{
                
                front++;
            }

        }

        int getfront(){
            if(front==-1){
                cout<<"front is empty"<<endl;
                return -1;
            }
            else{
                return arr[front];
            }
        }

        bool isempty(){
            if(front==-1){
                return true;

            }
            else{
                return false;
            }
        }

        int getsize(){
            int ans= rear-front+1;
            return ans;
        }

    };



int main(){

    Queue q(10);

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    q.pop();
    cout<<q.isempty()<<endl;
    cout<<q.getfront()<<endl;

}