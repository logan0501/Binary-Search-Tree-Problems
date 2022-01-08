#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left,*right;
    Node(int x){
        data =x;
        left =right=NULL;
    }
};
Node* newNode(int x){
    Node* temp = new Node(x);
    return temp;
}
Node* insert(Node *root,int x){
    if(!root)return newNode(x);
    if(root->data < x) root->right = insert(root->right,x);
    else root->left = insert(root->left,x);
    return root;
}

Node* ceilInBST(Node* root,int x){
    Node* res=NULL;
    if(!root)return NULL;
    while(root){
        if(root->data == x ){
            return root;
        }
        else if( root->data < x){
        root=root->right;
        }else{
            res=root;
            root=root->left;
        }
    }
   return res;
}
int main ()
{   
  Node* root = NULL;
    root = insert(root, 7);
    insert(root, 10);
    insert(root, 5);
    insert(root, 3);
    insert(root, 6);
    insert(root, 8);
    insert(root, 12);
    cout << ceilInBST(root, 9)->data << endl;
    return 0;
}