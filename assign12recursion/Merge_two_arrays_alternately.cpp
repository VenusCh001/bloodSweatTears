/* Q4 - Write a program to merge 2 strings alternately using recursion
Input1:
abcd
efgh
Output1:
aebfcgdh
Input2:
abet
po
Output2:
apboe */
#include<iostream> 
using namespace std; 
void f(string &str1,string &str2,int i ,int j,string &result,bool flag){
    if(i==str1.size() and j==str2.size()){
        return;
    }
    if(flag==1 and i!=str1.size()) {
        result+=str1[i];
        i++;
    }
    else if (flag==0 and j!=str2.size()){
        result+=str2[j];
        j++;
    }
    f(str1,str2,i,j,result,!flag);
}
int main() 
{ 
	string str1="abet";
	string str2="po";
    bool flag=true;
    string result;
    f(str1,str2,0,0,result,flag);
    cout<<result;
	return 0; 
} 
