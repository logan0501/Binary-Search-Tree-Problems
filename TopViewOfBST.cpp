#include<bits/stdc++.h>
using namespace std;

// Link - https://practice.geeksforgeeks.org/problems/top-view-of-binary-tree/1

struct Node
{
    int data;
    Node* left;
    Node* right;
};

vector<int> topView(Node *root)
{   
    if(!root)return {};
    vector<int> v;
    queue<pair<Node*,int>> q;
    map<int,int> um;
    q.push({root,0});
    while(!q.empty()){
        auto p = q.front();
        Node* curr = p.first;
        int hd = p.second;
           q.pop();
        if(um.find(hd)==um.end()){
            um[hd]=curr->data;
        }
     
        if(curr->left)q.push({curr->left,hd-1});
        if(curr->right)q.push({curr->right,hd+1});
    }
    for(auto a:um)v.push_back(a.second);
    return v;
}
int main(){

    return 0;
}