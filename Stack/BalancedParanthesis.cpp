#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool isbalanced(string expr){
    stack<char> s1;
    char x;
    
    for(int i=0; i<expr.length(); i++){
        if(expr[i]=='{' || expr[i]=='(' ||expr[i]=='['){
            s1.push(expr[i]);
            continue;
        }
        
        if(s1.empty()){
            return false;
        }
        
        switch(expr[i]){
            case ')':
            
            x=s1.top();
            s1.pop();
            if(x=='{' || x=='['){
                return false;
            }
            break;
            
            case '}':
            
            x=s1.top();
            s1.pop();
            if(x=='(' || x=='['){
                return false;
            }
            break;
            
            case ']':
            
            x=s1.top();
            s1.pop();
            if(x=='{' || x=='('){
                return false;
            }
            break;
            
            
        }
    }
    
    return(s1.empty());
}

int main()
{
   string expr="{[]}(";
   if(isbalanced(expr)){
       cout<<"Balanced."<<endl;
   }else{
       cout<<"Not balanced."<<endl;
   }
   
   return 0;
}
