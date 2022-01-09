#include<bits/stdc++.h>
using namespace std;

// Link - https://practice.geeksforgeeks.org/problems/vertical-sum/1

struct Node{
int data;
Node *left,*right;
};

void helper(Node *root,unordered_map<int,int> &um,int hd){
    if(!root)return;
    helper(root->left,um,hd-1);
    um[hd]+=root->data;
    helper(root->right,um,hd+1);
}
vector <int> verticalSum(Node *root) {
    unordered_map<int,int> um;
    vector<int> v;
    helper(root,um,0);
    for(auto a:um)v.push_back(a.second);
    return v;
}
int main(){
    return 0;
}