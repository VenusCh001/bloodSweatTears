#include<bits/stdc++.h>
#include "bst.cpp"
using namespace std;
node *buildtree(vector<int>&preorder,int &index,int &ub){
    if(index>=preorder.size())return NULL;
    if(preorder[index]>=ub)return NULL;
    node*root=new node(preorder[index]);
    index++;
    root->left=buildtree(preorder,index,root->data);
    root->right=buildtree(preorder,index,ub);
    return root;
}
int main(){
    //make tree from preorder only
    vector<int>preorder={10,5,3,8,20,15,25};

int index=0;
int ub=INT_MAX;

    node*root=buildtree(preorder,index,ub);
    bst*myfirstbst=new bst(root);

    myfirstbst->display(root);
    return 0;
}