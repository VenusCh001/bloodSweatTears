#include<iostream>
using namespace std;
string f(string str,int idx,string result){
    if(idx==str.length()){
        return result;
    }
    result=str[idx];
    string pipa=f(str,idx+1,result)+f("def",idx+1,result);
    cout<<pipa<<" ";
}
int main(){
    string str,result;
    f("abc",0,result);
    return 0;
}
//res=a,b,c
//idx=0,1,2