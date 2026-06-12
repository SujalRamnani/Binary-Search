#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={4,5,6,7,0,1,2,3};
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
        cout<<low; ///minimum element ka index hi hai jitne baar array ko rotate kiya gya hai
          
    return 0;
}