#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string solve(string encoded_string,int ptr){
    int n=encoded_string.size();
    string str;
    string num;
    int i=ptr-1;
    while(encoded_string[i]!='['){
        str+=encoded_string[i];
        i--;
    }
    i--;
    while(encoded_string[i]<='9' and encoded_string[i]>='0'){
        num+=encoded_string[i];
        i--;
    }
    reverse(str.begin(),str.end());
    reverse(num.begin(),num.end());
    int number=stoi(num);
    string sub_output="";
    while(number--){
        sub_output+=str;
    }
    i++;
    string output_string="";
    output_string=encoded_string.substr(0,i);
    int size_sub_output=sub_output.size();
    for(int j=0;j<size_sub_output;j++){
            output_string+=sub_output[j];
        
    }
    output_string+=encoded_string.substr(ptr+1,encoded_string.size()-ptr+1);
    return output_string;
    }

int main(){
    string encoded_string,output_string;
    cin>>encoded_string;
    for(int i=0;i<encoded_string.size();i++){
        if(encoded_string[i]==']'){
            output_string=solve(encoded_string,i);
            encoded_string=output_string;
            i=0;
        }
    }
    cout<<encoded_string<<endl;
    return 0;
}