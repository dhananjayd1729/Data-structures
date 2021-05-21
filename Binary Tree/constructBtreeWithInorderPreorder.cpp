
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

int idx=0;
unordered_map<int,int> m;
Node* solve(int pre[], int in[], int lb, int ub){
    if(lb>ub) return NULL;
    
    Node* res=new Node(pre[idx++]);
    if(lb==ub) return res;
    int mid=m[res->data];
    res->left=solve(pre, in,lb,mid-1);
    res->right=solve(pre,in,mid+1,ub);
    return res;
}

Node* buildTree(int in[], int pre[],int n){
    idx=0;
    m.clear();
    for(int i=0; i<n;i++) m[in[i]]=i;
    Node* root=solve(pre,in,0,n-1);
    return root;
}
void printPostOrder(Node* root){
    if(root==NULL)
       return;
       
    printPostOrder(root->left);
    printPostOrder(root->right);
    cout<<root->data<<" ";
}

int main()
{
   int in[]={3,1,4,0,5,2};
   int pre[]={0,1,3,4,2,5};
  
   Node* root= buildTree(in, pre, 6);
   printPostOrder(root);
   
   
   return 0;
}
