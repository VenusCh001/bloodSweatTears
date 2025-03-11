#include <bits/stdc++.h>

using namespace std;

int main(){
    int userinput;
    string ans = "yes";
    while (ans == "yes")
    {
        
        int num=rand()%50+1;
        cout<<"the random num is : "<<num<<endl;
        cout<<endl;
        cout << "do you wish to continue(y/n) ?";
        cin >> ans;
    }
    return 0;
}