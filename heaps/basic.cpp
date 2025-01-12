#include <bits/stdc++.h>
using namespace std;
int const n=1e3;
void insertion(int minheap[],int target,int &size){
    size++;
    minheap[size]=target;
    int curr=size;
    while(curr>1 && minheap[curr]<minheap[curr/2]){
        swap(minheap[curr],minheap[curr/2]);
        curr=curr/2;
    }
}
void deletion(int maxheap[],int &size){
    maxheap[1]=maxheap[size];
    size--;
    int curr=1;
    while(2*curr<=size){
        int lc=2*curr;
        int rc=2*curr+1;
        int maxval=lc;
        if(rc<=size && maxheap[rc]>maxheap[lc]){
            maxval=rc;
        }
        swap(maxheap[curr],maxheap[maxval]);
        curr=maxval;
    }
}
int main() {
    int minheap[n]={-1,10,20,30,25,35,60};
    int maxheap[n]={-1,50,20,30,10,5,22,11};
    int target;cin>>target;
    int size=6;

    insertion(minheap,target,size);
    for(int i=1;i<=size;i++)cout<<minheap[i]<<" ";
    
    cout << endl << "Hello, World!" << endl;

    size=7;
    deletion(maxheap,size);
    for(int i=1;i<=size;i++)cout<<maxheap[i]<<" ";

    return 0;

}