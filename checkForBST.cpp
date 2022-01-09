#include<bits/stdc++.h>
using namespace std;

// Link - https://practice.geeksforgeeks.org/problems/check-for-bst/1

struct Node{
    int key;
    Node *left, *right;
    Node(int x){
        key=x;
        left=right=NULL;
    }
};
Node* newNode(int x){
    Node* temp = new Node(x);
    return temp;
}
Node* insert(Node* root,int x){
    if(!root)return NULL;
    if(root->key < x)root->right = insert(root->right,x);
    else root->left = insert(root->left,x);
    return root;
}
// tricky solution and efficient one
bool checkBST(Node* root,int min,int max){
    if(!root)return true;
    return (root->key < max && root->key > min && checkBST(root->left,min,root->key) && checkBST(root->right,root->key,max));
}

bool isBST(Node* root) 
{
    
    return checkBST(root,INT_MIN,INT_MAX);
}

// bool isBST(Node* root){
//     static int prev=INT_MIN;
//     if(!root)return true;
//     if(!isBST(root->left))return false;
//     if(root->key <= prev)return false;
//     prev=root->key;
//     return isBST(root->right);
// }

int main(){
    Node *root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    if(isBST(root))
        cout<<"Is BST";
    else
        cout<<"Not a BST";
    return 0;
}