#include<bits/stdc++.h>
using namespace std;


// Link - https://practice.geeksforgeeks.org/problems/minimum-element-in-bst/1#:~:text=The%20task%20is%20to%20complete,retutn%20%2D1%20in%20that%20case.&text=Expected%20Auxiliary%20Space%3A%20O(Height%20of%20the%20BST).

struct Node{
    int data;
    Node* left;
    Node* right;
};
int minValue(Node* root) {
    
    if(!root->left)return root->data;
    return minValue(root->left);

}

int main(){

    return 0;
}