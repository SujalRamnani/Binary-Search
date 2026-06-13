#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={100,91,87,76,66,52,43,35,29,13,5};
    int n=arr.size();int target=29;
    int low=0,high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if (arr[mid]>target) low=mid+1; ///array descending mein sorted hai matlab right side pe chota elements milega
        else if (arr[mid]==target){
            cout<<mid;
            return 0;
        }
        else high=mid-1;
    }
    cout<<-1;
    return 0;
}