#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool isomorphic(string s1,string s2){
    vector<int> check(26,0);
    for(int i=0;i<s1.size();i++){
        if(check[s1[i]-'a']==0 and check[s2[i]-'a']==0){
            check[s1[i]-'a']=s2[i];
            check[s2[i]-'a']=s1[i];
        }
        else{
            if(check[s1[i]-'a']!=s2[i] and check[s2[i]-'a']!=s1[i]) return false;
        }
    }
    return true;
}

int main(){
    string s1,s2;
    cin>>s1>>s2;
    if(isomorphic(s1,s2)){
        cout<<"yes they are isomorphic";
    } 
    else{
        cout<<"no"<<endl;
    }
    return 0;
}
