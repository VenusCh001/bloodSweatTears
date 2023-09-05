#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v(6);
    int x;
    cout<<"enter the elements for vector";
    for(int i=0;i<6;i++){
        cin>>v[i];
    }
    cout<<endl;
    for(int i=0;i<6;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"enter element you want to find : ";
    cin>>x;
     cout<<endl;
    for(int i=6;i>0;i--){
        if(v[i]==x){
            cout<<"index is "<<i+1;
            break;
        }
    }


}