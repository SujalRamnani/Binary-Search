#include<bits/stdc++.h>
using namespace std;
int main(){
    //The floor of x is the largest element in the array which is smaller than or equal to x.
    //The ceiling of x is the smallest element in the array greater than or equal to x
    vector<int> arr={3, 4, 4, 7, 8, 10};
    int x=5;
    int n=arr.size();
    int low=0,high=n-1;
    //floor->arr[indx]<=x largest element which is smaller than or equal to x
    int floor1=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if (arr[mid]<=x){
            floor1=arr[mid]; ///this might be my ans but i want more
            low=mid+1;
        }
        else high=mid-1;
    }


    ///ceil->arr[indx]>=x smallest element which is grater than or equal to x
    int ceil1=-1;
    low=0,high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if (arr[mid]>=x){
            ceil1=arr[mid];
            high=mid-1; //this might be my ans but i want less
        }
        else low=mid+1;

    }
    cout<<floor1<<" "<<ceil1;
    return 0;
}