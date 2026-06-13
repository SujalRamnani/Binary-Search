#include<bits/stdc++.h>
using namespace std;
int din(vector<int>& weights,int mid){
    int capacity=mid;
    int days=0;
   
    for(int i=0;i<weights.size();i++){
       if (capacity>=weights[i]) capacity-=weights[i];
       else{  ///1 2 3 4 bhar diya abb 
       //agla din 5 dalenge din++ hoga aur jitna capacity tha usme se 1 2 3 4 ka sum kam hoga
        days++;
        capacity=mid-weights[i];
       }
    }
    days++;
    return days;
    
}
int main(){
    vector<int> weights={1,2,3,4,5,6,7,8,9,10};
    int days=5;
     int n=weights.size();
       int sum=0;
       for(int i=0;i<n;i++) sum+=weights[i];
       int high=sum;
       int low=*max_element(weights.begin(),weights.end());
       int ans=-1;
       while(low<=high){
        int mid=low+(high-low)/2;
        if (din(weights,mid)<=days){
            ans=mid;
            high=mid-1; ///this might be my ans i want minimum
        }
        else low=mid+1;
       }
cout<< ans;
    return 0;
}