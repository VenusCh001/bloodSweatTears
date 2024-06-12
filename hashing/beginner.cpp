#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> student_list;
    student_list[222]="venus";
    student_list[223]="ritika";
    for(auto element:student_list){
        cout<<"roll no is "<<element.first<<endl;
        cout<<"name is "<<element.second<<endl;
    }
    return 0;
}