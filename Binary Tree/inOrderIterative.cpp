
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

void inOrderIterative(Node* root){
    stack<Node*> s;
    Node* current=root;
    
    while(current!=NULL || !s.empty()){
        
        while(current!=NULL){
            s.push(current);
            current=current->left;
        }
        
        current=s.top();
        s.pop();
        cout<<current->data<<" ";
        
        current=current->right;
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
   
   cout<< "InorderIterative: "<<endl;
   inOrderIterative(root);
   
   
   
   return 0;
}
