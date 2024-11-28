#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int id;
    student(string name,int id){
        this->name=name;
        this->id=id;
    }
};
int main(){
    student *s1=new student("venus",32);
    cout<<s1->name<<endl;
    cout<<s1->id<<endl;
}