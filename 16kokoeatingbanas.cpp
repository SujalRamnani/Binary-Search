#include<bits/stdc++.h>
using namespace std;
bool isPossible(vector<int> &piles,int mid,int h){
    long long totalHours=0;
    for(int i=0;i<piles.size();i++){
        totalHours+=(ceil(1.0*piles[i]/mid));
    }
    if (totalHours<=h) return true;
    return false;
}
int main(){
    vector<int> piles={30,11,23,4,20};int h=5;
     int n=piles.size();
        int low=1;int high=*max_element(piles.begin(),piles.end());
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if (isPossible(piles,mid,h)==true){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        cout<< ans;
    return 0;
}