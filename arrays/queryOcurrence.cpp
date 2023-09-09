#include <iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cout<<"enter number of elements in array ";
    cin>>n;
    cout<<"enter elements : "<<endl;
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    const int N= 1e5;
    cout<<N<<endl;
	
    vector <int> freq(N,0);
    cout<<freq[0]<<" "<<freq[10]<<endl;

	for(int i=0;i<n;i++){
        freq[v[i]]++;
    }
    int q,element;

    cout<<endl<<"enter number of queries ";
    cin>>q;

    cout<<endl<<"enter queries "<<endl;
    while(q--){
        cin>>element;
        cout<<"freq = "<<freq[element]<<endl;
    } 
	return 0;
	}
	

