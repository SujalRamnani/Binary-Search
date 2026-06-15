////same painter's partition problem

#include<bits/stdc++.h>
using namespace std;
bool isPossible(vector<int>& arr,int mid,int k){
      int sum=0;int count=1;
      for(int i=0;i<arr.size();i++){
          if (arr[i]+sum<=mid) sum+=arr[i];
          else if (arr[i]+sum>mid){
              ///agle painter pe jao
              count++;
              if (arr[i]>mid || count>k) return false;
              sum=0;
              sum+=arr[i];
          }
      }
      return true;
  }
int main(){
    vector<int> arr={5, 10, 30, 20, 15};int k=3;
    int n=arr.size();

        if (k>n) return -1;
        int low=0;
        int sum=0;for(int i=0;i<n;i++) sum+=arr[i];
        int high=sum;
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if (isPossible(arr,mid,k)==true){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
            
        }
        cout<<ans;
    return 0;
}