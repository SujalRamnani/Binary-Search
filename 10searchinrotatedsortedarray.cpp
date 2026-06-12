#include<bits/stdc++.h>
using namespace std;
int findPivot(vector<int> &arr,int low,int high,int target){
    while(low<high){
        int mid=low+(high-low)/2;
        if (arr[mid]>arr[high]){
            //gadbad go right
            low=mid+1;
        }
        else high=mid;
    }
    return low;
}
int bs(vector<int>& arr,int low,int high,int target){
    while(low<=high){
        int mid=low+(high-low)/2;
        if (arr[mid]==target) return mid;
        else if (arr[mid]<target) low=mid+1;
        else high=mid-1;
    }
    return -1;
}
int main(){
    vector<int> arr={4,5,6,7,0,1,2};int target=0;
    int n=arr.size();
        int low=0,high=n-1;
        int pivotIndx=findPivot(arr,low,high,target);

        int ans=bs(arr,0,pivotIndx-1,target);
      if (ans!=-1)  {
        cout<<ans;
        return 0;
      }
        ans=bs(arr,pivotIndx,n-1,target);
        cout<< ans;

    return 0;
}