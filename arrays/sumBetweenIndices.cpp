#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"enter number of elements in the array : ";
    int n;cin>>n;

    vector <int> v(n+1,0);

    for(int i=1;i<v.size();i++){
        cin>>v[i];
    }

    for(int i=0;i<v.size();i++){
        v[i+1]+=v[i];
    }

    cout<<endl<<"enter the number of queries ";
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int l,r;
        cin>>l>>r;
        cout<<"ans : "<<(v[r]-v[l-1]);
        cout<<endl;
    }
    
    
    return 0;
}
