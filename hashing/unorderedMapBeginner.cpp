#include<iostream>
#include<unordered_map>
using namespace std;
int main(){

    //declared an unordered map
    unordered_map<int,string> studentData;

    //inserted the key value pairs in the unordered map
    studentData[222]="venus";
    studentData[122]="star";
    studentData[300]="alexa";
    studentData.insert(make_pair(100,"nemo"));
    studentData.insert(make_pair(222,"starfish"));

    //print the key value pairs
    for(auto record:studentData){
        cout<<record.first<<" - "<<record.second<<endl;
    }

    cout<<"removing the data of 122"<<endl;
    //remove/delete/erase a key value pair
    studentData.erase(122);

    //printing the modified unordered map
    //declaring the iterator for our unordered map
    unordered_map<int,string>:: iterator itrr;
    for(itrr=studentData.begin();itrr!=studentData.end();itrr++){
        cout<<itrr->first<<" - "<<itrr->second<<endl;
    }

    //finding the key value pair
    cout<<"finding status 122"<<endl;
    itrr=studentData.find(122);
    if(itrr!=studentData.end()){
        cout<<itrr->first<<" "<<itrr->second<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }




    return 0;
}