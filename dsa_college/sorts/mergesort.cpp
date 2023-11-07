#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int  left, int  mid,int right)
{
	int  n1 = mid - left + 1;
	int  n2 = right - mid;
	int a[n1];int b[n2];
	for (int i = 0; i < n1; i++)
		a[i] = arr[left + i];
	for (int j = 0; j < n2; j++)
		b[j] = arr[mid + 1 + j];

	int i = 0, j = 0;int k = left;
	while (i < n1 && j < n2) {
		if (a[i]<b[j]) {
			arr[k]= a[i];
			i++;k++;}
		else {
			arr[k]= b[j];
			j++;k++;}
	}
	while (i < n1) {
		arr[k]= a[i];
		i++;k++;
	}
	while (j < n2) {
		arr[k]= b[j];
		j++;k++;
	}
	
}
void mergeSort(int arr[], int  begin, int  end)
{
	if (begin < end){
        int mid = (begin+end) / 2;
	    mergeSort(arr, begin, mid);
	    mergeSort(arr, mid + 1, end);
	    merge(arr, begin, mid, end);
    }	}
int main()
{
	int arr[] = { 12, 11, 13, 5, 6, 7 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);
    cout << "Given array is \n";
    for (int i = 0; i < arr_size; i++)
		cout << arr[i] << " ";	
	mergeSort(arr, 0, arr_size - 1);
	cout << "\nSorted arr is \n";
    for (int i = 0; i < arr_size; i++)
		cout << arr[i] << " ";	
cout<<endl;
cout<<"name-venus chaudhary"<<endl;
cout<<"id-22201012022";
return 0;
}

