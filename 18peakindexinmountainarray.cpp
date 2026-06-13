// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> arr={0,10,5,2};
//     int n=arr.size();

//     int low=0,high=n-1;
//         int ans=-1;
//         while(low<=high){
//             int mid=low+(high-low)/2;
//             if (arr[mid]<arr[mid+1]) low=mid+1;
//             else{
//                 ans=mid; ///this might be my ans i want less
//                 high=mid-1;
//             }
//         }
//         cout<< ans;
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main(){
     vector<int> arr={0,10,5,2};
     int n=arr.size();
     int i=0;
     while(i<n && arr[i]<arr[i+1]){
     i++;
     }
     cout<<i;
    return 0;
}