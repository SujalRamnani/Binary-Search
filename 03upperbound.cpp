#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={3,5,8,15,19};
    int n=arr.size();int x=9;
    ///lower bound matlab smallest index such that arr[indx]>x
    int ub=n; //ans hai ye upperbound
    int low=0,high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if (arr[mid]>x){
            ub=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
cout<<ub;
    return 0;
}

///inbuilt method of upperbound
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> arr={3,5,8,15,19};
//     int n=arr.size();int x=9;
//     int ans=upper_bound(arr.begin(),arr.end(),x)-arr.begin();
//     cout<<ans;
//     return 0;
// }