#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n;
    cin>>n;
    int a,b;
    int tram=0;
    int maxi = 0;
    for(int i=0;i<n;i++){
      cin>>a>>b;
      tram-=a;
      tram+=b;
      maxi = max(tram, maxi);
    }

    cout<<maxi;
    return 0;
}
