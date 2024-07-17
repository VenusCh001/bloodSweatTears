#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> nge(vector<int>inputArr){
    stack<int>st;
    vector<int>output(inputArr.size(),-1);
    for(int i=0;i<inputArr.size();i++){
        while(not st.empty() and inputArr[i]<inputArr[st.top()]){
            output[st.top()]=inputArr[i];
            st.pop();
        }
        st.push(i);
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
    vector<int>output = nge(inputArr);
    display(output);
    
    return 0;
}