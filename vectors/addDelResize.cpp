#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v(5);
    
    cout<<"size "<<v.size()<<endl;
    cout<<"cap "<<v.capacity()<<endl;
    
    for(int i=0;i<5;i++){
        cout<<v[i];
        
    }
    cout<<endl;
    for(int i=0;i<5;i++){
        cin>>v[i];
        
    }
    cout<<endl;

    cout<<"size "<<v.size()<<endl;
    cout<<"cap "<<v.capacity()<<endl;
    for(int i=0;i<5;i++){
        cout<<v[i];
        
    }
    cout<<endl;

    v.pop_back();
    for(int i=0;i<5;i++){
        cout<<v[i];
        
    }
    
    cout<<"size "<<v.size()<<endl;
    cout<<"cap "<<v.capacity()<<endl;

}