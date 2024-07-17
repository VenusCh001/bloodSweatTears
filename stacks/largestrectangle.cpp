#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

vector<int> nextSmaller(vector<int>arr){
    vector<int>output2(arr.size(),-1);
    stack<int>st;
    for(int i=0;i<arr.size();i++){
        while(not st.empty() and arr[st.top()]>arr[i]){
            output2[st.top()]=i-st.top();
            st.pop();
        }
        st.push(i);
    }
    for(int i=0;i<arr.size();i++){
        if(output2[i]==-1) output2[i]=arr.size()-i;
    }
    return output2;
}
vector<int> previousSmaller(vector<int>arr){
    vector<int>output1(arr.size(),-1);
    stack<int>st;
    reverse(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        while(not st.empty() and arr[st.top()]>arr[i]){
            output1[arr.size()-st.top()-1]=i-st.top()-1;
            st.pop();
        }
        st.push(i);
    }
    for(int i=0;i<arr.size();i++){
        if(output1[i]==-1) output1[i]=i;
    }
    return output1;
}
void display(vector<int>arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    cout<<"enter n:";
    int n;cin>>n;
    vector<int>heights(n);
    cout<<"enter values : "<<endl;
    for(int i=0;i<n;i++) cin>>heights[i];
    display(heights);
    vector<int>output1(heights.size());
    vector<int>output2(heights.size());

    output1=previousSmaller(heights);
    display(output1);cout<<endl;
    output2=nextSmaller(heights);
    display(output2);cout<<endl;

    int maxArea=0;
    for(int i =0;i<output1.size();i++){
        maxArea=max(maxArea,heights[i]*(output1[i]+output2[i]));
    }
    cout<<"maxArea : "<<maxArea;
    return 0;
}
