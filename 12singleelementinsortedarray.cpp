#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={1,1,2,2,3,3,4,5,5,6,6};
    int n=arr.size();
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++) mp[arr[i]]++;
    for(auto it:mp){
        if (it.second==1){
            cout<<it.first;
            return 0;
        }
    }
    return 0;
}