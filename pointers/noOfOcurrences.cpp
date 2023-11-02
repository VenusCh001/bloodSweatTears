//- Write a function that returns the first character, last character and the number of
//occurrences of ‘t’ in a string input by user.
#include<iostream>
#include<string.h>
using namespace std;
void findFirstAndLast(string str,char ch,int *first,int *last){
    for(int i=0;i<str.size();i++){
        if(str[i]==ch){
            *first=i;
            break;
        }
    }
    for(int i=str.size()-1;i>=0;i--){
        if(str[i]==ch){
            *last=i;
            break;
        }
    }
}
int main(){
    string str;char ch;
    cout<<"enter your string";cin>>str;
    cout<<"enter character";cin>>ch;

    int first,last;
    int *pf=&first;
    int *pl=&last;
    findFirstAndLast(str,ch,pf,pl);

    cout<<"first occurrrence at"<<first<<"\n";
    cout<<"last occurrrence at"<<last<<"\n";

    return 0;
}