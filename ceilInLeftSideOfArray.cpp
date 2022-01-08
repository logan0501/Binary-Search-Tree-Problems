#include<bits/stdc++.h>
using namespace std;

void ceilinLeft(vector<int> v){
    set<int> s;
    cout<<-1<<" ";
    s.insert(v[0]);
    for(int i=1;i<v.size();i++){
        if(s.lower_bound(v[i]) !=s.end()){
            cout<<*s.upper_bound(v[i])<<" ";
        }else{
            cout<<-1<<" ";
        }
        s.insert(v[i]);
    }
}
int main(){
    vector<int> v{2,8,30,15,25,12};
    ceilinLeft(v);
}