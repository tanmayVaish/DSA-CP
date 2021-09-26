#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

int main() {
    //
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n;
    cin>>n;

    int a[n];
    double sum =0;
    for(int i=0;i<n;i++) {
      cin>>a[i];
      sum+=a[i];
    };
    cout<<setprecision(12)<<(sum/n*1.0);



    return 0;
}
