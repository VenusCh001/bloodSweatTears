#include<iostream>
#include<vector>
using namespace std;
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0;int j=0;int k;
        int m=nums1.size();int n=nums2.size();
        int nums3[m+n];
        int n3=m+n;
        double ans;
        for(k=0;k<n3;k++){
            if(nums1[i]<nums2[j]){
                nums3[k]=nums1[i++];
            }
            else{
                nums3[k]=nums2[j++];
            }
        }
        while(i<m){
            nums3[k++]=nums1[i++];
        }
        while (j<n){
            nums3[k++]=nums2[j++];
        }
        if(n3%2==0){        // even number of elements
            ans=(nums3[n3/2]+nums3[(n3-1)/2])/2;
        }
        else{               // odd number of elements
            ans=nums3[n3/2];
        }
        return ans;
    }
int main(){
    vector<int> nums1={1,3};
    vector<int> nums2={2,4};
    cout<<findMedianSortedArrays(nums1,nums2);;
}