#include<iostream>

using namespace std;



class Queue{

    int front;
    int rear;
    int arr[5];
    

public:
    Queue(){
      front=-1;
      rear=-1;
      for(int i=0;i<5;i++){
          arr[i]=0;
      }
    }

bool isEmpty(){
    if(front==-1 && rear==-1){
        return true;
    }else{
        return false;
    }
}

int sizeofqueue(){
    int size;
    cout<<size<<endl;
    return  size;
}

bool isFull(){
    if(rear==4){
        return true;
  }else{
        return false;
  }
}

void enqueue(int val){
    if(isFull()){
        cout<<"Queue is full"<<endl;
        return ;
    }else if(isEmpty()){
        
        front=0;
        rear=0;
        arr[rear]=val;
        cout<< val << " is enqueued in the queue."<< endl;
        return;
    } else{
        rear++;
        arr[rear]=val;
        cout<< val << " is enqueued in the queue."<< endl;
        return;
    }

}

int dequeue(){
    int x;
    if(isEmpty()){
        cout<<"Queue is empty"<<endl;
        return 0;
    }else if(front==rear){
        x=arr[front];
        arr[front]=0;
        front=-1;
        rear=-1;
        cout<< x<< " is dequeued from the queue."<< endl;
        return x;
    }else{
        x=arr[front];
        arr[front]=0;
        front++;
        cout<< x<< " is dequeued from the queue."<< endl;
        return x;
    }

}

};



int main()
{
    Queue q1;
    q1.sizeofqueue();

    q1.enqueue(5);
    q1.enqueue(6);
    q1.enqueue(6);
    q1.enqueue(4);
    q1.enqueue(7);
    q1.enqueue(8);
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.enqueue(9);
    q1.dequeue();

    return 0;
}
