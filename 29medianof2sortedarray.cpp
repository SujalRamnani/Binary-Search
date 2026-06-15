#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a={1,2};
    vector<int>b={3,4};
     int m=a.size();int i=0;
        int n=b.size();int j=0;
        vector<int> ans;

        while(i<m && j<n){
            if (a[i]<=b[j]){
                    ans.push_back(a[i]); //isme n vo union mein karte thee n ans.back()!=arr[i] vo nhi karna usse duplicate hat jate hai aur median 
                    //mein duplicates ko nhi hatana so sidha add karo aur i ko badhao same aage bhi j ke liye///
                i++;
            }
            else{
                    ans.push_back(b[j]);
                j++;
            }
        }

        if (i==m){
            while(j<n){ 
                    ans.push_back(b[j]);
                j++;

            }
        }
        
        if (j==n){
            while(i<m){
                    ans.push_back(a[i]);
                i++;
            }
        }

        int k=ans.size();
        if (k%2!=0) cout<<ans[k/2];
        if (k%2==0){
            double mid1=ans[k/2];
            double mid2=ans[k/2-1];
            double ans=(mid1+mid2)/2;
           cout<<ans;
           return 0;
        }
        

    return 0;
}