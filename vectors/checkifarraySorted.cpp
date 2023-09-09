#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v(6);
    cout<<"enter the elements for vector "<<endl;
    for(int i=0;i<6;i++){
        cin>>v[i];
    }
    
    cout<<endl;
    
    
    bool flag=true;
    for(int i=0;i<v.size()-1;i++){
        if(v[i+1]<v[i]){
            flag=false;
        }
        
    }
    if (flag==1){
        cout<<"array is sorted";
    }
    else{
        cout<<"not sorted";
    }
return 0;

}