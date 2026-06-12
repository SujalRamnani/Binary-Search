#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={1,3,5,6};
    int x=2;
    int n=arr.size();
    int low=0,high=n-1;
    int ans=n;
    while (low<=high)
    {
int mid=low+(high-low)/2;
        if (arr[mid]>=x){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;

    }
    cout<<ans;
    return 0;
}


///ye wahi hai lowerbound
