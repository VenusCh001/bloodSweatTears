#include<bits/stdc++.h>
using namespace std;
string removeKdigits(string num, int k) {
        int numSize=num.size();
        int minimum=INT_MAX;
        if(num.size()==k) return"0";
        for(int i=0;i<=numSize-k;i++){
            int value=stoi(num.substr(0,i)+num.substr(i+k,numSize-1));
            cout<<value<<endl;
            minimum=min(value,minimum);
        }
        for(int i=0;i<k;i++){
            int value=stoi(num.substr(i,numSize-k));
                        cout<<value<<endl;

            minimum=min(value,minimum);
        }
        string result=to_string(minimum);
        return result;
        
    }
int main(){
    string inputString;
    int k;
    cin>>inputString;
    cin>>k;
    removeKdigits(inputString,k);
    return 0;
}