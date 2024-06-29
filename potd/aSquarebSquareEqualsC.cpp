#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool judgeSquareSum(int c) {
        for(int a=0;a<=sqrt(c);a++){
            cout<<"a : "<<a<<endl;
            int b=c-a*a;
            cout<<"b : "<<b<<endl;
            if(b==int(b)) return true;
        }
        return false;
        
    }
};
int main(){
    Solution s;
    cout<<endl;
    cout<<s.judgeSquareSum(10);
    return 0;
}