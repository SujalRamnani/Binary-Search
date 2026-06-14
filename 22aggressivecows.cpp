#include<bits/stdc++.h>
using namespace std;
 bool isPossible(vector<int> &arr,int mid,int cows){
      int count=1;
      int last=arr[0];
      for(int i=1;i<arr.size();i++){
          if (arr[i]-last>=mid){
              count++;
              last=arr[i];
          }
      }
      if (count>=cows) return true;
      return false;
  }
int main(){
    vector<int> arr={10, 1, 2, 7, 5};int cows=3;
    int n=arr.size();
        sort(arr.begin(),arr.end());
        int low=1;
        int maxi=*max_element(arr.begin(),arr.end());
        int mini=*min_element(arr.begin(),arr.end());
        int high=maxi-mini;
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if (isPossible(arr,mid,cows)==true){
                ans=mid;
                low=mid+1; ///this might be my ans but i want to maximise the distance
            }
            else high=mid-1;
            
        }
        cout<< ans;
    return 0;
}