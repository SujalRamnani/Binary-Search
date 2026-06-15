#include<bits/stdc++.h>
using namespace std;
bool isPossible(vector<int> &arr,int mid,int m){
    int n=arr.size();
    int studentCount=1;
    int pageSum=0;  //pagesum batata hai ke pehle student ke liye kitne no of pages allot kiye gye hai//
    for(int i=0;i<n;i++){
         if (pageSum+arr[i]<=mid){
            pageSum+=arr[i];  //pagesum batata hai ke pehle student ke liye kitne no of pages allot kiye gye hai//

         }
         else if (pageSum+arr[i]>mid){ //dusre student pe jana padega //
            studentCount++;
            if (studentCount>m || arr[i]>mid) return false;  //koi bhi array ka element agar mid se bada hua toh return false//
           pageSum=0;  //naye bache se start hoga
            pageSum+=arr[i];
         }
    }
    return true;
}
int main(){
    vector<int> arr={10,20,30,40};int n=arr.size();
    int m=2; //no of students
     if (m>n) return -1; //agar mera students is more than books so return -1///
    int low=*max_element(arr.begin(),arr.end());
    int sum=0;
    for(int i=0;i<n;i++) sum+=arr[i];
    int high=sum;
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if (isPossible(arr,mid,m)==true){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    cout<<ans;
    return 0;
}