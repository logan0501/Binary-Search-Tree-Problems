#include<bits/stdc++.h>
using namespace std;

// Link - https://practice.geeksforgeeks.org/problems/find-a-pair-with-given-target-in-bst/1/

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

bool helper(Node * root,unordered_set<int> &mp,int target){
    if(!root)return false;
    if(helper(root->left,mp,target))return true;
    if(mp.find(target-root->data)!=mp.end())
        return true;
    else mp.insert(root->data);
    return helper(root->right,mp,target);
}

int isPairPresent(struct Node *root, int target)
{   
    unordered_set<int> um;
    return helper(root,um,target);
}
int main(){
    return 0;
}