#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={3,4,5,1,2};
     int n=arr.size();
        int low=0,high=n-1;
        while(low<high){
            int mid=low+(high-low)/2;
            if (arr[mid]>arr[high]){
                //gadbad go right
                low=mid+1;
            }
            else high=mid; //yehi todd hai 
        }
        cout<< arr[low];
          
    return 0;
}