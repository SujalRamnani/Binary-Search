#include<bits/stdc++.h>
using namespace std;
//Binary search hamesha sorted array pe lagao

int main(){
    vector<int> arr={-1,0,3,5,9,12};int target=9;
    int n=arr.size();
    int low=0,high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if (arr[mid]<target) low=mid+1;
        else if (arr[mid]==target){
            cout<<mid;
            return 0;
        }
        else if (arr[mid]>target) high=mid-1;
    }
    return 0;
}