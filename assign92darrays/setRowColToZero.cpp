//Q3 - Given a m*n integer matrix. If an element of the matrix is 0 then set the complete row and
//column of that element to 0. Make the changes inplace and print the matrix.
#include<iostream>
#include<vector>
using namespace std;
int main(){
int r,c;
cout<<"enter rows  :"<<endl;cin>>r;
cout<<"enter columns  :"<<endl;cin>>c;
int matrix[r][c];
vector<int> v1(r,0);
vector<int> v2(c,0);

cout<<"enter elements  :"<<endl;
for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>matrix[i][j];
        }
    }
cout<<endl;

cout<<" matrix is :"<<endl;
for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        if(matrix[i][j]==0){
            v1[i]++;v2[j]++;
        }
    }
}
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        if(v1[i]>0 && v2[j]>0){
            for(int k=0;k<c;k++){
                matrix[i][k]=0;
            }
            for(int k=0;k<r;k++){
                matrix[k][j]=0;
            }
            v1[i]--;v2[j]--;
        }
        else{
            continue;
            }
    }
}

cout<<endl;
cout<<"new matrix is :"<<endl;
for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}


