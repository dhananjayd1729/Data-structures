#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void reversequeue(queue<int> &q){
    if(q.empty()){
        return ;
    }else{
        int x=q.front();
        q.pop();
        reversequeue(q);
        q.push(x);
        return ;
    }
}


int main()
{
   queue<int> q;
   q.push(5);
   q.push(6);
   q.push(7);
   q.push(8);
   q.push(9);
   cout<<"front before reversing queue: " << q.front()<<endl;
   reversequeue(q);
   cout<<"front after reversing queue: " << q.front()<<endl;
   
   
   return 0;
}
