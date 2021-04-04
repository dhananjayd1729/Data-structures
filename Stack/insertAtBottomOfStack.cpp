#include <iostream>
#include<bits/stdc++.h>

using namespace std;

void ibottom(stack<int> &s, int n){
    if(s.empty()){
        s.push(n);
    }else{
        int x=s.top();
        s.pop();
        ibottom(s,n);
        s.push(n);
        s.push(x);
    }
    return ;
}

int main()
{
    stack<int> s;
    s.push(5);
    s.push(6);
    s.push(7);
    s.pop();
    s.pop();
    s.pop();
    ibottom(s,4);
    cout<<s.top()<<endl;
   
   return 0;
}
