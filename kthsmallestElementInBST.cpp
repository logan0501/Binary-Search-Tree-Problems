#include<bits\stdc++.h>
using namespace std;
// Link - https://practice.geeksforgeeks.org/problems/find-k-th-smallest-element-in-bst/1/

struct Node{
    int data;
    Node* left,*right;
    Node(int x){
        data=x;
        left=right=NULL;
    }
};

Node* newNode(int x){
    Node* temp = new Node(x);
    return temp;
}
Node* insert(Node* root, int x){
    if(!root)return newNode(x);
    if(root->data < x) root->right = insert(root->right,x);
    else root->left = insert(root->left,x);
    return root;
}
vector<int> v;
void inorder(Node* root){
     if(!root)
        {
            return ;
        }
        
        inorder(root->left);
        v.push_back(root->data);
        inorder(root->right);
}
int KthSmallestElement(Node* node,int k){
    inorder(node);
    if(k>v.size())return -1;
    return v[k-1];
}
int main(){
    Node *root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
    cout<<KthSmallestElement(root,7);
    return 0;
}