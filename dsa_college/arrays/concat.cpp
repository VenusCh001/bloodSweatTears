#include<iostream>
using namespace std;
int main()
{
    int sizeOne,sizeTwo,arrOne[sizeOne],arrTwo[sizeTwo],i;
    cout<<"Enter the Size for First Array: ";cin>>sizeOne;
    cout<<"Enter the Size for second Array: ";cin>>sizeTwo;
    int arrMerge[sizeOne+sizeTwo];
    cout<<"Enter "<<sizeOne<<" Elements for First Array: ";
    for( i=0; i<sizeOne; i++){
        cin>>arrOne[i];
        arrMerge[i] = arrOne[i];
    }
    int k = i;
    cout<<"Enter "<<sizeTwo<<" Elements for Second Array: ";
    for(int i=0; i<sizeTwo; i++){
        cin>>arrTwo[i];
        arrMerge[k] = arrTwo[i];
        k++;
    }
    cout<<"\nThe New Array (Merged Array):\n";
    for(i=0; i<k; i++)
        cout<<arrMerge[i]<<" ";
    cout<<endl;
    cout<<"name=venus chaudhary "<<endl;
    cout<<"rollno=22201012022";
    return 0;
}