#include<bits/stdc++.h>
using namespace std;
long long mySqrt(long long n) {
        long long low = 1, high = n;
        if (n == 0) return 0;

        long long ans = -1;

        while (low <= high) {
            long long mid = low + (high - low) / 2;

            if (mid <= n / mid) { // overflow safe///     mid*mid<=n
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return ans;
    }

int main(){
    int n=5;
     long long m=(long)n;
        cout<< (mySqrt(8LL * m + 1) - 1) / 2;
    return 0;
}