/* Q2 - Write a recursive program to efficiently print the reverse of a given string in C++.
 */
#include<iostream> 
using namespace std; 
void f(string &str,int idx){
    if(idx==str.size()) {
        return;
    }
    f(str,idx+1);
    cout<<str[idx];
}
int main() 
{ 
	string str="pwskills";
    f(str,0);
	return 0; 
} 
