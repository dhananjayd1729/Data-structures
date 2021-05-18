
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


void printLevelOrder(Node *root){
    
    if(root==NULL){
        return;
    }
    
    queue <Node*> q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
        
        Node* node=q.front();
        q.pop();
        if(node!=NULL){
            cout<< node->data <<" ";
            if(node->left){
              q.push(node->left);
            }if(node->right){
                q.push(node->right);
            }
        }else if(!q.empty()){
            q.push(NULL);
        }
        
    }
}



void swap(Node* node){
    if(!node)
       return;
       
    swap(node->left);
    swap(node->right);
    
    Node* temp;
    temp=node->left;
    node->left=node->right;
    node->right=temp;
    return;
}

Node* invertTree(Node* root){
    swap(root);
    return root;
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
   invertTree(root);
   cout<< " "<<endl;
   printLevelOrder(root);
   
   return 0;
}
