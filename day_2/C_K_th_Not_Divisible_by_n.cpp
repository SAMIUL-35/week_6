#include <bits/stdc++.h>

using namespace std;

long long notDivisibleCount(long long x, long long n) {
    return x - x / n;
}




int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;

long long left = 1, right = 1e18, result = -1;

    while (left <= right) {
        long long mid = left + (right - left) / 2;
        // cout<<mid<<" ";
        if (notDivisibleCount(mid, n) >= k) {
            result = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    cout<<result<<endl;
    }

    return 0;
}
