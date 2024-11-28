#include<iostream>
using namespace std;
void gen(string s,string curr,int index){
    if(index==s.size()){
        cout<<curr<<endl;
        return;
    }
    gen(s,curr+s[index],index+1);
    gen(s,curr,index+1);

}
int main(){
    string s;
    cin>>s;
    gen(s,"",0);
    return 0;
}