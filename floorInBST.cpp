#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int x){
        data=x;
        left=right=NULL;
    }
};

Node* newNode(int key)
{
    Node* temp = new Node(key);
    temp->left = temp->right = NULL;
    return temp;
}

Node* insert(Node* root, int key)
{
    if (!root)
        return newNode(key);
    if (key < root->data)
        root->left = insert(root->left, key);
    else
        root->right = insert(root->right, key);
    return root;
}
Node* floorInBST(Node* node,int x){
    if(!node)return NULL;
    Node* res=NULL;
    while(node){
        if(node->data == x)return node;
        else if(node->data < x){
            res=node;
            node=node->right;
        }else{
            node=node->left;
        }
    }
    return res;
}
int main(){
    Node* root = NULL;
    root = insert(root, 7);
    insert(root, 10);
    insert(root, 5);
    insert(root, 3);
    insert(root, 6);
    insert(root, 8);
    insert(root, 12);
    cout << floorInBST(root, 9)->data << endl;
    return 0;
}