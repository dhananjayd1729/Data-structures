#include <iostream>

using namespace std;

#define MAX 1000

class stack{
    int top;
    
    public:
    stack(){top = -1 ;}
    int a[MAX];
    
    int push(int val){
        if (isFull()){
            return 0;
        } else {
            top++;
            a[top]= val;
            cout<< val <<" is pushed into the stack."<<endl;
            return val;
        }
    }
    
    
    int pop(){
        if (isEmpty()){
            cout<<"stack is empty, you can't pop out element from it."<<endl;
            return 0;
        } else{
            int x=a[top--];
            cout<< x << " is popped out from the stack."<<endl;
            return x;
        }
    }
    
    
    
    
    bool isEmpty(){
        return (top<0);
    }
    
    bool isFull(){
        if(top>=(MAX-1)){
            cout<<"stack overflow."<<endl;
            return true;
        }else{
            return false;
        }
    }
 
    int peek(){
        if(top<0){
            cout<<"stack underflow."<<endl;
            return 0;
        } else{
            int x=a[top];
            cout<< x << " is current top element."<<endl;
            return x;
        }
    }
};




int main()
{
   class stack s1;
   s1.pop();
   s1.push(1);
   s1.push(2);
   s1.peek();
   s1.push(3);
   s1.push(4);
   s1.isFull();
   s1.pop();
   s1.pop();
   s1.pop();
   
   return 0;
}
