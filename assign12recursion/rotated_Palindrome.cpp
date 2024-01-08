/* Q3 - Given a string, check if it is a rotated palindrome or not using recursion. “baabcc” is a 
rotated palindrome as it is a rotation of palindrome “abccba
Input 1: cbaabcd
Output 1 : yes
Explanation : if we rotate this string 3 times it will turn out to be abcdcba which is a palindrome.
Input 2 : abcdedca
Output 2 : no
 */
#include<iostream> 
using namespace std; 
int palindrome(string &rotated_str,int i,int j){
    if(i>=j){
        return 1;
    }
    if(rotated_str[i]!=rotated_str[j]){
        return 0;
    }
   palindrome(rotated_str,i+1,j-1);
}
void f(string &str,int idx,int n,string rotated_str){
    if(idx==n){
        if(palindrome(rotated_str,0,n-1)==0){
            cout<<"no";
        }
        return;
    }
    for(int k=0;k<n;k++){
        if(k==n-1){
            rotated_str=str[k]+rotated_str;
        }
        else{
            rotated_str+=str[k];
        }
    }
    cout<<rotated_str<<endl;
    if(palindrome(rotated_str,0,n-1)==1){
         cout<<"yes";return;
    }
    else{
        f(rotated_str,idx+1,n,"");return;
    }cout<<"no";
}
int main() 
{ 
	string str="abcdedca";
    string rotated_str="";
    int n=str.size();
    f(str,0,n,rotated_str);
	return 0; 
} 
