#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif


    int n,t;
    cin>>n>>t;
    string a;
    cin>>a;

    for(int j=0;j<t;j++){
      for(int i=0;i<n-1;i++){
        if(a[i]=='B' && a[i+1]=='G') {
          swap(a[i], a[i+1]);
          i++;
        }
      }
    }
    for(int i=0;i<n;i++) cout<<a[i];


    return 0;
}
