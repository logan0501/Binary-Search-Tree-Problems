#include<bits/stdc++.h>
using namespace std;

// Link - https://practice.geeksforgeeks.org/problems/search-a-node-in-bst/1

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int x){
        data=x;
        left=right=NULL;
    }
};

bool search(Node* root, int x) {
    if(!root)return false;
    if(root->data==x)return true;
    if(root->data<x)return search(root->right,x);
    else return search(root->left,x);
}

int main(){

    return 0;
}