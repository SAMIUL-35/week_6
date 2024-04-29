#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n, s,t;
    cin >> n >>s>> t;
    
    auto ok = [&](long long m) {
   
        if(m<min(s,t))
        {
            return false;
        }
           long long total = 1;
           m-=min(s,t);
           total+=m/s +m/t;
        return n<=total;
        };
 
    long long  l = 1, r = min(s, t) * n, mid, ans;
    while (l <= r) {
        mid = l + (r - l) / 2;
        if (ok(mid)) {
            ans = mid;
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }
 
    cout << ans << '\n';
    return 0;
}
