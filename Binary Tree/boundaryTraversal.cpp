
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

void printLeaves(Node* root){
    
    if(root){
        printLeaves(root->left);
        
        if(!(root->left) && !(root->right))
            cout<<root->data<<" ";
        printLeaves(root->right);
        
    }
}


void printBoundaryLeft(Node* root){
    
    if(root){
        
        if(root->left){
            cout<< root->data<<" ";
            printBoundaryLeft(root->left);
        }else if(root->right){
            cout<<root->data<<" ";
            printBoundaryLeft(root->right);
        }
    }
}

void printBoundaryRight(Node* root){
    if(root){
        if(root->right){
            printBoundaryRight(root->left);
            cout<< root->data<<" ";
            
        }else if(root->left){
            printBoundaryLeft(root->left);
            cout<<root->data<<" ";
            
        }
    }
}


void printBoundary(Node* root){
    if(root){
        cout<<root->data<<" ";
        printBoundaryLeft(root->left);
        
        printLeaves(root->left);
        printLeaves(root->right);
        
        printBoundaryRight(root->right);
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
   
   cout<<"Boundary Traversal:"<<"\n";
   printBoundary(root);
   
   
   return 0;
}
