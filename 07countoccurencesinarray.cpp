// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> arr={2, 2 , 3 , 3 , 3 , 3 , 4};
//     int n=arr.size();
//     unordered_map<int,int> mp;
//     int x=3;
//     for(int i=0;i<n;i++) mp[arr[i]]++;
//     for(auto it:mp){
//         if (it.first==3){
//             cout<<it.second;
//             break;
//         }
//     }
//     return 0;
// }

///last occurence-first occurence+1
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={2, 2 , 3 , 3 , 3 , 3 , 4};
     int n=arr.size();
     int low=0,high=n-1;
int target=3;
    int first=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if (arr[mid]==target){
            first=mid;
            high=mid-1;
        }
        else if (arr[mid]<target) low=mid+1;
        else high=mid-1;
    }

    int last=-1;
    low=0,high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if (arr[mid]==target){
            last=mid;
            low=mid+1;
        }
        else if (arr[mid]<target) low=mid+1;
        else high=mid-1;
    }
cout<<last-first+1;
    return 0;
}