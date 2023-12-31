#include <iostream>
#include<algorithm>
using namespace std;
#define n 100
class mystack{
    int *arr;
    int top;
    public:
    mystack(){
        arr=new int[n];
        top=-1;}
    void push(int x){
        if(top==n-1){
            return;}
        top++;
        arr[top]=x;}
    void pop(){
        if(top==-1){
            return;}
        top--;}
    int Top(){
    return arr[top];}
    bool isempty(){
        if( top==-1){
            return true;
            }return false;
        }
};
int precedence(char op) {
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    return 0; 
}
string infixToPrefix(string exp,mystack arr){
    reverse(exp.begin(),exp.end());
    string prefix;
    for (int i=0;i<exp.length();i++) {
        char c=exp[i];
        if (isalpha(c)) {
            prefix += c;}
        else if (c == ')') {
            arr.push(c);}
        else if (c == '(') {
            while (!arr.isempty() && arr.Top() != ')') {
                prefix += arr.Top();
                arr.pop();}
            if (!arr.isempty() && arr.Top() == ')') {
                arr.pop(); }}
        else  {
            while (!arr.isempty() && precedence(arr.Top()) > precedence(c)) {
                prefix += arr.Top();
                arr.pop();
            }
            arr.push(c);
        }}
    while (!arr.isempty()) {
        prefix += arr.Top();
        arr.pop();
    }
        reverse(exp.begin(),exp.end());
return prefix;}
int main() {
    mystack arr;
    string infix;
    cout << "Enter an infix expression: ";
    cin >> infix;
    string prefix = infixToPrefix(infix,arr);
    cout << "prefix expression: " << prefix << endl;
    cout<<"name=venus chaudhary "<<endl;
    cout<<"rollno=22201012022";
    return 0;
}

