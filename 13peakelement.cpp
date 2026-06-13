#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={1,2,3,1};
    int n=arr.size();
        int low=0,high=n-1;
        while(low<high){
            int mid=(low+high)/2;
            if (arr[mid]>arr[mid+1]){
                //this might be my peak
                high=mid;
            }
            else low=mid+1;
        }
        cout<<arr[ low];
    return 0;

}