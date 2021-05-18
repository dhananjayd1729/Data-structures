
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *left;
    struct Node *right;
    
    
    Node(int val){
        
        data=val;
        left=NULL;
        right=NULL;
    }
};

void printLevelOrder(Node *root){
    
    queue <Node*> q;
    stack <Node*> s;
    q.push(root);
    
    while(!q.empty()){
        
        root=q.front();
        q.pop();
        s.push(root);
        if(root->right){
            q.push(root->right);
        }if(root->left){
            q.push(root->left);
        }
    }
    
    while(!s.empty()){
        root=s.top();
        cout<<root->data<<" ";
        s.pop();
    }
}

int main()
{
   Node *root=new Node(1);
   root->left=new Node(2);
   root->right=new Node(3);
   root->left->left=new Node(4);
   root->left->right=new Node(5);
   root->right->left=new Node(6);
   root->right->right=new Node(7);
   
   printLevelOrder(root);
   return 0;
}
