#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;
    while (q--) {
        long long t, n;
        cin >> t>> n;
        vector<long long> a(n);
        for (long long  i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end(), greater<int>());

       

        int ans=0;int c=0;
       for(int i=0;i<n;i++)
       {
          if(c<a[i]) ans++;
          else {
              break;
          }
          c+=t-a[i];
       }

        cout << ans << '\n';
    }

    return 0;
}

