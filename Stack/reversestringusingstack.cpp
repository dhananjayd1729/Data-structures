#include <iostream>
#include<bits/stdc++.h>
#include<string>

using namespace std;



void reverse(string str) 
{ 
    stack<char> s;
    
    for(int i=0;i<str.length(); i++){
        s.push(str[i]);
    }
        
    for (int i = 0; i <str.length(); i++) {
        str[i] = s.top();
        s.pop();
    }
    cout<<str<<endl;   
} 

int main()
{
   string str="Dhananjay";
   reverse(str);
   return 0;
}
