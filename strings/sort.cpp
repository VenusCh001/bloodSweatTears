#include<iostream>
#include<vector>
#include<string>
using namespace std;

string countsort(string str){
    vector<int> freq(26,0);
    for(int i=0;i<str.length();i++){
        freq[str[i]-'a']++;
    }
    string outputString;
    for(int i=0;i<freq.size();i++){
        while(freq[i]--){
            outputString+=i+'a';
        }
    }
    return outputString;
}
int main(){
    string str="defgwpaza";
    cout<<countsort(str)<<endl;
    return 0;
}
