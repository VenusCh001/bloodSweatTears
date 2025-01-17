#include <bits/stdc++.h>
using namespace std;
void heapify(int arr[], int curr, int size)
{       
    while (2 * curr + 1 < size)
    {
        int leftindex = 2 * curr + 1;
        int rightindex = 2 * curr + 2;
        int minindex = leftindex ;
        if (rightindex < size && arr[rightindex] > arr[minindex])
        {
            minindex = rightindex;
        }
        if (arr[curr] <= arr[minindex])
        {
            swap(arr[curr], arr[minindex]);
        }
        curr = minindex;
    }
}
void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {40, 70, 22, 13, 56, 78, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    int curr = 0;
    for (int i = size/2-1; i>=0; i--)
    {
        heapify(arr, i, size);
    }
    print(arr,size);
    curr=0;
    int val=size;
    while(val>0){
        swap(arr[curr],arr[val-1]);
        val--;
        heapify(arr,0,val);
    }
    cout<<endl;
    print(arr,size);

    return 0;
}