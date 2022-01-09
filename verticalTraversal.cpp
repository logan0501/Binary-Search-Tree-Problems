#include<bits/stdc++.h>
using namespace std;

// Link - https://practice.geeksforgeeks.org/problems/print-a-binary-tree-in-vertical-order/1

struct Node{
    int data;
    Node *left,*right;
    Node(int x){
        data = x;
        left=right=NULL;
    }
};
Node* newNode(int x){
    Node* temp = new Node(x);
    return temp;
}
vector<int> verticalOrder(Node *root)
{
    vector<int> v;
    if(!root)return v;
    map<int,vector<int>> um;
    queue<pair<Node*,int>> q;
    q.push({root,0});
    while(!q.empty()){
        auto p =q.front();
        Node* curr = p.first;
        int hd = p.second;
        um[hd].push_back(curr->data);
        q.pop();
        if(curr->left)q.push({curr->left,hd-1});
        if(curr->right)q.push({curr->right,hd+1});
    }
    for(auto it=um.begin();it!=um.end();it++){
            for(auto ele:it->second)
                v.push_back(ele);
        }
    return v;
}
int main(){

    return 0;
}