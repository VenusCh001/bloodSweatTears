#include<iostream>
using namespace std;
int findGcd(int x, int y)
{
    int num,ans=0;
    (x<y) ? num=x:num=y;
    cout<<num<<endl;
    for(int i=1;i<num/2;i++){
        if((x%i==0)&&(y%i==0)){
            ans=i;
        }
    }
    return ans;
}
int main(){
    int x,y;
    cout<<"eneter x: ";cin>>x;
    cout<<"eneter y: ";
    cin>>y;
    cout<<findGcd(x,y);
    return 0;
}