#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> pascaltriangle(int n){
    vector<vector<int>> pascal(n);
    for(int i=0;i<n;i++){
        pascal[i].resize(i+1);
        for(int j=0;j<=i;j++){
            
                if(j==0 || j==i){
                    pascal[i][j]=1;
                }
                else{
                    pascal[i][j]=pascal[i-1][j-1]+pascal[i-1][j];
                }
            
        }
            
    }
    return pascal;

}
int main(){
    int n;
    cin>>n;
    vector<vector<int>> ans;
    ans=pascaltriangle(n);
    vector<vector<int>> ques(43,vector<int>(2));
    cout<<"write your question :"<<endl;
    for(int i=0;i<ques.size();i++){
        for(int j=0;j<2;j++){
            cin>>ques[i][j];
        }
    }
    int sum=0;
    for(int i=0;i<ques.size();i++){
        sum+=ans[ques[i][0]][ques[i][1]];
        
    }
    cout<<sum;
    
    return 0;
}