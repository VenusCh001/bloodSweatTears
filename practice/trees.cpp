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
};
node*insertion(node*root,int val){
    if(root==NULL){
        node*newnode=new node(val);
        return newnode;
    }
    if(root->data>val){
        root->left=insertion(root->left,val);
    }
    else if(root->data<val){
        root->right=insertion(root->right,val);
    }
    return root;
}
int height(node*root){
    if (root==NULL){
        return 0;
    }
    int leftdepth=height(root->left);
    int rightdepth=height(root->right);

    return max(leftdepth,rightdepth)+1;
}
void traversal(node*root){
    if(root==NULL)return;
    traversal(root->left);
        cout<<root->data<<" ";

    traversal(root->right);
}
int main(){
    node*root=new node(1);
    insertion(root,8);
    insertion(root,4);
 insertion(root,3);

traversal(root);
cout<<"the heift is"<<endl;
cout<<height(root);
    return 0;
}