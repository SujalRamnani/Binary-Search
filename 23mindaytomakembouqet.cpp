#include<bits/stdc++.h>
using namespace std;
bool isPossible(vector<int>& bloomDay,int mid,int m,int k){
    //ye kaise likhenge ye function 
    int count=0;long long bouquets=0;
    for(int i=0;i<bloomDay.size();i++){
        if (bloomDay[i]<=mid){
            //matlab flower bloom hogya hai 
            count++;
        }
        else if (bloomDay[i]>mid){
            //isse pehle tak sab line mein thee
            //break aagya 
            //
            bouquets+=(count/k);
            count=0; //iske baad se naya se shuru hoga
        }
    }
    bouquets += count/k; //loop khatm hogya but dusra group abhi tak count nhhi hua
    if (bouquets>=m) return true;
    return false;
}
int main(){
    vector<int> bloomDay={1,10,3,10,2};int m=3;int k=1;
    int n=bloomDay.size();
        int low=1;
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        int ans=-1;
        if ((long long)m*k>n) return -1;
        while(low<=high){
            int mid=(low+high)/2;
            if (isPossible(bloomDay,mid,m,k)==true){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        cout<< ans;
    return 0;
}