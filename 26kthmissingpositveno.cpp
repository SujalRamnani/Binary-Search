#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={2,3,4,7,11};int k=5;
    int n=arr.size();
        int low=0,high=n-1;
        while(low<=high){
            int mid=(low+high)/2;

            int kitne_missing_no_till_mid=arr[mid]-(mid+1);
            if ( kitne_missing_no_till_mid<k) low=mid+1;
            else high=mid-1;
        }
        cout<< low+k;///mai last element pe khada hu mere right side mein 4 no hai aur plus k missing no hai//
    return 0;
}



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> arr={2,3,4,7,11};int k=5;
//      int n=arr.size();
//         int num=1; ///number hamesha 1 se start hoga
//         int i=0;
//         while(i<n && k>0){
//             if (arr[i]==num) i++;
//             else k--;
//             num++;
//         }
//         //agar asa situation ho {1,2,3} aur k=2 hai tab
//         while(k--){
//             num++;
//         }
//         cout<< num-1;

//     return 0;
// }