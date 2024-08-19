#include<iostream>
using namespace std;
class node{
    int data;
    node*left;
    node*right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
    friend class bst;
};
class bst{
    public:
    node*root;
    bst(){
        root=NULL;
    }
    void insertbst(node*&root,int val){

        node*newnode=new node(val);
        if(root==NULL){
            root=newnode;
            return;
        }
        node*temp=root;
        while(temp){
            if(temp->data>val){
                if(temp->left==NULL){
                    temp->left=newnode;
                    return;
                }
                temp=temp->left;
            }
            else if(temp->data<val){
                if(temp->right==NULL){
                    temp->right=newnode;
                    return;
                }
                temp=temp->right;
            }
        }
    }
    void display(node*root){
        if(root==NULL)return;
        cout<<root->data<<" ";
        display(root->left);
        display(root->right);
    }
    void deleteleafnodes(node*&root){
        if(root==NULL)return;
        if(root->left==NULL and root->right==NULL){
            delete(root);
            root=NULL;
            return;
        }
        deleteleafnodes(root->left);
        deleteleafnodes(root->right);
    }
};
    


int main(){
    bst bst1;
    bst1.insertbst(bst1.root,20);
    bst1.insertbst(bst1.root,10);
    bst1.insertbst(bst1.root,30);
    bst1.insertbst(bst1.root,8);
    bst1.insertbst(bst1.root,12);
    bst1.insertbst(bst1.root,25);
    bst1.insertbst(bst1.root,35);
    bst1.display(bst1.root);
    bst1.deleteleafnodes(bst1.root);
    cout<<endl;
    bst1.display(bst1.root);
    return 0;
}