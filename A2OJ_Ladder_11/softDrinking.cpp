
#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n, k, l, c, d, p;
    cin>>n>>k>>l>>c>>d>>p;
    int np, nl;
    cin>>np>>nl;

    int t1 = (k*l)/np;
    int t2 = (p/nl);
    int t3 = c*d;

    cout<<(min(min(t1,t2),t3)/n);



    return 0;
}
