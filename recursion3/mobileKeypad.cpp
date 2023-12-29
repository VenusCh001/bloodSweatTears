#include <iostream>
#include<vector>
using namespace std;
void f(string &str,int i,string result,vector<string>&li,vector<string>&v){
    if(i==str.size()){
        li.push_back(result);
        return;
    }
    int digit=str[i]-'0';
    for(int j=0;j<v[digit].size();j++){
        f(str,i+1,result+v[digit][j],li,v);
    }
    return;
}
int main(){
    string str="23";
    vector<string>li;
    vector<string>v(10);
    v={" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    f(str,0," ",li,v);
    for(int j=0;j<li.size();j++){
        cout<<li[j]<<" ";
    }
    return 0;
}