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
    int a;
    cin>>a;
    int prev=a; // 2
    int c=0;
    for(int i=1;i<n;i++){
      cin>>a; // 1
      if(prev<a) c++;
      prev = a;
    }

    if(n>1 && c==0) c = 1;
    cout<<c;
    return 0;
}
