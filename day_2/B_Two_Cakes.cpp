#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, b;
    cin >> n >> a >> b;

    auto ok = [&](long long mid) {
        return (a / mid) + (b / mid) >= n && a >= mid && b >= mid;
    };

    long long l = 1, r = max(a, b), ans = 0;
    while (l <= r) {
        long long mid = l + (r - l) / 2;
        if (ok(mid)) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    cout << ans << endl;

    return 0;
}
