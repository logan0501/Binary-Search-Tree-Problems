#include<bits/stdc++.h>
using namespace std;

// Link - https://practice.geeksforgeeks.org/problems/find-the-closest-element-in-bst/1

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=right=NULL;
    }
    
};

int minDiff(Node *root, int K)
{
    int res=INT_MAX;
    while(root){
        res=min(res,abs(root->data-K));
        if(root->data>K)root=root->left;
        else{
              root=root->right;
        }
    }
    return res;
}
int main(){

    return 0;
}