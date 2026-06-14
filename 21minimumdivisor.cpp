#include<bits/stdc++.h>
using namespace std;
bool isPossible(vector<int>& arr,int mid,int threshold){
    long long sum=0;
    for(int i=0;i<arr.size();i++){
        sum+=ceil((1.0*1LL*arr[i])/mid);
    }
    if (sum<=threshold) return true;
    return false;
}
int main(){
    vector<int> arr={44,22,33,11,1};int threshold=5;
     int n=arr.size();
        int low=1;
        int high=*max_element(arr.begin(),arr.end());
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if (isPossible(arr,mid,threshold)==true){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        cout<< ans;
    return 0;
}