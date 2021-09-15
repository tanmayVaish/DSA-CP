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
    int a[n][3];
    int c;
    int res=0;
    for(int i=0;i<n;i++){
      for(int j=0;j<3;j++){
        cin>>a[i][j];
      }
    }
    for(int i=0;i<n;i++){
      c=0;
      for(int j=0;j<3;j++){
        if(a[i][j] == 1) c++;
      }
      if(c>1) res++;
    }
    cout<<res;

    return 0;
}
