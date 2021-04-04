#include <bits/stdc++.h>
#include <list>
using namespace std;
 

#define N 8
 

bool MATRIX[N][N] = {{0, 0, 1, 0},
                    {0, 0,1, 0},
                    {0, 0, 0, 0},
                    {0, 0, 1, 0}};
 
bool knows(int a, int b)
{
    return MATRIX[a][b];
}

int findcelebrity(int n){
    
    stack<int> s;
    
    for(int i=0;i<n;i++){
        s.push(i);
    }
    
   
    int count=0;
    while(count<(n-1)){
        
        int A=s.top();
        s.pop();
        
        int B=s.top();
        s.pop();
        
        if(knows(A,B)){
        
        s.push(B);
        } 
        else{
        
        s.push(A);
        }
        
        
        count++;
    }
    
       
    int C=s.top();  
   
      
    
    return C;
    
}


int main(){
    int n=4;
    int ID=findcelebrity(n);
    cout<<"celebrity Id is: "<< ID<<endl;
    return 0;
}
