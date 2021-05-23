
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



int areMirror(Node* a, Node* b){
    
    if(a==NULL and b==NULL) return true;
    
    if(a==NULL or b==NULL) return false;
    
    return a->data==b->data and areMirror(a->left,b->right) and areMirror(a->right, b->left);
}

int main()
{
   Node *a=new Node(1);
   Node *b = new Node(1);
   a->left=new Node(2);
   a->right=new Node(3);
   a->left->left=new Node(4);
   a->left->right=new Node(5);
   a->right->left=new Node(6);
   a->right->right=new Node(7);
   
   b->left = new Node(3);
   b->right = new Node(2);
   b->right->left = new Node(5);
   b->right->right =new Node(4);
   
  areMirror(a,b)? cout<< "yes" : cout << "No" <<endl;
   
   
   return 0;
}
