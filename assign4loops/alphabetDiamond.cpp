#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"enter number of rows : ";
    cin>>row;
    
    for(int i=1;i<=row;i++){
        
            char alpha=65;
            for(int j=i;j<row;j++){
                cout<<" ";
            }
            for(int j=1;j<=(2*i-1);j++,alpha++){
                cout<<alpha;
            }
            cout<<endl;
            }

    for(int i=1;i<=row-1;i++){
        char alpha=65;
            for(int j=1;j<=i;j++){
                cout<<" ";
            }
            for(int j=2*i-1;j<=2*(row-1)-1;j++,alpha++){
                cout<<alpha;
            }
            cout<<endl;
        }
       
            
    
    return 0;
    }
   
   
    
