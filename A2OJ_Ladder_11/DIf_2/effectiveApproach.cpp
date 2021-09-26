#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    ll q;
    cin>>q;
    ll b[q];
    for(ll i=0;i<q;i++) cin>>b[i];

    unordered_map<ll,ll> m;

    for(ll i=0;i<n;i++){
      m[a[i]]=i+1;
    }
    ll c1=0,c2=0;

    for(ll i=0;i<q;i++){
      c1+=m[b[i]];
      c2+=((n+1)-m[b[i]]);
    }
    cout<<c1<<" "<<c2;
    return 0;
}
