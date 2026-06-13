// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n=28;
//     int ans=-1;
//     for(int i=1;i<=n;i++){
//         if (i*i<=n){
//             ans=i;
//         }
//         else break;
//     }
//     cout<<ans;
//     return 0;
// }




#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=28;
    int low=1,high=n;
      int ans=-1;
      while(low<=high){
        int mid=low+(high-low)/2;
        if (mid*mid<=n){
            ans=mid; //this might be my ans
            low=mid+1;
        }
        
        else high=mid-1;
      }
      cout<<ans;
    return 0;
}