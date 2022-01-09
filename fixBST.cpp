#include<bits/stdc++.h>
using namespace std;
// Link - https://practice.geeksforgeeks.org/problems/fixed-two-nodes-of-a-bst/1

struct Node
{
    int data;
    Node *left, *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

void helper(Node* root,Node* &prev,Node* &first,Node* &second){
    if(!root)return;
    helper(root->left,prev,first,second);
    if(prev && root->data < prev->data){
        if(!first)first=prev;
        second =root;
    }
    prev=root;
    helper(root->right,prev,first,second);
}
void correctBST( struct Node* root )
{
    Node* prev = NULL,*first =NULL,*second =NULL;   
    helper(root,prev,first,second);
    swap(first->data,second->data);
}
int main(){

}