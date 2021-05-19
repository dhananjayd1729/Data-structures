
#include<bits/stdc++.h>
#include<algorithm>
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

void postOrderIterative(Node* root){
    
    if(root==NULL)
        return;
    stack<Node*> s1;
    stack<Node*> s2;
    s1.push(root);
    Node* node;
    
    while(!s1.empty()){
        node=s1.top();
        s1.pop();
        s2.push(node);
        
        if(node->left)
           s1.push(node->left);
        if(node->right)
           s1.push(node->right);
        
    }
    
    while(!s2.empty()){
        node=s2.top();
        cout<<node->data<<" ";
        s2.pop();
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
   
   cout<< "PostorderIterative: "<<endl;
   postOrderIterative(root);
   
   
   
   return 0;
}
