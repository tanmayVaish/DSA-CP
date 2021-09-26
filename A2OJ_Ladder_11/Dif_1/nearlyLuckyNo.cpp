#include <iostream>
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
    int d;
    while(n>0){
      d=n%10;
      if(d!=4 || d!=7) {
        cout<<"NO";
        return 0;
      }
      n/=10;
    }
    cout<<"YES";
    return 0;
}
