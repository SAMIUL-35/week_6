#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main ()

{
  int t;cin>>t;
  while (t--)
  {
    ll n,m;
    cin>>n>>m;
    vector<ll>v(n);
    vector<ll>pre(n);
    for (ll i = 0; i < n; i++)
    {
      cin>>v[i];
    }
        pre[0]=v[0];
    for (ll i = 1; i < n; i++)
    {pre[i]=pre[i-1]+v[i];
        v[i]=max(v[i],v[i-1]);
    }
    while (m--)
    {
       ll x;
       cin>>x;
       ll ans=(upper_bound(v.begin(),v.end(),x))-v.begin();
      if(ans==0)cout<<"0"<<" ";
      else if(ans==n)cout<<pre[n-1]<<" ";
      else cout<<pre[ans-1]<<" ";
    }
    cout<<endl;
  }
  


    return 0;
}