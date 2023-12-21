#include<iostream>
using namespace std;
int f(int n,int m){
    cout<<"n : "<<n<<" m :"<<m<<endl;
    if(m<=1){
        return (n*(n+1))/2;
    }
    else{
        if(n<m-1){
            return 0;
        }
        cout<<
        int sum=n+f(n-1,m) ;
        return f(sum,1);
    }

}
int main(){
    int m, n;
    cout<<"enter m: "; cin>>m;
    cout<<"enter n: "; cin>>n;
    int ans=f(n,m);
    cout<<ans;
    return 0;
}



















