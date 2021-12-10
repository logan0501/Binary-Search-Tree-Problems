#include<bits/stdc++.h>
using namespace std;

// Link - https://practice.geeksforgeeks.org/problems/delete-a-node-from-bst/1

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int x){
        data=x;
        left=right=NULL;
    }
};

Node* getSucessor(Node *root){
    root=root->right;
    while(root && root->right)root=root->left;
    return root;
}
Node *deleteNode(Node *root, int X) {
    if(!root)return NULL;
    if(root->data>X){
        root->left=deleteNode(root->left,X);
    }
    else if(root->data<X){
        root->right=deleteNode(root->right,X);
    }else{
        if(!root->left){
            Node *temp = root->right;
            delete root;
            return temp;
        }else if(!root->right){
            Node* temp = root->left;
            delete root;
            return temp;
        }else{
            Node* temp = getSucessor(root);
            root->data = temp->data;
            root->right=deleteNode(root->right,temp->data);
            
        }
        return root;
    }

}
int main(){

    return 0;
}