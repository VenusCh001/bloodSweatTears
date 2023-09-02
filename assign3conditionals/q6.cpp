//Write a program to calculate marks to grades . Follow the conversion rule as given below :
#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter marks = ";
    cin>>marks;
    if ((marks>90)&&(marks<100)){
        cout<<"your grade is A+";
    }
    else if ((marks>80)&&(marks<90)){
        cout<<"your grade is A";
    }
    else if ((marks>70)&&(marks<80)){
        cout<<"your grade is B+";
    }
    else if ((marks>60)&&(marks<70)){
        cout<<"your grade is B+";
    }
    else if ((marks>50)&&(marks<60)){
        cout<<"your grade is C";
    }
    else if ((marks>40)&&(marks<50)){
        cout<<"your grade is D";
    }
    else if ((marks>30)&&(marks<40)){
        cout<<"your grade is E";
    }
    else{
        cout<<"your grade is F";
    }
    return 0;
}