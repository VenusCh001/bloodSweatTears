#include<iostream>
using namespace std;

void input_elements(int n,int matrix[n][n]){
for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
}
void print_matrix(int n,int matrix[n][n]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
int n;
cin>>n;
int matrix1[n][n], matrix2[n][n],matrix3[n][n];

cout<<"enter elements for 1 :"<<endl;
input_elements(n,matrix1[n][n]);
cout<<"enter elements for 2 :"<<endl;
input_elements(n,matrix2[n][n]);

for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                cout<<i<<" "<<j<<" "<<k<<" ";
                 matrix3[i][j]+=(matrix1[i][k]*matrix2[k][j]);        
            }
        }
    }

cout<<endl<<"matrix 1 is :"<<endl;
print_matrix(n, matrix1[n][n]);
cout<<endl<<"matrix 2 is :"<<endl;
print_matrix(n, matrix2[n][n]);
cout<<endl<<"multiplied matrix is :"<<endl;
print_matrix(n, matrix3[n][n]);

    

    return 0;
}


