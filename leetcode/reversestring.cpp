#include<iostream>
#include<algorithm>
using namespace std;
string f(string &str){
    reverse(str.begin(),str.end());
    cout<<"reversed string is --> "<<str<<endl;

    int count;
    int j=0;

    for(int i=0;i<str.size();){
        count=0;
        while(str[i]!=' ' and i<str.size()){
            count++;
            i++;
        }
        reverse(str.begin()+j,str.begin()+j+count);
        j=i+1;
        i++;
    }
    return str;
}
    
int main(){
    string str="yourself upgrade to have you";
    cout<<f(str)<<endl;
    return 0;
}