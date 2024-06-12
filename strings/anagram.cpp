#include<iostream>
#include<vector>
#include<string>
using namespace std;

void anagram(string str1,string str2){
    vector<int> freq(26,0);
    for(int i=0;i<str1.length();i++){
        freq[str1[i]-'a']++;
        freq[str1[i]-'a']--;
    }
    for(int i=0;i<26;i++){
        if(freq[i]!=0){
            cout<<"no";
            return;
        }
    }
    cout<<"yes"<<endl;
    
}
int main(){
    string str1="bank";
    string str2="atm";
    anagram(str1,str2);
    return 0;
}
