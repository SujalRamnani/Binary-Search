#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={3,5,8,15,19};
    int n=arr.size();int x=9;
    ///lower bound matlab smallest index such that arr[indx]>=x
    int lb=n; //ans hai ye lowerbound
    int low=0,high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if (arr[mid]>=x){
            lb=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
cout<<lb;
    return 0;
}

///inbuilt method of lowerbound
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> arr={3,5,8,15,19};
//     int n=arr.size();int x=9;
//     int ans=lower_bound(arr.begin(),arr.end(),x)-arr.begin();
//     cout<<ans;
//     return 0;
// }