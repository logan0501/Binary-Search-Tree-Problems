#include<bits/stdc++.h>
using namespace std;

// Link - https://practice.geeksforgeeks.org/problems/insert-a-node-in-a-bst/1

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int x){
        data=x;
        left=right=NULL;
    }
};

Node* insert(Node* root, int Key) {
    if(!root)return new Node(Key);
    else if(root->data<Key)root->right=insert(root->right,Key);
    else if(root->data>Key)root->left=insert(root->left,Key);
    return root;
}

int main(){

    return 0;
}