#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
vector<int> pge(vector<int>inputArr){
    stack<int>st;
    vector<int>output(inputArr.size(),-1);
    reverse(inputArr.begin(),inputArr.end());
    for(int i=0;i<inputArr.size();i++){
        while(not st.empty() and inputArr[st.top()]<inputArr[i]){
            output[inputArr.size()-st.top()-1]=i-st.top();
            st.pop();
        }
        st.push(i);
    }
    for(int i=0;i<output.size();i++){
        if(output[i]==-1) output[i]=i+1;
    }
     
    return output;
}
void display(vector<int>arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){

    cout<<"enter the no of elements : ";
    int n;cin>>n;
    cout<<"start entering the elements :--"<<endl;
    vector<int> inputArr(n);
    for(int i=0;i<n;i++){
        cin>>inputArr[i];
    }

    display(inputArr);
    vector<int>output = pge(inputArr);
    display(output);
    
    return 0;
}