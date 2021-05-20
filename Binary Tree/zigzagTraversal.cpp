
#include<bits/stdc++.h>
#include<stack>
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

void zigzagTraversal(Node* root){
    
    if(root==NULL)
       return;
    
    stack<Node*> currLevel;
    stack<Node*> nextLevel;
    
    bool lefttoright=true;
    
    currLevel.push(root);
    
    while(!currLevel.empty()){
        Node* temp=currLevel.top();
        currLevel.pop();
    
        if(temp){
            cout<<temp->data<<" ";
        
        
        if(lefttoright){
            if(temp->left){
                nextLevel.push(temp->left);
            }
            if(temp->right){
                nextLevel.push(temp->right);
            }
        }
        
        
        //right to left
            else{
                if(temp->right){
                    nextLevel.push(temp->right);
                  }
                if(temp->left){
                nextLevel.push(temp->left);
                }
            }
        }
        
        if (currLevel.empty()){
            lefttoright=!lefttoright;
            swap(currLevel,nextLevel);
        }
    
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
   
   cout<< "zigzagTraversal: "<<endl;
   zigzagTraversal(root);
   
   
   
   return 0;
}
