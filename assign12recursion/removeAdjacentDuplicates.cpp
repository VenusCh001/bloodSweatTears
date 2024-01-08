/* Q1 - Given a string, remove adjacent duplicates characters from it. In other words, remove all 
consecutive same characters except one using recursion.
Input: aabbbbcdd
Output: abcd */
#include<iostream> 
using namespace std; 
void f(string &str,int idx,string &result,int n){
    if(idx==0) {
        result+=str[idx];
        idx++;
    }
    if(idx==n){
        return;
    }
    if(str[idx]!=str[idx-1]){
        result+=str[idx];
    }f(str,idx+1,result,n);
}
int main() 
{ 
	string str="abbcddaaaerr";
    string result;
    int n=str.length();
    f(str,0,result,n);
    cout<<result;
	return 0; 
} 
