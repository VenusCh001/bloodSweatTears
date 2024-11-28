#include<iostream>
using namespace std;
class node{
    public:
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
    bst(node*val){
        root=val;
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
    


