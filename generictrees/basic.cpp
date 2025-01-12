#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    vector<node*>children;
    node(int data){
        this->data=data;
    }
};
void nge(node*root,int x,node* &ans){
    if(root==NULL)return;
    if(root->data>x && (ans==NULL || root->data<ans->data)){
        ans=root;
    }
    for(node*child:root->children){
        nge(child,x,ans);
    }
};
int main(){
    node*root=new node(20);
    root->children.push_back(new node(8));
    root->children.push_back(new node (22));
    root->children[0]->children.push_back(new node(4));
    root->children[0]->children.push_back(new node(12));
    root->children[0]->children[1]->children.push_back(new node(10));
    root->children[0]->children[1]->children.push_back(new node(14));
    node*ans=new node(INT_MAX);
    nge(root,10,ans);
    cout<<ans->data<<endl;
    return 0;
}