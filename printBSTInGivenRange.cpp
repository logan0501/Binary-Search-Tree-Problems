#include<bits/stdc++.h>
using namespace std;

// Link - https://practice.geeksforgeeks.org/problems/print-bst-elements-in-given-range/1

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int x){
        data=x;
        left=right=NULL;
    }
};
vector<int> v;
void traverse(Node *root, int low, int high){
    
   if(!root) return ;
    traverse(root->left,low,high);
    if(root->data>=low && root->data <= high){
        v.push_back(root->data);
    }
   
    traverse(root->right,low,high);
}

vector<int> printNearNodes(Node *root, int low, int high) {
    traverse(root,low,high);
    return v;
 }
int main(){

    return 0;
}