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
    int c1=0, c2=0,c3=0;
    vector<vector<int>> v;
    for(int i=0;i<n;i++){
      cin>>a>>b;
      if(a) c1++;
      if(b) c2++;
      v.push_back({a,b});
    }

    if(c1<(n-c1)) c3+=c1;
    else c3+=(n-c1);

    if(c2<(n-c2)) c3+=c2;
    else c3+=(n-c2);

    cout<<c3;


    return 0;
}
