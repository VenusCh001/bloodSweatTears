#include<iostream>
#include<list>
#include<vector>
using namespace std;

class hashing{
    
    int buckets;
    vector<list<int>> hashtable;
public:
        hashing(int size){
            buckets=size;
            hashtable.resize(buckets); 
        }

        // finding the hash value for the element to be stored in hashtable
        int finding_hashValue(int element){
            int index=element%buckets;
            return index;
        }

        // to fill the hashtable 
        void add_element(int element){
            int index=finding_hashValue(element);
            hashtable[index].push_back(element);
        }
};
int main(){
    hashing h(10);

h.add_element(12);
h.add_element(43);
h.add_element(91);

    return 0;
}